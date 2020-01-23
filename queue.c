#include <stdio.h>
#include <stdlib.h>

struct linkqueue{
	int data;
	struct linkqueue * Next;
}; struct linkqueue * Front =NULL,*rear=NULL;

struct linkqueue *createqueue(int data){
	struct linkqueue * temp;
	temp=malloc(sizeof(struct linkqueue));
	temp->data=data;
	temp->Next=NULL;
	return temp;
}

void enqueue(int data){
	struct linkqueue * temp1;
	temp1=createqueue(data);
	if(rear==NULL){
		Front=rear=temp1;
	
	}
	else{
		
		rear->Next=temp1;
		
		rear=temp1;
	}
}

void dequeue(){
	struct linkqueue *temp2;
	temp2=Front;
	if(temp2 == NULL){
		printf("\nQueue is an empty\n");
	}
	if(Front!=NULL)
		{
			
		//	printf("\ndequeue is %d\n",temp2->data);
	//	Front=rear=NULL;
		//}
		//else{
			printf("\ndequeue is %d\n",temp2->data);
		temp2=temp2->Next;
		Front=temp2;	
		}
	
	free(temp2);
}



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int Choice,N;
	printf("\nEnter 1 for Enqueue \n 2 for dequeue \n 3 for exit  ");
	
	while(1){
		scanf("%d",&Choice);
		switch(Choice){
			case 1:
				printf("\n Enter data\t");
				scanf("%d",&N);
				enqueue(N);
				printf("Choice Another Number\t");
				break;
			case 2:
				printf("\n");
				dequeue();
				printf("Choice Another Number\t");
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("Select Right Number \n");
				printf("Choice Another Number\t");
				break;
		}
	}

	getch();
	return 0;	
}
