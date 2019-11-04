/*comentario
assim*/

#include <stdio.h>
int main ()
{
//todo codigo aqui
	  float n1,n2,media;
	printf("Programa para calculo de Media");
	printf("\n\nUsuario, digitar a nota 1 e a nota 2: ");
		scanf("%f %f",&n1,&n2);
	printf("\n\nA nota 1 do aluno foi de: %5.2f",n1);
	printf("\nA nota 2 do aluno foi de: %5.2f",n2);
/*printf("\n\nDigitar a nota2: ");*/
		media = (n1+n2)/2;
	printf("\n\nA media e: %20.2f",media);
//fim do codigo
	return 0;
}
