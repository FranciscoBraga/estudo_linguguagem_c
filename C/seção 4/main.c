#include <stdio.h>


int main() {
	float media =0.0;
	float n1 =0.0, n2 = 0.0, n3 = 0.0, n4 =0.0;
	printf("Digite a  nota do aluno\n");
	scanf("%f",&n1);
	printf("Digite a  nota do aluno\n");
	scanf("%f",&n2);
    printf("Digite a  nota do aluno\n");
	scanf("%f",&n3);
	printf("Digite a  nota do aluno\n");
	scanf("%f",&n4);
    media = (n1+n2+n3+n4)/4;
	printf("A media do aluno e %f2 \n",media);
	return 0;
}
