#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Bubble_sort(int A[],int N){
	int round,Loop,temp;
	int flag;
	for(round=1;round<=N-1;round++){
		flag=0;
		for(Loop=0;Loop<=N-1-round;Loop++){
			if(A[Loop]>A[Loop+1]){
				flag=1;
				temp=A[Loop];
				A[Loop]=A[Loop+1];
				A[Loop+1]=temp;
				
			} 
		}
		
		if(flag==0){
			printf("\n%d",round);
			return;
		}
	}
}
int main(int argc, char *argv[]) {
	int A[]={1,55,87,2,4,21,8};
	int N=7,Loop1;
	Bubble_sort(A,N);
	printf("\n");
	for(Loop1=0;Loop1<=N-1;Loop1++){
		printf("\t%d",A[Loop1]);
	}
	return 0;
}
