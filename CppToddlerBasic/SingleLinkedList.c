#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;//holds address of next node
};

void printList(struct node *n){
    if(n==NULL)
        printf("list empty\n");
    while(n!=NULL){
        printf("%d\t",n->data);
        n=n->next;
    }
}

int main(){
    struct node *head = malloc(sizeof(struct node));//creates a node 
    head->next = NULL;//indicates list empty
    head->data = 14597;//first value insert
    
    struct node *current = malloc(sizeof(struct node));//another node created
    head->next =  current;//pointing next node after head-first node to current node,hence current is the 2nd node
    current->data = 235689;//adding data to second node
    current->next = NULL;//indicates last node in list
    printList(head);//function to print list elements traversing from first head node to last node
    return 0;
}
