#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Funcion que imprime vdd o falso segun si x e y estan entre 0 y 1
double trueOrFalse(double x, double y)
{
	(0 < x && 0 < y && x < 1 && y < 1) ? printf("\nVerdadero\n") : printf("\nFalso\n");
}

// Funcion que convierte el binario de un entero positivo N a una cadena S
char *intToBinaryString(int n)
{
	char *binaryString = malloc(sizeof(char) * 33);
	int index = 0;
	for (int i = 31; i >= 0; i--)
	{
		int bit = (n >> i) & 1;
		binaryString[index] = bit + '0';
		index++;
	}
	binaryString[index] = '\0';
	return binaryString;
}

// Funcion que tome tres numeros enteros y si son iguales los tres imprima "igual" y si no "no igual"
int threeNumbersEquals(int a, int b, int c)
{
	(a == b && b == c) ? printf("\nIguales\n") : printf("\nNo son iguales\n");
}

// Funciin de fibonacci sin recursividad
int fibonacci(int m)
{
	int t1 = 0, t2 = 1, nextTerm;
	printf("\nSerie: ");
	for (int i = 1; i <= m; i++)
	{
		printf("%d ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
}

// Funcion de Fibonacci recursivo
int fibonacciRecursive(int m)
{
	if (m <= 1)
	{
		return m;
	}
	return fibonacciRecursive(m - 1) + fibonacciRecursive(m - 2);
}

int main()
{
	int op;
	printf("\nIngrese una opcion segun el siguiente menu: \n");
	printf("0.- Salir\n");
	printf("1.- Verdadero o falso\n");
	printf("2.- Entero a texto\n");
	printf("3.- Numeros iguales\n");
	printf("4.- Fibonacci\n");
	printf("5.- Fibonacci recursivo\n");
	scanf("%i", &op);
	while (op != 0)
	{
		switch (op)
		{
		case 1:
			double x = 0;
			double y = 0;
			printf("\nIngrese un valor para x:");
			scanf("%lf", &x);
			printf("\nIngrese un valor para y:");
			scanf("%lf", &y);
			trueOrFalse(x, y);
			break;

		case 2:
			int n;
			printf("\nIngrese un numero n positivo ");
			scanf("%i", &n);
			char *binaryString = intToBinaryString(n);
			printf("\n%s\n", binaryString);
			free(binaryString);
			break;

		case 3:
			int a, b, c;
			printf("\nIngrese un numero a: ");
			scanf("%i", &a);
			printf("Ingrese un numero b: ");
			scanf("%i", &b);
			printf("Ingrese un numero c: ");
			scanf("%i", &c);
			threeNumbersEquals(a, b, c);
			break;

		case 4:
			int m;
			printf("\nIngrese el numero de terminos que desea sumar: ");
			scanf("%i", &m);
			fibonacci(m);
			break;

		case 5:
			int l;
			printf("\nIngrese el numero de terminos que desea sumar: ");
			scanf("%i", &l);
			printf("\nSerie de fibonacci: ");
			for (int i = 0; i < l; i++)
			{
				printf("%d ", fibonacciRecursive(i));
			}

			break;

		default:
			op = 0;
			break;
		}
		printf("\nIngrese una opcion segun el siguiente menu: \n");
		printf("0.- Salir\n");
		printf("1.- Verdadero o falso\n");
		printf("2.- Entero a texto\n");
		printf("3.- Numeros iguales\n");
		printf("4.- Fibonacci\n");
		printf("5.- Fibonacci recursivo\n");
		scanf("%i", &op);
	}

	printf("Hasta luego");
	return 0;
}
