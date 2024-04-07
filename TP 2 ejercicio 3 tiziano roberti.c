#include <stdio.h>
#include <string.h>
// 3. Realiza un programa que determine si una cadena de caracteres ingresada
// por el usuario es palíndromo (se lee igual de izquierda a derecha que de
// derecha a izquierda).
int main()
{
	char cadena[20];
	int longitud,x,cont=0;

	printf("Ingrese una palabra: \n");
	scanf("%s",&cadena);
		
	longitud = strlen(cadena);
	
	for(x=0;x<longitud/2;x++)
	{
		if(cadena[x] == cadena[longitud-x-1])
		{
			cont++;
		}
	}	

	if(cont == longitud/2)
	{
		printf("La cadena es palindromo");
	}
	else
	{
		printf("la cadena no es un palindromo");
	}

	return 0;
}
