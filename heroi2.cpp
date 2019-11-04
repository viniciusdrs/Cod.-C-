#include <stdio.h>
#include <stdlib.h>
int main(){
	
	float hph,hpi,dai,dah,qai,qah,dti,dth;
	
	printf("\nInforme o HP do seu Heroi: ");
	scanf("%f",&hph);
	
	printf("\nInforme o HP do Inimigo: ");
	scanf("%f",&hpi);
	
	printf("\nInforme o dano causado por HIT do inimigo: ");
	scanf("%f",&dai);
	
	printf("\nInforme a quantidades de ataques do inimigo: ");
	scanf("%f",&qai);
	
		dti = dai*qai;
	
		if (dti>=hph)
	
	 printf("\n\nHeroi esta Morto\n\n");

	else {
	
		printf("\n\nInforme o dano causado por HIT do seu Heroi: ");
			scanf("%f",&dah);
			
			printf("\n\nInforme a quantidades de ataques do seu Heroi: ");
			scanf("%f",&qah);
		
			dth = dah*qah;
		
			if(dth >= hpi)
			
		printf("\n\nInimigo esta Morto\n\n");

	else
	
	printf("\n\nHeroi e Inimigo estao Vivos !!!\n\n");
}

	system("pause");
	return 0;
}
/*hph= vida do seu heroi
hpi= vida do inimigo
dai= dano por ataque inimigo
dah= dano por ataque heroi
qai= quant. ataque inimigo
qah= quant. ataque heroi
dti= dano total inimigo
dth= dano total heroi
*/
