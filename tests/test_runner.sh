#!/usr/bin/env bash
set -euo pipefail

make clean
make

printf 'ayuda\ncalc 2 + 3\ncrear test_archivo.txt\nleer test_archivo.txt\ntiempo\nlimpiar\nsalir\n' | ./EAFITos >/tmp/eafitos_test_output.txt

grep -q "Comandos básicos (6)" /tmp/eafitos_test_output.txt
grep -q "Comandos avanzados (2)" /tmp/eafitos_test_output.txt
grep -q "Resultado: 5" /tmp/eafitos_test_output.txt
grep -q "Archivo 'test_archivo.txt' creado correctamente" /tmp/eafitos_test_output.txt

echo "Pruebas de integración mínimas: OK"
rm -f test_archivo.txt /tmp/eafitos_test_output.txt