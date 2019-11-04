#include <stdio.h>
int main(){
	float sa, ir;
	scanf("%f", &sa);
	
	if(sa<=2000.00)
	printf("Isento\n");
	
	else{
	if(sa<=3002.00)
	ir = sa*8/100;
	
	else
	if(sa<=4500.00)
	ir = sa*18/100;


	else
	if(sa>4500.01)
	ir = sa*28/100;
	printf("R$ %0.2f\n",ir);
}

	return 0;
}
