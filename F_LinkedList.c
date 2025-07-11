#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;
    node *tail = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            // Free memory thus far
            return 1;
        }

        ////////// (*n).number = n->number //////////
        n->number = number;
        n->next = NULL;
        if(list == NULL) {
            list = n;
            tail =n;
        } else {
            tail->next = n;
            tail = n;
        }
    }
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}