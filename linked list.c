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
     
   /* CREATING A NODE BETWEEN ANY TWO NODES

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
    
    
    /*ADDING A NODE BEFORE HEAD

    struct node*ne;
    ne=(struct node*)malloc(sizeof(struct node));
   (*ne).data=78;
   (*ne).next=head;
    head=ne;*/

   /* ADDING A NODE AT END

    struct node*ne;
    ne=(struct node*)malloc(sizeof(struct node));
   (*ne).data=78;
   struct node*flow;
   flow=(struct node*)malloc(sizeof(struct node));
   flow=head;
   while((*flow).next!=NULL){
    flow=(*flow).next;
   }
   (*flow).next=ne;
   (*ne).next=NULL;*/


  /*ADDING A NODE AFTER A PARTICULAR NODE (LET HERE BE SECOND NODE)

    struct node*ne;
    ne=(struct node*)malloc(sizeof(struct node));
   (*ne).data=78;
   (*ne).next=(*second).next;
   (*second).next=ne;*/
    
   linkedlisttraversal(head);
}
