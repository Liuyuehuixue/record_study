#!/bin/bash

CONFIG_FILE="config.json"

# check exit 
if [ ! -f "$CONFIG_FILE" ]; then
  echo "Error: Configuration file '$CONFIG_FILE' not found."
  exit 1
fi

BINARY_PATH=$(jq -r '.mxfCaptureEx_path' "$CONFIG_FILE")
MYSELF_IP=$(jq -r '.myselfip' "$CONFIG_FILE")
FFMPEG_PORT=$(jq -r '.ffmpegport' "$CONFIG_FILE")
SERVER_IP=$(jq -r '.serverip' "$CONFIG_FILE")
DB_PORT=$(jq -r '.dbport' "$CONFIG_FILE")
DB_NAME=$(jq -r '.dbname' "$CONFIG_FILE")
DB_USER=$(jq -r '.dbuser' "$CONFIG_FILE")
DB_PASSWD=$(jq -r '.dbpassword' "$CONFIG_FILE")

# 构建完整的启动命令
START_COMMAND="$BINARY_PATH --myselfip $MYSELF_IP --ffmpegport $FFMPEG_PORT --serverip $SERVER_IP --dbport $DB_PORT --dbname $DB_NAME --dbuser $DB_USER --dbpassword $DB_PASSWD"

# 打印启动命令
echo "Starting server with command: $START_COMMAND"

# 执行启动命令
$START_COMMAND
