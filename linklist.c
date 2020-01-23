#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node{
	int data;
	struct node *link;
};
 void Begin();
 void mid();
 int count ();
 int menu();
struct node *createnode();
struct node* insertnode();
struct node* start=NULL;
	struct node *createnode(){
	struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
		return(n);
	}
struct node *insertnode(){
int N,i=0;  		
		printf("\n How many Nodes you want to enter\n");
		scanf("%d",&N);
	struct node *temp,*temp2;
	for(i=0;i<N;i++){
	temp=createnode();
	temp->link=NULL;
	printf("Enter %d node\n",i+1);
	scanf("%d",&temp->data);
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp2=start;
		while(temp2->link!=NULL){
			temp2=temp2->link;
		}
	}
	temp2->link=temp;
} return start;
}
void Begin(){
	struct node *temp;
	temp=createnode();
	temp->link=NULL;
	scanf("%d",&temp->data);
		if(start==NULL)
		{
			start=temp;
		}
		else{
			temp->link=start;
			start=temp;
		}
}	
void mid(){
	int n,No,loop,loop2;
	n=count();
printf("Total node in linked list is %d",n);
error:
printf("\nEnter NO in which  you want to add node");
scanf("%d",&No);

if(No>n || No<0)
{
	printf ("Wrong slection");
	goto error;
}
	struct node *temp,*temp2,*temp3;
	temp=createnode();
	temp->link=NULL;
	printf("enter data of node");
	scanf("%d",&temp->data);
	temp2=start;
	temp3=start;
	if(start==NULL){
		start=temp;
	}
	else{
	
	
	for(loop=1;loop<=No-1;loop++){
		temp3=temp3->link;
	}
	temp->link=temp3;
	for(loop=1;loop<=No-2;loop++){
		temp2=temp2->link;
	}
	temp2->link=temp;
}	
}
int count()
{
	
	int a;
    struct node *temp;
	temp=start;
	if(temp==NULL){
			printf("list is empty");
	}
	else{
		while(temp->link!=NULL)
		{
		temp=temp->link;
		a=a+1;
	}
	a++;
	}
	
	return a;
	}
	void deletefir(){
		if(start==NULL){
			printf("list is empty");
		}
		else{
		
		struct node * temp;
		printf("\nDelete First Node");
		temp=start;
		start=start->link;
		free(temp);
	}
	}
	void deleteend(){
		if(start==NULL){
			printf("list is empty");
		}
		else{
		
		printf("\nDelete last");
		struct node *temp,*temp2;
		temp=start;
		temp2=start;
		int a,loop;
		a=count();
		while(temp->link!=NULL){
			temp2=temp;
			temp=temp->link;
		}
		temp2->link=NULL;
		
		free(temp);
	}
	}	
	
	void deletemid(){
		if(start==NULL){
			printf("list is empty");
		}
		else{
		
		printf("Delete at mid\n");
		int n,No,loop;
		struct node*temp,*temp2,*temp3;
		temp=start;
		temp3=start;
		n=count();
	printf("Total node in linked list is %d",n);
	error:
	printf("\nEnter NO in which  you want to delete node");
	scanf("%d",&No);
	if(No>n || No<0)
	{
	printf ("Wrong slection");
	goto error;
	}		
	for(loop=1;loop<=No-1;loop++){
	temp2=temp;
	temp=temp->link;
	}
	for(loop=1;loop<=No;loop++)
	temp3=temp3->link;
	temp2->link=temp3;
	free(temp);
	}
}
	
void display(struct node*START)
{
	struct node*dis;
	dis=START;
	printf("\n");
	if(dis==NULL)
	{
		printf("\nlinkedlist is empty\n");
		
	}
	else{
		while(dis->link!=NULL)
		{
			printf("%d\n",dis->data);
			dis=dis->link;
		}
		printf("%d\n",dis->data);
	}
}
	int menu(){
	
		printf("		===================================LINKEDLIST===================================");
		printf("\n1. Add data in Linklist");
		printf("\n2.Add first in Linklist");
		printf("\n3.Add Where you want in linklist");
		printf("\n4.delete First");
		printf("\n5.delete last");
		printf("\n6.delete Where you want ");
		printf("\n7.Count");
		printf("\n8.View/Display\n");
		printf("9.Exit");
		
	}
void main() {
	int C,No;
	menu();
	while(1){
		printf("\n\t\tPress Number\t");
		scanf("\n%d",&No);
		switch(No){
			case 1:
			insertnode ();
			break;
			case 2:
			Begin();
			break;
			case 3:
			mid();
			break;
			case 4:
			deletefir();
			break;
			case 5:
			deletemid();
			break;
			case 6:
			deleteend();
			break;
			case 7:
			C=count();
			printf("%d",C);
			break;
			case 8:
			display(start);
			break;
			case 9:
				exit(0);
				break;
			default :
			printf("\nINVALID INPUT");	
		}
	}
	
	getch();
	}
