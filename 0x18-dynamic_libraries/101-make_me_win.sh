#!/bin/bash
cp fakerand.so /tmp/fakerand.so
export LD_PRELOAD=/tmp/fakerand.so
