#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	struct node *newnode1,*newnode2, *newnode3;
	newnode1=(struct node*)malloc(sizeof(struct node));
	newnode1-> data = 20;
	newnode2 = (struct node*)malloc(sizeof(struct node));
	newnode2-> data = 30;
	newnode1 -> next=newnode2;
	
	newnode3=(struct node*)malloc(sizeof(struct node));
	newnode2 -> next = newnode3;
	newnode3 -> data = 40;
	newnode3 -> next = newnode1;
	printf("data=%d selfaddr=%d nextaddr = %d\n", newnode1 -> data, newnode1, newnode1 ->next);
	printf("data=%d selfaddr=%d nextaddr = %d\n", newnode2 -> data, newnode2,newnode2 ->next );
	printf("data=%d selfaddr=%d nextaddr = %d\n", newnode3 -> data, newnode3, newnode3 -> next);
}
