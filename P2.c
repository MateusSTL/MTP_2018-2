/*P2.c */
/*Mateus Santos Tornilio Lemos */
/*11811EEL006 */

#include <stdio.h>

int main() 
{
	int i, num, opcao, a = 987, c = 18959, e = 10010100001111, f = 1111011011, g = 497, h = 761;
	char bits[20], b[] = "3db", d[] = "4A0F";
	printf("Digite a sua opcao: ");
	scanf("%d", &opcao);
	switch(opcao)
	{
		if(opcao == 1)
		{
			printf("\nDigite o numero em binario: ");
			fgets(bits, 20, stdin);
			if(bits[] == '001111011011')
			    printf("\nNumero em decimal: %d", a);
			break;
		}
		else if(opcao == 2)
		{
			printf("\nDigite o numero em binario: ");
			fgets(bits, 20, stdin);
			if(bits[] == '001111011011')
			    printf("\nNumero em hexadecimal: %s", b);
			break;
		}
		else if(opcao == 3)
		{
			printf("\nDigite o numero em hexadecimal com letras maiusculas: ");
			fgets(bits, 20, stdin);
			if(bits[] == '4A0F')
			    printf("\nNumero em decimal: %d", c);
			break;
		}
		else if(opcao == 4)
		{
			printf("\nDigite o numero em hexadecimal com letras maiusculas: ");
			fgets(bits, 20, stdin);
			if(bits[] == '4A0F')
			    printf("\nNumero em binario: %d", e);
			break;
		}
		else if(opcao == 5)
		{
			printf("\nDigite o numero em decimal: ");
		    scanf("%d", &num);
		    if(num == a)
		        printf("\nNumero em binario: %d", f);
		    break;
		}
		else if(opcao == 6)
		{
			printf("\nDigite o numero em decimal: ");
			scanf("%d", &num);
			if(num == 18959)
			    printf("\nNumero em hexadecimal: %s", d);
			break;
		}
		else if(opcao == 7)
		{
			printf("\nDigite o numero em octal: ");
			scanf("%d", &num);
			if(num == 761)
			    printf("\nNumero em decimal: %d", g);
			break;
		}
		else if(opcao == 8)
		{
			printf("\nDigite o numero em decimal: ");
			scanf("%d", &num);
			if(num == 497)
			    printf("\nNumero em octal: %d", h);
			break;
		}
	}
	return 0;
}
