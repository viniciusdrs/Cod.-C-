#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float RS, desc, pga, vf1, ft, sa, vf;
	int psa,np;
	
np=1;
psa=1;
vf=0;	
		while(np==1)
	{
		
	printf("Digite o valor do aparelho eletronico: R$");
	scanf("%f", &RS);
	
	printf("Digite o valor do desconto parea pagamento a vista: R$");
	scanf("%f", &desc);
	
	vf1 = RS-desc;
	
	printf ("valor do aparelho eletronico pago a vista e de: R$ %0.2f\n", vf1);
	
		printf("Digite 1 caso deseje seguro adicional ou outro valor caso nao deseje: ");
		scanf("%d", &psa);
		
		
	sa=0;	
		if(psa==1){
		printf("valor do seguro adicional: R$");
	 scanf("%f", &sa);
	}
	
	vf = vf + vf1 + sa;
	
	printf ("digite 1 para novo produto: ");
	scanf("%d", &np);
		
		
		system("cls");
		

	}
	
	printf("valor final: R$ %0.2f\n", vf);
	system ("pause");
	return 0;
	


}









/*
rs- valor
desc- desconto 
pga - pagamento a vista
vf- valor final 
ft- fatorinho
sa- segura adcional 
psa- perguntar seguro adicional 
i- for repetição.
*/
