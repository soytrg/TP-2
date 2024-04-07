#include <stdio.h>
#include <string.h>
//6. Realiza un programa que determine si una cadena de caracteres ingresada
//por el usuario es un anagrama de otra cadena también ingresada por el
//usuario. Un anagrama es una palabra o frase formada por las mismas
//letras de otra palabra o frase, pero en un orden diferente, como por
//ejemplo "roma" y "amor".
int main()
{
	char cadena_1[20], cadena_2[20],aux,cont=0;
	int x,y,dim1, dim2;
	
	printf("Ingrese la primera cadena de caracteres: \n");
	scanf("%s",&cadena_1);
	
	printf("Ingrese la segunda cadena de caracteres: \n");
	scanf("%s",&cadena_2);
	
	dim1 = strlen(cadena_1);
	dim2 = strlen(cadena_2);
	
	if(dim1 != dim2)
	{
		printf("no son un anagrama\n");
		return 1;
	}
	
	//Ordenamos de menor a mayor:
	for(x=0;x<dim1;x++)
	{
		for(y=0;y<dim1-1;y++)
		{
			//cadena 1
			if(cadena_1[y] > cadena_1[y+1])
			{
				aux = cadena_1[y];
				cadena_1[y] = cadena_1[y+1];
				cadena_1[y+1] = aux;
			}
			
			//cadena 2
			if(cadena_2[y] > cadena_2[y+1])
			{
				aux = cadena_2[y];
				cadena_2[y] = cadena_2[y+1];
				cadena_2[y+1] = aux;
			}
		}
	}
	
//	printf("C1: %s \n" ,cadena_1);
//	printf("C2: %s \n" ,cadena_2);

	for(x=0;x<dim1;x++)
	{
		if(cadena_1[x] == cadena_2[x])
		{
			cont++;
		}
	}
	
	if(cont==dim1)
	{
		printf("las 2 cadenas son anagramas \n");
	}
	else
	{
		printf("Las 2 cadenas no son anagramas\n");
	}
	
	return 0;
}
