#include <stdio.h>
#include <string.h>

//8. Realizar un programa en el cual el usuario primero ingrese una oración
//la cual puede estar en mayúscula o minúscula o de manera alternada
//y luego pueda seleccionar que realice las siguientes acciones
//a) Mostrar la oración toda en mayúscula
//b) Mostrar la oración todo en minúsculas
//c) Mostrar la oración alternando una mayúscula y una minúscula
//D) Mostrar la oración comenzando todas las palabras con mayúscula

int main()
{
	char oracion[200];
	
	int x,longitud, opcion, cont=1,cont2=0;
	
	printf("Ingrese su oracion: \n");
	
	fgets(oracion, sizeof(oracion), stdin);
	
	longitud = strlen(oracion);
	
	do{
		printf("Ingrese una opcion: \n");
		printf("1.Convertir todo a mayusculas. \n");
		printf("2.Convertir todo a minusculas. \n");
		printf("3.Alterar la oracion entre una mayuscula y una minuscula. \n");
		printf("4.La primera letra de cada palabra en mayuscula. \n");
		scanf("%d",&opcion);
	}while(opcion > 4 || opcion < 1);
	
	
	switch(opcion)
	{
		case 1:
			// convertir todo a mayusculas
			for(x=0;x<longitud;x++)
			{
				if(oracion[x] >= 'a' && oracion[x] <= 'z')
				{
					oracion[x] = oracion[x] - 32;	
				}
			}
		break;
		
		
		case 2:	
			// convertir todo a minusculas
			for(x=0;x<longitud;x++)
			{
				if(oracion[x] >= 'A' && oracion[x] <= 'Z')
				{
					oracion[x] = oracion[x] + 32;
				}
			}
		break;
		
		case 3:
		
		// Mostrar la oración alternando una mayúscula y una minúscula
			for(x=0;x<longitud;x++)
			{
				if(oracion[x] != ' ')
				{
					if(cont%2==0)
					{
						if(oracion[x] >= 'A' && oracion[x] <= 'Z')
						{
							oracion[x] = oracion[x] + 32;
						
						}
					}
					
					else if(oracion[x] >= 'a' && oracion[x] <= 'z')
					{
						oracion[x] = oracion[x] - 32;	
					}
					
					cont++;
				}
			}
		break;
		
		case 4:
			//  Mostrar la oración comenzando todas las palabras con mayúscula
				if(oracion[0] >= 'a' && oracion[0] <= 'z')
				{
					oracion[0] = oracion[0] - 32;	
				}
				
				for(x=1;oracion[x]!='\0';x++)
				{
					if(oracion[x-1] == ' ' && oracion[x] >= 'a' && oracion[x] <= 'z')
					{
						oracion[x] = oracion[x] - 32;	
					}
				}
				
			break;
	}
	
	
	
	printf("La cadena es: %s",oracion);
	
	
}
