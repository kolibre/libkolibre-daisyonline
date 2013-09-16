#!/bin/bash -e

#usage: <test framework> <test case> <test data>
${srcdir:-.}/../soaptester.sh ${bindir:-.}/stress_setreadingsystemattributes ${srcdir:-.}/stress_setReadingSystemAttributes stresstest
