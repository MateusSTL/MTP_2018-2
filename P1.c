/* P1.c */
/* Mateus Santos Tornilio Lemos */
/* 11811EEL006 */
#include <stdio.h>

int main() 
{
	int estado = 0, i;
	char bits[15];
	printf("Digite um numero valido(somente 1s e 0s): ");
	fflush(stdin);
	gets(bits);
	while(bits[i] != '\0')
	{
		if(estado == 0 && bits[i] == '0')
		    {
			    estado = 0;
			    i++;
			}
		else
		    {
			    estado = 1;
			    i++;
			}
		if(estado == 1 && bits[i] == '0')
		    {
			    estado = 2;
			    i++;
			}
		else if(estado == 1 && bits[i] != '0')
		    {
			    estado = 0;
			    i++;
			}
		if(estado == 2 && bits[i] == '0')
			{
			    estado = 1;
			    i++;
			}
		else if(estado == 2 && bits[i] != '0')
		    {
			    estado = 2;
				i++;
			}
		if(bits[i] != '0' && bits[i] != '1')
		     i++;		    
	}
	if(estado == 0)
	    printf("\nSeu numero eh multiplo de 3.");
	else
	    printf("\nSeu numero nao eh multiplo de 3.");
	return 0;
}
