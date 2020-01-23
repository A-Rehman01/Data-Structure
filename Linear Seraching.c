#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void linear(int L[],int N,int item){
	int Loop;
	for(Loop=0;Loop<=N-1;Loop++){
		if(L[Loop]==item){
			printf("Search Succesful at index %d",Loop);
		return;
		}
	
	}
	printf("serch unsuceesful");
}

int main(int argc, char *argv[]) {
	
	int A[]={11,12,45,9,7};
	int D;
	int item=120;
	linear(A,5,item);   //5=size
	D=((sizeof(int A[])) / (sizeof(int)));
	printf("%d  \n\t", D);
	return 0;
}
