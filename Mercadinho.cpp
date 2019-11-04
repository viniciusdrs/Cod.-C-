#include <stdio.h>
#include <stdlib.h>
int main(){
	float qt,va,to,tg;
	int opcao=1;
	tg = 0;
	
	while (opcao==1){
	printf("\n Valor produto: R$ ");
	scanf("%f", &va);
	
	printf("\n Quantidade de produtos: ");
	scanf("%f", &qt);
	to = qt * va;
	tg = tg + to;
printf ("\n O total foi de: R$ %0.2f\n\n", to);

printf ("\n Digite 1 para continuar as comprinhas: ");
scanf("%d", &opcao);
}
printf ("\n O total foi de: R$ %0.2f\n\n", tg);
	return 0;


	
	
}





