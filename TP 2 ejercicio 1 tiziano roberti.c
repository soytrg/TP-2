#include <stdio.h>
#include <string.h>
// 1. Pedir al usuario que ingrese su nombre y luego imprimirlo en pantalla.

int main()
{
	char nombre[10];
	int x,longitud = 0;
	printf("Ingrese su nombre: \n");
	scanf("%s",&nombre);	
	
	longitud = strlen(nombre);
	
	printf("El nombre del usuario es: %s",nombre);
	
	return 0;
}
