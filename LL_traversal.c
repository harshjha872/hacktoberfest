#include<stdio.h>

struct Node
{
  int data;
  struct Node *next;
};

void LLtraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next;

    }
}

main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    //Allocate memory for nodes in the linked list in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    //link first and second node
    head->data=7;
    head->next=second;

    //link second and third node
    second->data=11;
    second->next=third;

    //link third and second node
    third->data=66;
    third->next=NULL;

    LLtraversal(head);

    getch();
}
