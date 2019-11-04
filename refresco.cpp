#include <stdio.h>
int main()
{
	
	float pl,qtd,pt;
	printf("Programa para calcular a lata de Refresco");
	
	printf("\n\nInsira o valor da lata do refresco: R$");
	scanf("%f", &pl);
		printf("\n\nInsira a quantidade de latas do refresco: ");
		scanf("%f", &qtd);	
		
		pt = pl*qtd;
		printf("\n\nO valor total de refrescos que voce gastou foi de: R$%0.2f",pt);

	
		return 0;
}
