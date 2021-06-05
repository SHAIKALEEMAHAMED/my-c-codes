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
   struct node*pre;
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
    
     /*DELETION OF A PARTICULAR GIVEN NODE (LET IT HERE BE SECOND NODE)

    struct node*p;
    p=second;
    (*head).next=(*second).next;
      free(second);*/
     /*if previous node not known create a variable and traverse to the targetted previous node !!!
    
    for example :
    struct node*p;
    p=head;
    while((*p).next!=second){
        p=(*p).next;
    }
    (*p).next=(*second).next;*/
    
    /*DELETION OF HEAD NODE

    struct node*ptr=head;
    head=(*head).next;
    free(ptr);*/

     /*DELETION OF END NODE

    struct node*flow;
    flow=head;
    while((*(*flow).next).next!=NULL){
        flow=(*flow).next;
    }
    struct node*p=(*flow).next;
    (*flow).next=NULL;
    free(p);*/

   /*DELETION OF ANY NODE IN BETWEEN(according to index)(let here be of index 2)

    struct node*flow;
    flow=head;
    struct node*toremove;
    int index=0;
     while(index<1){   //(2-1) is for (index-1)
        flow=(*flow).next;
        toremove=(*flow).next;
        index++;
    }
    (*flow).next=(*toremove).next;
    free(toremove);*/
    
   linkedlisttraversal(head);
}
