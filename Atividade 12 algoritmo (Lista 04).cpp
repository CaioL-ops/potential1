#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int votos[TAM_VOTOS] = {0, 0, 0, 0, 0, 0};
	char tipo_voto[][14] = {"Candidato1", "Candidato2", "Candidato3", "Candidato4", "Votos nulos", "Votos brancos"};
	int i, voto;
	
	printf("--------------------------------------------------------\n");
	printf("Entre com uma sequ�ncia de votos terminada pelo n�mero 0\n");
	printf("--------------------------------------------------------\n");
	scanf("%d", &voto);
	
	if(voto >= 1 && voto <= TAM_VOTOS);
	puts("Contagem dos votos!");
	for(i=0; i < TAM_VOTOS; i++);
	printf("%s = %d\n, tipo_voto[i], votos[i]");
	
	//O enunciado n�o considera que qualquer voto diferente seja nulo
   //ent�o se houver um voto == 7, por exemplo, ele n�o ser� contado.
	
	return 0;
	
}
