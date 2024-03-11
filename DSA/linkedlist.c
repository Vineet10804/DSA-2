#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *link;
} * node;

node insertf(node first);
node inserte(node first);
node deletef(node first);
node deletee(node first);
node create();
void display(node first);

int main()
{
    int ch;
    node first = NULL;
    while (1)
    {
        printf("Enter operation\n1.Insert front\n2.Insert end\n3.Delete front\n4.Delete end\n5.Display\n6.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            first = insertf(first);
            break;
        case 2:
            first = inserte(first);
            break;
        case 3:
            first = deletef(first);
            break;
        case 4:
            first = deletee(first);
            break;
        case 5:
            display(first);
            break;
        case 6:
            exit(0);
            break;
        }
    }
}

node create()
{
    node t;
    t = malloc(sizeof(struct NODE));
    if (t == NULL)
    {
        printf("memory not allocated\n");
    }
    scanf("%d", &t->data);
    t->link = NULL;
    return t;
}

node inserte(node first)
{
    node c, t;
    t = create();
    if (first == NULL)
    {
        return t;
    }
    c = first;
    while (c->link != NULL)
    {
        c = c->link;
    }
    c->link = t;
    return first;
}

node insertf(node first)
{
    node t;
    t = create();
    if (first == NULL)
    {
        return t;
    }
    t->link = first;
    return t;
}

node deletef(node first)
{
    node c, t;
    if (first == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    c = first;
    first = c->link;
    free(c);
    return first;
}

node deletee(node first)
{
    node c, prev;
    if (first == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    c = first;
    prev = NULL;
    while (c->link != NULL)
    {
        prev = c;
        c = c->link;
    }
    if (prev != NULL)
    {
        prev->link = NULL;
        free(c);
    }
    else
    {
        free(c);
        return NULL;
    }
    return first;
}

void display(node first)
{
    node c;
    if (first == NULL)
    {
        printf("No node to display\n");
        return;
    }
    c = first;
    while (c != NULL)
    {
        printf("%d\n", c->data);
        c = c->link;
    }
}
