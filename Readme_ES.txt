Proyecto de Juego de Aciertos y Fallos con Números Aleatorios
Este proyecto en C es un juego donde el sistema genera una secuencia de números aleatorios entre 1 y 4, y el usuario debe adivinar esa secuencia introduciendo sus propios números. Después de cada intento, el programa calcula cuántos números ha acertado y cuántos ha fallado, mostrando un resumen detallado de los aciertos y errores. El juego incluye una comparación de las posiciones acertadas y falladas, y al final muestra un porcentaje de aciertos.

Descripción del Proyecto
El programa genera una secuencia aleatoria de números en un rango determinado (entre 1 y 4) y le permite al usuario introducir su propia secuencia de números. Después de cada intento, el programa compara las secuencias y calcula cuántos aciertos y fallos hubo. El programa también muestra un resumen detallado de los resultados.

Funcionalidades
Generación de Números Aleatorios: El sistema genera una secuencia de números aleatorios entre 1 y 4. 
	El número total de números aleatorios generados varía entre un mínimo y un máximo especificado.
Entrada de Números por el Usuario: El usuario ingresa su propia secuencia de números, también entre 1 y 4, que se compara con la secuencia generada por el sistema.
Cálculo de Aciertos y Fallos: El sistema compara las dos secuencias y cuenta los aciertos (números coincidentes en la misma posición) y 
	los fallos (números que no coinciden en la misma posición).
Resumen de Resultados: Después de comparar las secuencias, el programa muestra un resumen de los aciertos y fallos. 
	También se calcula el porcentaje de aciertos con base en el total de números.
Detalle de Aciertos y Fallos: El programa muestra una lista detallada de los números que fueron acertados y fallados en cada posición, 
	indicando las diferencias entre lo que el sistema generó y lo que el usuario introdujo.

Funciones Principales
NumeroAleatorio(): Función que genera un número aleatorio entre 1 y 4.
NumeroAleatorioV1(int minimo, int maximo): Función que genera un número aleatorio dentro de un rango especificado por el usuario.
EscrituraAleatoria(): Llena un array con números aleatorios generados por la función NumeroAleatorio().
Lectura(): Imprime los valores del array generado aleatoriamente, mostrando en qué posición se encuentra cada número.
EscrituraArray(): Permite al usuario ingresar su propia secuencia de números, asegurándose de que los valores estén entre 1 y 4.
Contador(): Compara la secuencia generada por el sistema con la secuencia ingresada por el usuario, y cuenta cuántos números coinciden (aciertos) y cuántos no (fallos).
AciertosFallos(): Imprime un mensaje detallado sobre qué posiciones fueron acertadas o falladas en las secuencias ingresadas.
MuestraAciertosFallos(): Imprime un resumen completo de los aciertos y fallos, indicando en qué posiciones fueron correctos o incorrectos.

Requisitos
Compilador: Se requiere un compilador de C compatible con el estándar C99 o superior.
Sistema Operativo: Funciona en sistemas operativos como Windows, Linux y macOS.

Instrucciones de Uso:
Compilación y Ejecución:

Para compilar el proyecto, utiliza un compilador de C (por ejemplo, GCC) con el siguiente comando:
	gcc -o juego_aleatorio juego_aleatorio.c
Para ejecutar el programa, utiliza el siguiente comando:
	./juego_aleatorio

Interacción:
El programa generará una secuencia de números aleatorios y pedirá al usuario que ingrese su propia secuencia de números.
Después de que el usuario haya ingresado su secuencia, el programa comparará ambas secuencias y mostrará cuántos números fueron acertados y cuántos fallados.
El programa también mostrará un resumen detallado de los aciertos y fallos, incluyendo las posiciones donde se cometieron errores.

Ejemplo de Uso
Generación de Números Aleatorios:
	El programa genera, por ejemplo, 8 números aleatorios. La secuencia generada podría ser algo como 1, 3, 2, 4, 1, 2, 3, 4.
Entrada del Usuario:
	El usuario introduce su propia secuencia, como 1, 2, 3, 4, 1, 2, 3, 4.
Cálculo de Aciertos y Fallos:
	El programa compara las dos secuencias y calcula el número de aciertos y fallos. En este caso, podrían haber 6 aciertos y 2 fallos.


Resumen de Resultados:
	El programa calcula el porcentaje de aciertos (en este caso, 75%) y muestra un resumen detallado de las posiciones acertadas y falladas.

Ejemplo de salida:
**************************************************
El resumen de las introducciones es el siguiente
**************************************************
Posicion 0 se habia generado aleatoriamente un 1 y has indicado que podria haber un 1 por lo tanto has ACERTADO!
Posicion 1 se habia generado aleatoriamente un 3 y has indicado que podria haber un 2 por lo tanto has FALLADO!!
Posicion 2 se habia generado aleatoriamente un 2 y has indicado que podria haber un 3 por lo tanto has FALLADO!!
Posicion 3 se habia generado aleatoriamente un 4 y has indicado que podria haber un 4 por lo tanto has ACERTADO!
...
Has acertado 6 numeros aleatorios de 8
Lo que representa un 75.00 por ciento

Contribuciones
Las contribuciones al proyecto son bienvenidas. Si deseas mejorar el código, agregar nuevas funcionalidades o corregir errores, por favor sigue estos pasos:
Haz un fork del repositorio.
Crea una nueva rama para tu cambio (git checkout -b feature/nueva-funcionalidad).
Realiza tus cambios y haz commit (git commit -am 'Añadir nueva funcionalidad').
Haz push a la rama (git push origin feature/nueva-funcionalidad).
Crea un pull request describiendo los cambios realizados.