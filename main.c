#include <stdio.h>
#include <stdlib.h>
#define size 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int grade[size];
	int sum=0;
	
	printf("%i명의 점수를 입력하세요.\n", size); 
	
	for (i=0;i<size;i+=1)
	 {
	 scanf("%d", &grade[i]);
	 sum+=grade[i];
	}
	
	
	printf("성적 평균 = %i\n", sum/size);
	 
	return 0;
}
