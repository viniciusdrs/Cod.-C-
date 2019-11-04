#include <stdio.h>
#include <stdlib.h>
int main(){

	float pp,qp,pt,dc,hd,pd,d;
	 
	
	printf("\nInforme o preco do produto comprado: R$ ");
	scanf("%f", &pp);
	
	printf("\n\nInforme a quantidade de produtos comprados: ");
	scanf("%f", &qp);
	
	printf("\n\nO produto possui desconto?(digite 1 para sim): ");
	scanf("%f", &hd);
	
	pt = pp*qp;
	
	if(hd == 1){
	printf("\n\nInforme o percentual do desconto: ");
	scanf("%f", &pd);

	}
	pd = (pt*pd)/100;
	d = pt-pd;
		
	printf("\n\nPreco do Produto: R$ %13.2f\n", pp);
	printf("Quantidade: %22.0f\n", qp);
	printf("Valor Total SEM Desconto: R$ %0.2f\n", pt);
	printf("Desconto: R$ %21.2f\n", pd);
	printf("Valor Total COM Desconto: R$ %0.2f\n\n", d);
	
	system("pause");
	return 0;
}
