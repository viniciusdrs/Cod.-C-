#include <stdio.h>
#include <stdlib.h>
int main() {
	int qp, pcv,vnc;
	float vc,vpm,vm,ftc,vfc,vfp;

	printf("Grupo:Fabiano Oliveira \nVinicius dos reis Soares\n\n");

	printf("Informe a quantidade de moradores da republica: ");
	scanf("%d", &qp);

	vnc=1;
	while(vnc==1) {

		printf("Informe valor da conta: ");
		scanf("%f", &vc);

		printf("A conta esta vencida? \n 1- Sim, 2- Nao: ");
		scanf("%d", &pcv);

		if(pcv==1) {
			printf("Informe o valor da multa: ");
			scanf("%f", &vm);
		}
		vfc= vc+vm;
		vm=0;
		printf("Valor final da conta: R$ %0.2f\n", vfc);

		ftc=ftc+vfc;

		printf("\n\nDeseja lancar venda de nova conta? \n 1- Sim, 2- Nao: ");
		scanf("%d", &vnc);

		vfp=ftc/qp;


		system("cls");

	}

	printf("Valor final de todas as contas: R$ %0.2f\n\n", ftc);
	printf("Valor final de todas as contas por pessoa: R$ %0.2f\n\n", vfp);

	system("pause");
	return 0;
}

/*
OBS: Legenda
qp= quantidade de pessoas
pcv= pergunta conta vencida
vc= valor da conta
vpm= valor pago por cada morador
vm= valor da multa
ftc= faturamento total da conta
vfc= valor final da conta
vnc= venda de nova conta
vfp= valor final por pessoa
*/
