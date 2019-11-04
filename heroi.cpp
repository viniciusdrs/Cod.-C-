#include <stdio.h>

int main(){
	
	float hp,da,qa,dt;
	
	printf("\nInforme o HP do seu heoi: ");
	scanf("%f",&hp);
	
	printf("\n\nInforme o dano causado por HIT do inimigo: ");
	scanf("%f",&da);
	
	printf("\n\nInforme a quantidades de ataques do inimigo: ");
	scanf("%f",&qa);
	
	dt = da*qa;
	
	if (dt>=hp)
	 printf("\n\nHeroi esta morto");
	else
	 printf("\n\nHeroi esta vivo");
	
	
	return 0;
}
