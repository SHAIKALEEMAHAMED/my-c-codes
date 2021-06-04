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
     /* creating a node between any two nodes

   struct node*ne;
   ne=(struct node*)malloc(sizeof(struct node));
   (*ne).data=78;
   struct node*flow;
   flow=(struct node*)malloc(sizeof(struct node));
    struct node*pre;
    pre=(struct node*)malloc(sizeof(struct node));
   flow=head;
   int count=0;
   while(count<2){
        pre=flow;
       flow=(*flow).next;
       count++;
   }
   (*pre).next=ne;
   (*ne).next=flow;*/
    
    linkedlisttraversal(head);
}
