/* P1.c */
/* Mateus Santos Tornilio Lemos */
/* 11811EEL006 */
#include <stdio.h>

int main() 
{
	int estado =0, i;
	char numero[256];
	scanf("%s", numero);
	for(i = 0; numero[i]; i++)
	{
		if(estado == 0 && numero[i] == '1') 
		    estado = 1;
		else if(estado == 1)
		{
			estado = (numero[i] == '0')? 2:0;
		}
		else if(estado == 2 && numero[i] == '0') 
		    estado = 1;
	}
	printf("\"%s\" %s", numero, estado == 0? "e multiplo de 3\n":"nao e\n");
	return 0;
}
