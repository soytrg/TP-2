#include <stdio.h>
#include <string.h>
//  2. Realiza un programa que cuente cuántas vocales tiene una cadena de
//  caracteres ingresada por el usuario.
int main()
{
	int longitud,x,cont=0;
	
	char cadena[30];
	
	printf("Ingrese una cadena de caracteres (Max: 30 caracteres):\n");
	fgets(cadena, sizeof(cadena), stdin);
	
	longitud = strlen(cadena);
	
	for(x=0;x<longitud;x++)
	{
		if(cadena[x]=='A' || cadena[x]=='E' || cadena[x]=='I' || cadena[x]=='O' || cadena[x]=='U' || cadena[x]=='a' || cadena[x]=='e' || cadena[x]=='i' || cadena[x]=='o' || cadena[x]=='u')
		{
			cont++;
		}
	}
	
	printf("La cantidad de vocales en la cadena es de: %d",cont);
	
	return 0;
}
