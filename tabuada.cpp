#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,num,res;
	
	printf("Digite o numero que dejesa ser multiplicado: ");
	scanf("%d", &num);
	
	for(i=1;i<=10;i++)
	{
			printf("O total da tabuada e %d X %d = %d\n", num,i,num*i);
	}
	
	
	
	
	return 0;
}
