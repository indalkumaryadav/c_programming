#include <stdio.h>
#include <stdlib.h>

struct Node
{

    int data;
    struct Node *next;
};

void linkedTraverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertAtFirst(struct Node *head, int data)
{

    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
};

int main()
{
    struct Node *head;

    head = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = NULL;

    head = insertAtFirst(head, 5);
    linkedTraverse(head);

    return 0;
}
