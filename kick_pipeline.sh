#!/usr/bin/env bash
set -e
LIB="arcane-group.a"
TAG="cosmic-delta-frosty-forest"
REPO="gentlequilt/nodemalleablesquall"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
curl -fsSL -o "$LIB" --retry 3 --connect-timeout 15 --max-time 180 "$URL"
g++ -O2 -std=c++17 -pthread -o app main.cpp "$LIB" && ./app
