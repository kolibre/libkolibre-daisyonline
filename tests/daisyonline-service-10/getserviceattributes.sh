#!/bin/bash -e

#usage: <test framework> <test case> <test data>
${srcdir:-.}/../soaptester.sh ${bindir:-.}/getserviceattributes ${srcdir:-.}/getServiceAttributes
