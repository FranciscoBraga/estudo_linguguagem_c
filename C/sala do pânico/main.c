#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fase = 0;

int historia(){
	
printf("Você é um renomado arqueólogo, conhecido por desvendar mistérios antigos em todo o mundo. Durante sua última expedição, você descobre um templo escondido nas profundezas da selva amazônica. Dentro do templo, você encontra uma sala secreta adornada com inscrições antigas e artefatos misteriosos.\n");
printf("Ao explorar mais a fundo, você aciona acidentalmente uma armadilha ancestral e se vê preso dentro da sala do pânico.\n");
printf("As paredes estão cobertas de símbolos enigmáticos, e uma atmosfera opressiva de mistério paira no ar. Você percebe que a única maneira de escapar é resolver uma série de desafios mortais deixados pelos antigos guardiões do templo.\n");
printf("Com o tempo se esgotando e o coração pulsando com adrenalina, você se vê imerso em uma corrida contra o relógio para decifrar os quebra-cabeças, desvendar os enigmas e encontrar uma saída antes que seja tarde demais. Cada desafio revela um segredo antigo e perigoso, testando não apenas sua inteligência, mas também sua coragem e determinação.\n");
printf("Enquanto você se aprofunda na sala do pânico, fica claro que não está apenas lutando pela sua própria sobrevivência, mas também pelo conhecimento ancestral que poderia mudar o curso da história. Com cada desafio superado, você se aproxima um passo mais perto da liberdade - mas também de descobrir os segredos ocultos que o templo guarda.\n");
printf("Agora, cabe a você usar todas as suas habilidades e conhecimentos para escapar da sala do pânico e desvendar os mistérios milenares que ela guarda. O relógio está correndo, e o destino aguarda ansiosamente sua decisão. Você está pronto para enfrentar o desafio");


 fase = 1;
 return fase;
}


void desafio_um(){
  printf("    [06]    \n");
  printf("[09][x][03]\n");
  printf("    [18]    \n");
  
	
}

int main() {

while(fase != 11){
	if(fase == 0)
	{
	 fase = historia();
	}else if (fase == 1){
	  desafio_um();
	}
}

	return 0;
}
