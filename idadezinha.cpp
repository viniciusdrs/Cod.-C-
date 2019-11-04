#include <stdio.h>
#include <stdlib.h>
 
int main (){
	
	int idade,x,	cont,maior18;
	
	maior18 = 0;
	printf ("informe a quantidade de pessoas: ");
	scanf ("%d", &x);
	
	for (cont=1;cont<=x;cont++)
	{
		printf ("Digite a sua Idade: ")	;
	scanf ("%d", &idade);
	
	if(idade>=18){
	maior18 = maior18 +1;
	}
	
}

	
printf("%d Pessoa(s) tem idade maior ou igual que 18\n\n",maior18);



	system ("pause");
	return 0;
}
