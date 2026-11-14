#!/bin/sh
# Build helper for the Linux GRAPH 85 distribution.
#
#   ./build.sh            build the launcher
#   ./build.sh dist       build and create dist/GRAPH85 + tarball
#   ./build.sh install    build and install under /usr/local (PREFIX=... to change)
#   ./build.sh run        build and start the emulator
#   ./build.sh clean      remove build artefacts
set -eu

cd "$(dirname "$0")"

target="${1:-all}"
if [ "$#" -gt 0 ]; then
    shift
fi

command -v make >/dev/null 2>&1 || {
    echo "build.sh: 'make' est requis" >&2
    exit 1
}
command -v cc >/dev/null 2>&1 || {
    echo "build.sh: un compilateur C ('cc') est requis" >&2
    exit 1
}

exec make "$target" "$@"
