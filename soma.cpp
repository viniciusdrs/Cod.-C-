#include<stdio.h>
#include<stdlib.h>
int main(){
	
	float a,b,c;
	int escolha;
	
	printf("Digite o 1 valor: ");
	scanf("%f", &a);
	
	printf("\nDigite o 2 valor: ");
		scanf("%f", &b);

	printf("Escolha qual operacao dejesa realizar: "
	"\n(1- adicao)"
	"\n(2- subtracao)"
	"\n(3- divisao)"
	"\n(4- multiplicacao)"
	"\n(5- todas): ");
	scanf("%i", &escolha);
	
	if(escolha==1){
	c=a+b;
	printf("\nO resultado da adicao eh: %0.2f\n\n", c);
}
else 
if(escolha==2){
	c=a-b;
		printf("\nO resultado da subtracao eh: %0.2f\n\n", c);
}
else 
if(escolha==3){
	c=a/b;
		printf("\nO resultado da divisao eh: %0.2f\n\n", c);
}
else 
if(escolha==2){
	c=a*b;
		printf("\nO resultado da multiplicacao eh: %0.2f\n\n", c);
}
else 
if(escolha==5){
		c=a+b;
	printf("\nO resultado da adicao eh: %0.2f\n", c);
 		c=a-b;
	printf("O resultado da subtracao eh: %0.2f\n", c);
		c=a/b;
	printf("O resultado da divisao eh: %0.2f\n", c);
		c=a*b;
	printf("O resultado da multiplicacao eh: %0.2f\n\n", c);
}

	system("pause");
	return 0;
}
