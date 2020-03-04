#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node
{
    int value;
    node *next;

};
node *head = NULL;
int main()
{
    node *p = (node*)malloc(sizeof(node));
    node *q = (node*)malloc(sizeof(node));
    node *r = (node*)malloc(sizeof(node));
    head = p;

    p->value = 2;
    p->next = q;

    q->value = 4;
    q->next = r;

    r->value = 8;
    r->next = NULL;

    pop_at(2);
    print(head);

    return 0;
}

void print(node *p)

{
    if(p==NULL)
    {

        printf("linked list is empty \n");

    }
    while(p!=NULL)
    {
        printf("%d ",p->value);
        p = p->next;
    }
}
void delete_value(int key)
{
    if(head==NULL)
    {
        printf("List Empty");
        return;
    }

}
void pop_at(int pos)
{
    if(head==NULL)
    {
        printf("Linked List Is Empty ");
        return;
    }
    node *temp,*prev;
    temp=head;
    int i=0;

    if(pos==1)
    {
        head=head->next;
        free(temp);
        return;
    }
    i=1;
    while(temp->next)
    {
        prev=temp;
        temp=temp->next;
        i++;

        if(pos==i)
        {
            prev->next=temp->next;
            free(temp);
            return;
        }

    }
    printf("Index Out Of Range");
}
