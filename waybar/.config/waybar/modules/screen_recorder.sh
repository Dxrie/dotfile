#!/bin/bash
# ~/.config/waybar/modules/screen_recorder.sh

PID_FILE="$HOME/.cache/wl-screenrec.pid"
OUT_DIR="$HOME/Videos"
OUT_FILE="$OUT_DIR/recording-$(date +%F_%H-%M-%S).mp4"

status() {
  if [ -f "$PID_FILE" ] && kill -0 $(cat "$PID_FILE") 2>/dev/null; then
    echo '{"text":"","class":"recording"}'
  else
    echo '{"text":"","class":"not-recording"}'
  fi
}

start() {
  mkdir -p "$OUT_DIR"
  wl-screenrec -f "$OUT_FILE" &
  echo $! >"$PID_FILE"
}

stop() {
  if [ -f "$PID_FILE" ]; then
    kill -INT $(cat "$PID_FILE")
    rm -f "$PID_FILE"
  fi
}

restart() {
  stop
  sleep 1
  start
}

save() {
  stop
  notify-send "Screen Recording" "Saved to $OUT_FILE"
}

case "$1" in
status) status ;;
start) start ;;
stop) stop ;;
restart) restart ;;
save) save ;;
toggle)
  if [ -f "$PID_FILE" ] && kill -0 $(cat "$PID_FILE") 2>/dev/null; then
    stop
  else
    start
  fi
  ;;
*) status ;;
esac
