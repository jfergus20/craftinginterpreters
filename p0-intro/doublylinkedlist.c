#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
    struct node *prev;
};
typedef struct node node_t;

void printlist(node_t *head)
{
    node_t *temp = head;

    while (temp != NULL)
    {
        printf("%d - ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

node_t *create_new_node(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
} // returns pointer to new node

node_t *insert_at_head(node_t **head, node_t *node_to_insert)
{
    node_to_insert->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = node_to_insert;
    }
    *head = node_to_insert;
    node_to_insert->prev = NULL;
    return node_to_insert;
} // inserts new node at head of list using pointer to pointer

void insert_after_node(node_t *node_to_insert_after, node_t *newnode)
{
    newnode->next = node_to_insert_after->next;
    node_to_insert_after->next = newnode;
}

node_t *find_node(node_t *head, int value)
{
    node_t *temp = head;
    while (temp != NULL)
    {
        if (temp->value == value)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void remove_node(node_t **head, node_t *toremove)
{
    if (*head == toremove)
    {
        *head = toremove->next;

        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }
    }
    else
    {
        toremove->prev->next = toremove->next;
        if (toremove->next != NULL)
        {
            toremove->next->prev = toremove->prev;
        }
    }
    toremove->next = NULL;
    toremove->prev = NULL;
    return;
}

int main()
{
    node_t *head = NULL;
    node_t *temp;

    for (int i = 0; i < 25; i++)
    {
        temp = create_new_node(i);
        insert_at_head(&head, temp);
    }
    temp = find_node(head, 13);
    printf("found node with value %d\n", temp->value);

    insert_after_node(temp, create_new_node(75));
    printlist(head);

    remove_node(&head, temp);
    // remove_node(&head, head);

    printlist(head);

    return 0;
}