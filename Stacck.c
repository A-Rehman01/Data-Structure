#include <stdio.h>
#include <stdlib.h>

struct Stacklist{
	int data;
	struct Stacklist *Next;
};
struct Stacklist *Root=NULL;

struct Stacklist *createstack(int data){
	struct Stacklist * temp;
	temp=malloc(sizeof(struct Stacklist));
	temp->data=data;
	temp->Next=NULL;
	return temp;
}

struct Stacklist * push(struct Stacklist *Root,int data){
	struct Stacklist * stack=createstack(data);
	stack->Next=Root;
	Root=stack;
	printf("\n push %d ",data);
	return Root;
}


struct Stacklist *  pop(struct Stacklist *Root){
	
	if(Root==NULL)
	{
	printf("\nStack is Empty\n");
		
	}
	else{
	struct Stacklist *temp1;
		
		temp1=Root;
		printf("\n pop %d\t",temp1->data);	
		Root=temp1->Next;
		free(temp1);
	}
	return Root;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int choice,n,p;
	printf("\n1 push \n2 pop \n3 exit\n");
	
	while(1){
	scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter Number you push\t");
				scanf("%d",&n);
				Root=push(Root,n);
				printf("\nSelect Another Number\t");
				break;
				
			case 2:
				Root=pop(Root);
				
				printf("\nSelect Another Number\t");
				break;
				
			case 3:
				exit(0);
				break;
				
				default:
				printf("In valid Character");	
				
		}
	}
	
	return 0;
}
