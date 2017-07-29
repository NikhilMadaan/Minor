	#!/bin/bash

cd /tmp/newtemp
echo list of temp files
du -a --max-depth=1 | sort -hr

sudo rm -r /tmp/*



echo donne clearing
