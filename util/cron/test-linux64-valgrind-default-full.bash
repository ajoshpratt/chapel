#!/usr/bin/env bash
#
# Test default configuration on full suite with valgrind on linux64.

CWD=$(cd $(dirname $0) ; pwd)
source $CWD/common.bash
source $CWD/common-fifo.bash
source $CWD/common-valgrind.bash

$CWD/nightly -cron ${nightly_args}
