#!/bin/bash

# This file is a part of 3gpp_tester open source project.
# Copyright (c) 2021 Supreeth Herle.
# 
# The software and all associated files are licensed under GPL-3.0
# and subject to the terms and conditions defined in LICENSE file.

# Run only on Ubuntu 20.04 with clang-10 and clang-format-10 installed
# Use openapi-generator 4.3.1

set -e

usage ()
{
  echo 'Usage : ./generator.sh -o <output_dir> -i <input_dir>'
  exit
}

if [ "$#" -ne 4 ]
then
  usage
fi

while [ "$1" != "" ]; do
case $1 in
        -o )           shift
                       OUTPUT_DIR=$1
                       ;;
        -i )           shift
                       INPUT_DIR=$1
                       ;;
esac
shift
done

if [ "$OUTPUT_DIR" = "" ]
then
    usage
fi
if [ "$INPUT_DIR" = "" ]
then
    usage
fi

echo "OUTPUT_DIR=$OUTPUT_DIR"
echo "INPUT_DIR=$INPUT_DIR"

SPECFILES=`ls $INPUT_DIR/*.yaml 2>/dev/null`

export CPP_POST_PROCESS_FILE="/usr/bin/clang-format-10 -i"

for f in $SPECFILES
do
echo "#################################################################################"
echo "Generating for: $f"
echo "#################################################################################"
# java -jar openapi-generator-cli.jar generate -i $f -g cpp-pistache-server -o $OUTPUT_DIR --skip-validate-spec --enable-post-process-file
java -jar openapi-generator-cli.jar generate -i $f -g cpp-pistache-server -o $OUTPUT_DIR --enable-post-process-file
echo "#################################################################################"
echo ""
echo "#################################################################################"
done 
