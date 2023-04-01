# Analisis de algoritmos

## Ejemplo 1:
![Problema Ejemplo1](./multimedia/Ev_3%20-%20Ej_1.png)

Este ejemplo esta programado en ***JAVA*** y es un algortmo que dentro de la funcion main crea una matriz definida y llama al metodo "metodo" para asi invertir el arreglo e imprimirlo en por consola.

La salida generada por este Ejemplo es:
```bash
64 10 32
```
___
## Ejemplo 2:
![Problema Ejemplo2](./multimedia/Ev_3%20-%20Ej_2.png)

En este ejemplo se tiene un algoritmo de ordenamiento en el cual se da un arreglo de vocales desordenadas y cuando se pasa por el metodo deberia salir ordenado, lo cual no sucede ya que esta mal escrito y genera una respuesta que no corresponde con la salida generada.

Por lo que corrigiendo el error en el ejemplo dado queda:

```java
class Ejerciocio2 {
        public static void main (String [] args){
                char [] matriz = {'e','u','o','i','a'};
                metodo(matriz);
                for(int i = 0; i<matriz.length; i++){
                        System.out.println(matriz[i]);
                }
        }
        public static void metodo(char [] vocales){
          	int n = vocales.length;
        	for (int i = 0; i < n-1; i++) {
            		int minIndex = i;
            		for (int j = i+1; j < n; j++) {
            	    		if (vocales[j] < vocales[minIndex]) {
	                   	 minIndex = j;
        	       		 }
           		 }
            	char temp = vocales[minIndex];
            	vocales[minIndex] = vocales[i];
            	vocales[i] = temp;
        	}
        }
}
```
Y la salida generada es:

```bash
a
e
i
o
u
```
___
## Ejercicio 3
![Problema Ejemplo3](./multimedia/Ev_3%20-%20Ej_3.png)

Lo que se tiene en este algoritmo es el ordenamiento de manera desendiente es decir de mayor a menor.
Por ende la salida generada por dicho algoritmo es:

```bash
9
7
5
1
```



Codigos: [Ejercicios](../Tarea3/)