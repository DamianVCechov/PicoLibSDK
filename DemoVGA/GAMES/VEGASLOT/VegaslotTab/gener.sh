#!/bin/bash
if [[ -e VegaslotTab ]]; then
  ./VegaslotTab > Table.cpp
else
  gcc -32 VegaslotTab.cpp -o VegaslotTab
  ./VegaslotTab > Table.cpp
fi
