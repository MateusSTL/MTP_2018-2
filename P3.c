/* P3.c */
/* Mateus Santos Tornilio Lemos */
/* 11811EEL006 */

#include <stdio.h>

int main() 
{
	char numero[20];
	int i;
	fgets(numero, 20, stdin);
	for(i = 0; numero[i] != '\0'; i++)
	{
		if(numero[i] <= ('9' - '0') && numero[i] >= ('0' - '0'))
		    printf("%s", numero[i]);
	}
	return 0;
}
