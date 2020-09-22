#include "engine.h"

tab createtab(){
	tab b = malloc(sizeof(int) * 9);

	for (int i = 0; i < 9; i++)
	{
		b[i] = i;
	}

	return b;
}

void printtab(tab b){
	int k = 0;

	putchar('|');

	for (int i = 0; i < 9; i++)
	{
		if(k == 3){
			printf("\n");
			printf("-------\n");
			printf("|%d|", b[i]);
			k = 0;
		}
		else{
			printf("%d|", b[i]);
			
		}

		k++;
	}

}

void jogar(tab b, int cell){

	

}