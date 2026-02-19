#!/usr/bin/env bash
set -euo pipefail
if command -v clang-format >/dev/null 2>&1; then
  clang-format -i $(find src include tests -name '*.c' -o -name '*.h')
  echo "Formato aplicado"
else
  echo "clang-format no está instalado"
fi