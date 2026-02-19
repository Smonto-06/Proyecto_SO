# Diseño

Arquitectura modular inspirada en equipos de 3+ personas, adaptada a una versión individual y sencilla:
- `src/core`: flujo principal.
- `src/commands`: comandos por categoría.
- `src/utils`: ayudas de UI y mensajes.

## Mapeo de comandos
- Básicos: `listar`, `leer`, `tiempo`, `calc`, `ayuda`, `salir`.
- Avanzados: `crear` (archivo) y `limpiar` (sistema).