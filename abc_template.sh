#!/bin/bash

echo "Input contest number of abc."
read contest_number

BASEDIR=$(dirname "$0")
$BASEDIR/templatemaker << !
abc
abc$contest_number
6
!
exit 0