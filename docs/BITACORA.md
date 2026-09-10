# Bitacora de Decisiones - Cwitter

Registro de decisiones de disenio y arquitectura del proyecto.

---

## Decision 1: Arquitectura por capas

### Problema

Mantener el codigo organizado y escalable a medida que el proyecto crece.

### Alternativas consideradas

1. **Logica mezclada en la interfaz**: Todo el codigo junto en la UI. Rapido de implementar pero dificil de mantener.
2. **Separacion por modulos**: Organizar el codigo en modulos independientes con responsabilidades claras.

### Decision

Arquitectura por capas con separacion en: UI, Services, Repositories y Models.

### Justificacion

Permite mantener desacople entre componentes. Facilita futuras ampliaciones como cambiar la UI sin tocar la logica de negocio, o cambiar la persistencia sin afectar las capas superiores.

---

## Decision 2: Persistencia con archivos binarios

### Problema

Conservar informacion entre ejecuciones del programa.

### Alternativas consideradas

1. **Archivos de texto**: Faciles de leer y depurar, pero requieren parsing y son menos eficientes.
2. **Archivos binarios**: Mayor eficiencia en lectura/escritura de estructuras, menor tamano de archivo.

### Decision

Archivos binarios (.dat).

### Justificacion

Mayor eficiencia y menor complejidad de lectura/escritura de estructuras directamente con `fread`/`fwrite`. Adecuado para el alcance del proyecto y la materia.

---

## Decision 3: Interfaz de usuario con PDCurses

### Problema

Mejorar la experiencia de usuario respecto a una consola tradicional.

### Alternativas consideradas

1. **Consola tradicional (printf/scanf)**: Simple pero limitada visualmente.
2. **TUI con PDCurses**: Interfaz de texto mejorada con ventanas, menus y navegacion por teclado.

### Decision

PDCurses como framework de interfaz de usuario.

### Justificacion

Aporta valor visual sin abandonar ANSI C. Permite crear menus, ventanas y navegacion por teclado, mejorando significativamente la experiencia del usuario. Es ligero y funcional para una TUI.

---
