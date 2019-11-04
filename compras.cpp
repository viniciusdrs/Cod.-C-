#include <stdio.h>
int main()
{
	float p1,q1,p2,q2,p3,q3,pt;
	
	printf("Vamos as Compras!!!");
	
		printf("\n\nInsira o valor do produto 1: R$");
	scanf("%f", &p1);
		printf("\n\nInsira a quantidade: ");
		scanf("%f", &q1);
	
		printf("\n\nInsira o valor do produto 2: R$");
	scanf("%f", &p2);
		printf("\n\nInsira a quantidade de chocolates: ");
		scanf("%f", &q2);
		
			printf("\n\nInsira o valor do produto 3 : R$");
	scanf("%f", &p3);
		printf("\n\nInsira a quantidade: ");
		scanf("%f", &q3);
	
	pt = p1*q1+p2*q2+p3*q3;
	
		printf("\n\nO valor total que voce gastou foi de: R$%0.2f",pt);
	
	return 0;
}
