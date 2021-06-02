#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
void linkedlisttraversal(struct node*ptr){
while(ptr!=0){
    printf("%d ",(*ptr).data);
    ptr=(*ptr).next;
}
}
int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    head =(struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));
    (*head).data=98;
    head->next = second;
    (*second).data=9;
    second->next =third;
    (*third).data=89;
   third->next = NULL;
    linkedlisttraversal(head);
}
