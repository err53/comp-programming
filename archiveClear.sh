#!/usr/bin/env bash

find Project\ Archive* -mtime +30 -exec rm -rf {} \;

sleep .5
