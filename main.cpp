#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i;


int main(void) {
	for(i=0;i<10000;i++)
		if(i%7==2 && i%9==2 && i%3==2)
		printf("%d \n",i);
	return 0;
}
