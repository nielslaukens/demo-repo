#!/bin/bash

gcc -std=gnu99 -o hello-world hello-world.c || exit 125 # Can't test
trap 'rm hello-world' EXIT

TIMER=
function alarm_in_seconds() {
	(
	  sleep 2
	  kill -ALRM $$
	) &
	TIMER=$!
}

function timeout() {
	kill -TERM $PID
	exit 1
}

trap timeout SIGALRM
alarm_in_seconds 2
./hello-world bla >/dev/null &
PID=$!
wait $PID
kill -9 $TIMER
exit 0
