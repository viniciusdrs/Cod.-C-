#include <stdio.h>

int main (){
	
	float av1,av2,m;
	
	printf("\nDigite a nota da av1:");
	scanf("%f", &av1);
	printf("\n\nDigite a nota da av2:");
	scanf("%f", &av2);

	m = (av1+av2)/2;
	
	if(m>9){
		printf("\n\nParabens");
		m = 10;
}

		printf(" %0.2f", m);	
	
	return 0;
	
}

	
	
	
