#include <stdio.h>

int main(){
	
	float sa,re,ns,pe;
	
	scanf("%f", &sa);
	
	
	if(sa<=400.00)
	re = sa*15/100 ;


	else
	if(sa<=800.00)
	re  = sa*12/100;

	else
	if(sa<=1200.00)
	re = sa*10/100;
 

	else
	if(sa<=2000.00)
	re = sa*7/100;


	else
	if(sa>2000.00)
	re = sa*4/100;

	
	
	if(sa<=400.00)
    pe = 15;
    
    else
    if(sa<=800.00)
    pe = 12;  
    
    else
    if(sa<=1200.00)
	pe = 10;
	
	else
	if(sa<=2000.00)
	pe = 7;

    else
    if(sa>2000.00)
	pe = 4;

   ns = sa+re;

printf("Novo salario: %0.2f\n", ns);
printf("Reajuste ganho: %0.2f\n", re);
printf("Em percentual: %0.0f %%\n", pe);

	return 0;
}
