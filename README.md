# Gestión de Turnos para Estudiantes

## Descripción
Es un programa en C++ que sirve para llevar el control de los estudiantes que esperan atención. Funciona como una cola: el primero que se registra es el primero en ser atendido.

## Estructura que usé
Usé una **lista enlazada simple** que hice yo mismo con punteros. Elegí esta estructura porque se puede agregar y quitar estudiantes fácilmente sin tener que mover todo como pasaría con un arreglo. Además no hay un límite de estudiantes.

### Operaciones:
- **Registrar** (encolar): se agrega al final de la lista.
- **Atender** (desencolar): se quita al primero.
- **Mostrar**: recorre la lista desde el inicio.
- **Buscar**: recorre la lista hasta encontrar el nombre.

## Complejidad (en palabras simples)
- Registrar y atender son rápidos: siempre toman el mismo tiempo sin importar cuántos estudiantes haya.
- Mostrar y buscar toman más tiempo si hay muchos estudiantes, porque hay que revisar uno por uno.

## Cómo compilar y ejecutar

### Requisitos
- Tener un compilador de C++ (como g++).

### Pasos
1. Abrir una terminal en la carpeta donde está el archivo `main.cpp`.
2. Escribir:  
   `g++ main.cpp -o programa.exe`
3. Luego ejecutar:  
   `programa.exe`

Si el usuario usa Linux o Mac, el comando para ejecutar es `./programa` (sin el .exe).

## Autor
Alvaro Daniel Sillerico Cruz
## Fecha
27 de marzo del 2026
## Materia
Estructura de Datos
## Paralelo
Paralelo 1
## Semestre
Tercer Semestre
Gestion 1-26
