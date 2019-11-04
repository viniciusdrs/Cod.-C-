#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,cont,i50;
	float p,a,p100,a180;
	
	i50=0;
	p100=0;
	a180=0;
	for(cont=1;cont<=3;cont++)
{

		printf("informe a sua idade: ");
		scanf("%d", &i);
		
		printf("informe o seu peso: ");
		scanf("%f", &p);
		
		printf("informe a sua altura: ");
		scanf("%f", &a);
		
	if(i>=50){
		i50=i50+1;
	}
		
	if(p>=100){
		p100=p100+1;
	}
		
	if(a>=1.8){
		a180=a180+1;
    }  
}
	
	printf("%d Pessoa(s) com mais de 50 anos\n", i50);
	printf("%d Pessoa(s) com mais de 100 kilos\n", p100);
	printf("%d Pessoa(s) com mais de 1.80 de altura\n\n", a180);
	
	
	
	
	system ("pause");
	return 0;
}
