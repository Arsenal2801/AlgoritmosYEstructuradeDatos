# Orden de complejidad
## Introduccion

La ***complejidad*** de los algoritmos es una medida de cuánto tiempo y recursos se necesitan para que un algoritmo resuelva un problema en particular. El análisis de la complejidad de los algoritmos es un aspecto fundamental de la ciencia de la computación, ya que permite determinar cuál es el algoritmo más adecuado para un problema específico.

Para analizar la complejidad de los algoritmos, se utilizan modelos matemáticos y se aplican técnicas de análisis de algoritmos. Uno de los principales objetivos del análisis de la complejidad de los algoritmos es determinar su orden de crecimiento, que indica cómo aumenta el tiempo de ejecución del algoritmo a medida que el tamaño del problema se incrementa.

En este reporte se analizará la complejidad de algunos algoritmos comunes utilizando modelos matemáticos y técnicas de análisis de algoritmos, incluyendo el cálculo de sus órdenes de crecimiento.
_____
## Metodos para el analisis

### Modelos matemáticos:

Para analizar la complejidad de los algoritmos se utilizan modelos matemáticos que permiten medir su tiempo de ejecución en términos de una función matemática. A continuación, se describen algunos de los modelos matemáticos más utilizados en el análisis de la complejidad de los algoritmos:

1. ***Modelo constante:*** Un algoritmo con tiempo de ejecución constante tiene una complejidad de O(1). Esto significa que el tiempo de ejecución no depende del tamaño del problema.

2. ***Modelo lineal:*** Un algoritmo con tiempo de ejecución lineal tiene una complejidad de O(n). Esto significa que el tiempo de ejecución aumenta de forma proporcional al tamaño del problema.

3. ***Modelo cuadrático:*** Un algoritmo con tiempo de ejecución cuadrático tiene una complejidad de O(n^2). Esto significa que el tiempo de ejecución aumenta de forma cuadrática con el tamaño del problema.

4. ***Modelo exponencial:*** Un algoritmo con tiempo de ejecución exponencial tiene una complejidad de O(2^n). Esto significa que el tiempo de ejecución aumenta de forma exponencial con el tamaño del problema.
___

## Análisis de algoritmos:

El análisis de algoritmos es una técnica utilizada para determinar la complejidad de los algoritmos. A continuación, se describen algunas de las técnicas de análisis de algoritmos más utilizadas:

1. ***Análisis de peor caso:*** Esta técnica consiste en analizar el tiempo de ejecución del algoritmo para el peor caso posible, es decir, para el conjunto de datos que requieren más tiempo para ser procesados.

2. ***Análisis de mejor caso:*** Esta técnica consiste en analizar el tiempo de ejecución del algoritmo para el mejor caso posible, es decir, para el conjunto de datos que requieren menos tiempo para ser procesados.

3. ***Análisis de caso promedio:*** Esta técnica consiste en analizar el tiempo de ejecución del algoritmo para un conjunto de datos aleatorios.
___
### Órdenes de crecimiento:

El orden de crecimiento de un algoritmo indica cómo aumenta el tiempo de ejecución del algoritmo a medida que el tamaño del problema se incrementa. A continuación, se describen las órdenes de crecimiento más comunes:
1. O(1): El tiempo de ejecución del algoritmo no varía con el tamaño del problema, es decir, es constante.

2. O(log n): El tiempo de ejecución del algoritmo aumenta de forma logarítmica con el tamaño del problema.

3. O(n): El tiempo de ejecución del algoritmo aumenta de forma proporcional al tamaño del problema.

4. O(n log n): El tiempo de ejecución del algoritmo aumenta de forma logarítmica con el tamaño del problema, pero con una constante multiplicativa que depende de n.

5. O(n^2): El tiempo de ejecución del algoritmo aumenta de forma cuadrática con el tamaño del problema.

6. O(2^n): El tiempo de ejecución del algoritmo aumenta de forma exponencial con el tamaño del problema.
___
## Ejemplos de análisis de complejidad de algoritmos:

1. Búsqueda lineal: La búsqueda lineal es un algoritmo simple que consiste en buscar un elemento en una lista recorriéndola de principio a fin. Su complejidad es de O(n), ya que el tiempo de ejecución aumenta de forma proporcional al tamaño de la lista.

2. Búsqueda binaria: La búsqueda binaria es un algoritmo más eficiente que la búsqueda lineal, utilizado para buscar un elemento en una lista ordenada. Su complejidad es de O(log n), ya que en cada iteración se divide el tamaño del problema a la mitad.

3. Ordenamiento por burbuja: El ordenamiento por burbuja es un algoritmo sencillo que consiste en recorrer una lista varias veces, comparando pares de elementos y cambiándolos de lugar si están en el orden equivocado. Su complejidad es de O(n^2), ya que en cada iteración se recorre toda la lista.

4. Ordenamiento rápido: El ordenamiento rápido es un algoritmo eficiente que utiliza una estrategia de divide y conquista. Su complejidad es de O(n log n), ya que en cada iteración se divide el tamaño del problema en dos partes y se resuelve cada una por separado.
___
## Concluciones
El análisis de la complejidad de los algoritmos es esencial para la selección y optimización de algoritmos en la solución de problemas. Los modelos matemáticos, las técnicas de análisis de algoritmos y la determinación de las órdenes de crecimiento son herramientas fundamentales para el análisis de la complejidad de los algoritmos. Es importante tener en cuenta que el análisis de la complejidad de un algoritmo no es el único factor a considerar en la selección de un algoritmo, ya que también se deben tener en cuenta otros aspectos, como la legibilidad del código, la facilidad de mantenimiento y la escalabilidad del algoritmo