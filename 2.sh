#!/bin/bash
    echo Shell script executed level 2

ps aux | grep -w Z

kill -9 $(ps -A -ostat,ppid | grep -e '[zZ]'| awk '{ print $2 }')
echo Killed
