#include <stdio.h>
#include <stdlib.h>
#define size 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(int argc, char *argv[]) {
		
	int i; 
	int a[size] = {1, 2, 3, 4, 5}; 
	int b[size] = {1, 2, 7, 4, 5}; 
	
	int flag_same=1;
	
	for (i=0; i<size; i++) 
	{
	if (a[i]!=b[i])
		 {
		 printf("%i -th element is diffrent \n",i);
		 flag_same = 0;
	}
	}
	
	printf("are a and b the same? %i\n", flag_same);
	
	return 0;
}
