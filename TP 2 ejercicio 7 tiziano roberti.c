#include <stdio.h>
#include <string.h>
//7.Realizar un programa que ingrese 5 palabras y devuelta la cadena mas
//larga entre ellas
int main()
{
	char cadena1[20], cadena2[20], cadena3[20], cadena4[20], cadena5[20], cadena_R[20];
	int x, cont=0;
	
    printf("Ingrese la primer cadena: \n");
    scanf("%s",&cadena1);
    
    printf("Ingrese la segunda cadena: \n"); 
    scanf("%s",&cadena2);
    
    printf("Ingrese la tercer cadena: \n"); 
    scanf("%s",&cadena3);
    
    printf("Ingrese la carta cadena: \n"); 
    scanf("%s",&cadena4);
    
    printf("Ingrese la quinta cadena: \n");
    scanf("%s",&cadena5);
    
    cadena_R[0] = cadena1[0];
    
    for(x=0; x < strlen(cadena1) ;x++)
    {
    	if(cadena1[x] == cadena2[x] && cadena1[x] == cadena3[x] && cadena1[x] == cadena4[x] && cadena1[x] == cadena5[x] && cadena_R[0] == cadena2[0])
    	{
    		cadena_R[x] = cadena1[x];
		}
	}
	
 	printf("La secuencia de caracteres que se repiten es la siguiente: %s",cadena_R);
    
	return 0;	
}
