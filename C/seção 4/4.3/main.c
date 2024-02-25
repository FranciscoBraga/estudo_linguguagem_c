#include <stdio.h>


int main() {
	int apostador1 = 0, apostador2=0, apostador3 =0;
	float porcentagem = 0.0;
	float premio = 5.000;
	printf("Digite  a quantidade de aposta \n");
	scanf("%d",&apostador1);
	printf("Digite  a quantidade de aposta \n");
	scanf("%d",&apostador2);
	printf("Digite  a quantidade de aposta \n");
	scanf("%d",&apostador3);
	porcentagem = 100/(apostador1+apostador2+apostador3);
	printf("Porcentagem por apostador %.5f \n", &porcentagem);
	printf("Porcentagem do apostador1 %.2f \n", porcentagem*apostador1);
	printf("Porcentagem do apostador2 %.2f \n", porcentagem*apostador2);
	printf("Porcentagem do apostador3 %f2 \n",  porcentagem*apostador3);
	printf("Premio apostador1 %.2f \n", (premio*(porcentagem*apostador1))/100);
 	printf("Premio apostador1 %.2f \n", (premio*(porcentagem*apostador2))/100);
    printf("Premio apostador1 %2.f \n", (premio*(porcentagem*apostador3))/100);
	return 0;
}
