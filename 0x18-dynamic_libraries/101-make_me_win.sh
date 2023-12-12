#!/bin/bash

FILE_PATH="/tmp/win.so"

# Check if the file exists in /tmp directory
if [ ! -f "$FILE_PATH" ]; then
    # If missing, download it from the specified URL
    wget -O /tmp/win.so https://github.com/Relay90/alx-low_level_programming/raw/master/0x18-dynamic_libraries/win.so
    echo "File 'win.so' downloaded to /tmp directory."
fi

# Ensure file permissions allow reading and execution
if [ -f "$FILE_PATH" ] && ! [ -r "$FILE_PATH" ] || ! [ -x "$FILE_PATH" ]; then
    chmod +rx "$FILE_PATH"
    echo "Permissions updated for 'win.so'."
fi

# Update LD_PRELOAD path
export LD_PRELOAD="$FILE_PATH"
echo "LD_PRELOAD set to $FILE_PATH"
