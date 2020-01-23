#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void bubble_sort(int A[],int N){
	int round,Loop,temp;
	for(round=1;round<=N-1;round++){
		for(Loop=0;Loop<=N-1-round;Loop++)
		{
			if(A[Loop]>A[Loop+1]){
				temp=A[Loop];
				A[Loop]=A[Loop+1];
				A[Loop+1]=temp;
			}
		}
	}
}


void Binary(int A[],int N , int item){
	int Loop,l=0,u=N-1,m;
	for(Loop=0;Loop<=N-1;Loop++){
		m=(u+l)/2;
		if(A[m]==item){
			printf("\n search successful at index %d",Loop);
		return;
		}
		else if(item>A[m]){
			l=m+1;
		}
		else if (item<A[m]){
			u=m-1;
		}
	}
	printf("\nsearch unscessfull\n");
}


int main(int argc, char *argv[]) {
	
	int A[]={25,1,5,69,29,88};
	int i;     // compulsary dzta in order
	bubble_sort(A,6);
	printf("\n");
	for(i=0;i<=5;i++){
		
		printf("\t %d",A[i]);
	}
	
	int item=5;
	Binary(A,6,item);
	return 0;
}
