## Introducción
Este programa en C++ tiene como objetivo calcular el factorial de un número dado por el usuario. 

## Funciones
El código cuenta con dos funciones: 
- `main`: es la función principal que permite la interacción con el usuario y llama a la función `factorial`.
- `factorial`: es la función encargada de calcular el factorial del número dado. Recibe un parámetro `num` que es el número al cual se desea calcular su factorial. Retorna un número entero que representa el resultado del cálculo.

## Flujo del código
1. El programa comienza con la ejecución de la función `main`
2. En la función `main`, se pide al usuario que ingrese un número para calcular su factorial.
3. La función `factorial` es llamada y recibe el número ingresado por el usuario.
4. En la función `factorial`, se verifica si el número es menor a 0. Si es así, se retorna 0.
5. Si el número es mayor a 1, se hace una llamada recursiva a la función `factorial` con el número decrementado en 1 y se retorna el resultado multiplicado por el número original.
6. Si el número es igual a 1 o 0, se retorna 1.
7. La función `main` imprime el resultado del cálculo.

## Consideraciones
- El cálculo del factorial de números muy grandes puede hacer que la función `factorial` se sature y no pueda continuar con su ejecución, produciendo un resultado incorrecto.
- Se ha establecido un límite en el cálculo del factorial (33), por lo que si se intenta calcular el factorial de números mayores a este, se retornará un valor negativo.

