#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int min(int A[],int N,int k){
	int Loop,min=A[k];
	int loc = k;
	for(Loop=k+1;Loop<=N-1;Loop++){
		if(min>A[Loop]){
			min=A[Loop];
			loc =Loop;
		}
	}
		return loc;
}

int main(int argc, char *argv[]) {
	int Loop2,Loop3,temp,loc;
	int A[]={1,5,9,58,2,25};
	int N=6;
	for(Loop2=0;Loop2<=N-1;Loop2++)
	{
		loc=min(A,N,Loop2);
		temp=A[Loop2];
		A[Loop2]=A[loc];
		A[loc]=temp;
	}
	
	printf("\n");
	for(Loop3=0;Loop3<=N-1;Loop3++){
		printf("%d\t",A[Loop3]);
	}
	

	return 0;
}
