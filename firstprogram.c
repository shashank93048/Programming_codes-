#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data ;
    struct node *next;
}node;
int main(){
node*first=(node*) malloc(sizeof(node));
first -> data=52;
node*second=(node*) malloc(sizeof(node));
second -> data=57;
first -> next=second;
second -> next=NULL;
printf("linked list:");
node*temp=first;
while(temp){
    printf("%d",temp->data);
    temp=temp->next;
}
return 0;
}