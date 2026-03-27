# Sistema de Gestión de Turnos para Estudiantes

## Descripción
Aplicación de consola en C++ que permite gestionar una cola de estudiantes que esperan atención. El sistema utiliza una lista enlazada simple implementada manualmente para mantener el orden FIFO (primero en llegar, primero en ser atendido).

## Estructura de datos utilizada
Se emplea una **lista enlazada simple** con punteros `frente` y `final` para simular una cola. Cada nodo almacena:
- Nombre del estudiante (`string`)
- Código del estudiante (`string`)
- Puntero al siguiente nodo

**Justificación**: La lista enlazada permite inserción y eliminación eficiente en los extremos (O(1) para encolar y desencolar) sin necesidad de desplazar elementos, a diferencia de un arreglo estático. Además, no requiere un tamaño máximo predefinido.

## Complejidad algorítmica
| Operación | Complejidad | Explicación |
|-----------|-------------|-------------|
| Registrar (encolar) | O(1) | Se inserta al final actualizando el puntero `final`. |
| Atender (desencolar) | O(1) | Se elimina el primer nodo actualizando `frente`. |
| Mostrar | O(n) | Se recorre toda la lista para mostrar cada estudiante. |
| Buscar por nombre | O(n) | En el peor caso se recorre toda la lista hasta encontrar el nombre. |

## Instrucciones de compilación y ejecución

### Requisitos
- Compilador de C++ (g++ recomendado)
- Sistema operativo Windows, macOS o Linux

### Pasos
1. Clonar el repositorio o descargar los archivos.
2. Abrir una terminal en la carpeta del proyecto.
3. Compilar:
   ```bash
   g++ main.cpp -o programa
