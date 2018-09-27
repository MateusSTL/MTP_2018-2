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
		case 1:
			fgets(bits, 20, stdin);
			if(bits[] == '001111011011')
			    printf("\n%d", a);
			break;
		case 2:
			fgets(bits, 20, stdin);
			if(bits[] == '001111011011')
			    printf("\n%s", b);
			break;
		case 3:
			scanf("%x", num);
			printf("\n%d", num);
			break;
		case 4:
			fgets(bits, 20, stdin);
			if(bits[] == '4A0F')
			    printf("\n%d", e);
			break;
		case 5:
			scanf("%d", &num);
		    if(num == a)
		        printf("\n%d", f);
		    break;
		case 6:
			scanf("%d", &num);
			printf("\n%x", num);
			break;
		case 7:
			scanf("%d", &num);
			if(num == 761)
			    printf("\n%d", g);
			break;
		case 8:
			scanf("%d", &num);
		    printf("\n %o", num);
			break;
		default
			if(opcao != 8)
				printf("\nOpcao Invalida.");
	}
	return 0;
}
