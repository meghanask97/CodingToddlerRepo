#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *createNode(int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void printList(struct node *n){
    if(n==NULL)
        printf("list empty\n");
    while(n!=NULL){
        printf("%d\t",n->data);
        n=n->next;
    }
}

void push(struct node *prev,int val){
    struct node *temp;
    if(prev!=NULL){
        temp = createNode(val);
        prev->next = temp;
        temp->next = NULL;
       // temp->data = val;
    }
    
    
}

int main(){
    struct node *head = createNode(520);
   
    push(head,30);
    
    printList(head);
    return 0;
}
