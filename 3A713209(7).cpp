#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
int i,sum = 0;
for(i=1;i<=100;i++)
sum = sum + i;
printf("1+2+3...+100=%d\n",sum);	
system("PAUSE");
return 0;
}
