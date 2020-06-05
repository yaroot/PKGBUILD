#!/usr/bin/env sh

BASE_DIR=/opt/milkman

java -XX:+UseG1GC -Xmx1g -Xms1g \
  -Dprism.dirtyopts=false -cp "$BASE_DIR"/plugins/*:"$BASE_DIR"/milkman.jar milkman.MilkmanApplication

