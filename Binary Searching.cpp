#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	struct node *LC,*RC;
	
};
struct node * Root=NULL;

struct node *createnode(){
	struct node *temp;
	int val;
	temp=(struct node*) malloc(sizeof(struct node));
	
	scanf("%d",&val);
	temp->data=val;
	temp->LC=NULL;
	temp->RC=NULL;
	return(temp);
}
struct node *BST(struct node *Rnode,struct node *Cnode){
	if(Rnode==NULL){
		Rnode=Cnode;
	}
     else{
		if(Rnode->data<Cnode->data){
			
			Rnode->RC=BST(Rnode->RC,Cnode);
		}
		else if(Rnode->data>Cnode->data)  {
		
			Rnode->LC=BST(Rnode->LC,Cnode);
	}
		}

return (Rnode);

	}
	void Preorder(struct node *TRoot){

			if(TRoot!=NULL){
			
			printf("%d\t",TRoot->data);
			Preorder(TRoot->LC);
			Preorder(TRoot->RC);
		}
	}
	void Inordertri(struct node * TRoot)
	{
		 if(TRoot!=NULL){
		
			Inordertri(TRoot->LC);
			printf("%d\t",TRoot->data);
			Inordertri(TRoot->RC);
		
		}
}
	void Posttri(struct node* TRoot){
		if (TRoot!=NULL){

			Posttri(TRoot->LC);
			Posttri(TRoot->RC);
			printf("%d\t",TRoot->data);
		
		}	
}
struct node *Find(struct node *froot,int data){
	if (froot==NULL || froot->data==data)
	
	return (froot);
	if(data<froot->data){
		return (Find(froot->LC,data));
	}
	else if (data>froot->data){
		return (Find(froot->RC, data));
	}
	//return froot;
}
struct node *Findmax(struct node *Root){
	if (Root->RC==NULL)
	return (Root);
	else {
		Findmax(Root->RC);
	}
}
struct node *Delete(struct node *Root,int x)
{
	struct node * temp;
	if (Root==NULL)
	return NULL;
	
	if(Root->data<x){
		Root->RC=(Delete(Root->RC,x));
		
	}
	else if (Root->data>x){
		Root->LC=(Delete(Root->LC,x));
	}
	else{
		if(Root->RC !=NULL && Root->LC !=NULL)
		{
		temp=Findmax(Root->LC);
		Root->data=temp->data;
		Root->LC=(Delete (Root->LC,Root->data));
		}
		else{
			temp=Root;
			if(Root->LC==NULL)
			Root=Root->RC;
			
			if(Root->RC==NULL)
			Root=Root->LC;
		}
	}
}


 main() {
 	int N,loop,NodesEnter,FindNo,val;
	struct node*m,*n,*l;
	printf("=======================Select Menu=========================");
	printf("\n1 Enter data in nodes\n2 PreTRiversing\n3 InorderTriversing\n4 Post Trivering\n5 All type Of trivering\n6 Finf Number\n7 Find maX No\n 8 Deleted");
	printf("\n9 for Exit");
	
	
	printf("\n\t\t\tSelect NUmber\n");
					
	do{
	scanf("%d",&N);
	switch(N)
	
	{
		case 1 :
 			printf("How MAny nodes you want to Enter  ");
 			scanf("%d",&NodesEnter);
 			for(loop=1;loop<=NodesEnter;loop++){
			printf("Enter node %d data\t",loop);
			struct node *n=createnode();	 
			Root=BST(Root,n);
    }
    
	
			printf("select Another Number\t");
			break;
		
		case 2 :
			printf("PreOrder Triversing\n");
			Preorder(Root);
			printf("\nselect Another Number\t");
			break;
		case 3:
			printf("InOrder Triversing\n");
			Inordertri(Root);
			printf("\nselect Another Number\t");
			break;
		case 4 :
			printf("PostOrder Triversing\n");
			Posttri(Root);
			printf("\nselect Another Number\t");
			break;
			
			
			case 5:
				printf("PreOrder Triversing\n");
			Preorder(Root);
			printf("\nInOrder Triversing\n");
			Inordertri(Root);
			printf("\nPostOrder Triversing\n");
			Posttri(Root);
			break;
			
			case 6:
			printf("Enter Number you find");
		    scanf("%d",&FindNo);
    		m=Find(Root,FindNo);
    		printf("%d",m->data);
    		printf("\nselect Another Number\t");
    		break;
			
			case 7:				
			l=Findmax(Root);
			printf("%d",l->data);
			printf("\nselect Another Number\t");		
			break;
			
			//printf("LL");
			
			case 8:
			printf("Which No u delete");
			scanf("%d",&val);	
			Delete (Root,val);	
			printf("\nselect Another Number\t");
			break;
			
			case 9 :
				exit(0);
				break;
				
			default :
				printf("in Valid Character");
			
	
	
}

	}while(N!=9);

	getch();
}
