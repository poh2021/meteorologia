#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	char opcao;
	
	printf("Insira uma das op��es\n");
	printf("1- Lisboa\n");
	printf("2- �vora\n");
	printf("3- Porto\n");
	printf("4- Beja\n");
	printf("4- Braga\n");
	opcao = getch();
	
	switch (opcao)
	{
				case  '1':
			printf("max: 29�C / min: 19�C\n");
			break;
					case  '2':
			printf("max: 30�C / min: 18�C\n");
			break;
				case  '3':
			printf("max: 28�C / min: 20�C\n");
			break;
				case  '4':
			printf("max: 30�C / min: 19�C\n");
			break;
				case  '5':
			printf("max: 31�C / min: 16�C\n");
			break;
				
			
			default:
				printf("Op��o inv�lida\n");
	}
	
	return 0;
}
