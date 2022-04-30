#include<stdio.h>
//Declaration of structure
struct node
    {
        int data;
        struct node *next;
        struct node *previous;
    };
int main()
{
    // Initialization var1
    struct node n1;
    n1.next=NULL;
    n1.previous=NULL;
    n1.data=10;
    // Initialization var2
    struct node n2;
    n2.next=NULL;
    n2.previous=NULL;
    n2.data=20;
    // Initialization var3
    struct node n3;
    n3.next=NULL;
    n3.previous=NULL;
    n3.data=30;
    // Forward links
    n1.next=&n2;
    n2.next=&n3;
    // Backward links 
    n2.previous=&n1;
    n3.previous=&n2;
    // Accessing  data of ob1, ob2 and ob3 by ob1 
    printf("%d\t",n1.data);
    printf("%d\t",n1.next->data);
    printf("%d\t",n1.next->next->data);
    // Accessing data of ob1, ob2 and ob3 by ob2 
    printf("\n%d\t",n2.previous->data);
    printf("%d\t",n2.data);
    printf("%d\t",n2.next->data);
    // Accessing data of ob1, ob2 and ob3 by ob3 
    printf("\n%d\t",n3.previous->previous->data);
    printf("%d\t",n3.previous->data);
    printf("%d\t",n3.data);



}