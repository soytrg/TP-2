#include <stdio.h>
#include <string.h>
// 4. Realiza un programa que reemplace todas las apariciones de un carácter
// en una cadena de caracteres ingresada por el usuario por otro carácter
// también ingresado por el usuario.

int main()
{
		char cadena[20],letra_1, letra_2;
		int longitud, x;
		
		printf("Ingrese una cadena de caracteres: \n");
		scanf("%s",&cadena);
		
		printf("Ingrese que letra quiere cambiar de su palabra: \n");
		scanf(" %c",&letra_1);
		
		printf("Ingrese por cual letra la quiere cambiar: \n");
		scanf(" %c",&letra_2);
		
		longitud = strlen(cadena);
		
		for(x=0;x<longitud;x++)
		{
			if(cadena[x] == letra_1)
			{
				cadena[x] = letra_2;
			}
		}
		
		printf("Cadena resultante: %s",cadena);
		
		return 0;	
}
