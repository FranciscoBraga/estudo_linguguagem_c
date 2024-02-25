#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int numero = 0;
	int get_numero = 0;
	printf("Digite um numero\n");
	scanf("%d",&numero);
	printf("Você digitou %d \n",numero);
	printf("O quadrado desse numero %d \n",numero * numero);
	printf("Digite um numero\n");
	scanf("%d",&get_numero);
	numero = numero + get_numero;
	printf("Dgite um numero\n");
	scanf("%d",&get_numero);
	numero = numero +get_numero;
	printf("A soma dos números igual a %d \n",numero);
	return 0;
}
