#include <stdio.h>
 
 
int main() {
int hi, hf,dj;

scanf("%d %d", &hi,&hf);

if (hi==hf)
dj = 24;

else

if(hi>hf)
dj = 24-hi+hf;

else
if(hf>hi)
dj = (hi-hf)*-1;


printf("O JOGO DUROU %d HORA(S)\n", dj);

    return 0;
}
