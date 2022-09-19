#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	char opcao;
	
	printf("Insira uma das opções\n");
	printf("1- Lisboa\n");
	printf("2- Évora\n");
	printf("3- Porto\n");
	printf("4- Beja\n");
	printf("4- Braga\n");
	opcao = getch();
	
	switch (opcao)
	{
				case  '1':
			printf("max: 29ºC / min: 19ºC\n");
			break;
					case  '2':
			printf("max: 30ºC / min: 18ºC\n");
			break;
				case  '3':
			printf("max: 28ºC / min: 20ºC\n");
			break;
				case  '4':
			printf("max: 30ºC / min: 19ºC\n");
			break;
				case  '5':
			printf("max: 31ºC / min: 16ºC\n");
			break;
				
			
			default:
				printf("Opção inválida\n");
	}
	
	return 0;
}
