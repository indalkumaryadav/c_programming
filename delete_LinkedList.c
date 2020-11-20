#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraverse(struct Node *head)
{
    while (head != NULL)

    {
        printf("Element is %d\n", head->data);
        head = head->next;
    }
};

struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
};

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = first;

    first->data = 5;
    first->next = second;

    second->data = 1;
    second->next = NULL;

    printf("Before Deletion \n");
    linkedListTraverse(head);
    head = deleteFirst(head);
    printf("After Deletion\n");
    linkedListTraverse(head);

    return 0;
}
