#include "stack.h"

void printlist(Stack* ptr)
{
    Node* temp = ptr->top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int i, discs, a, b, c;
    int n = 0;

    printf("Enter the number of discs: ");
    scanf("%d", &discs);

    Stack spindle1 = newStack();
    Stack spindle2 = newStack();
    Stack spindle3 = newStack();

    for (i = 0; i < discs; i++)
    {
        push(&spindle1, i);
    }

    printlist(&spindle1);
    printlist(&spindle2);
    printlist(&spindle3);

    for(c = 1; c < 1<<i ;c++)
    {
        a=(c & c - 1)%3;
        b=((c | c - 1) + 1)%3;
    
        switch(a)
        {
            case 0: n=pop(&spindle1);
            break;
            case 1: n=pop(&spindle2);
            break;
            case 2: n=pop(&spindle3);
            break;
        }

        switch(b)
        {
            case 0: push(&spindle1,n);
            break;
            case 1: push(&spindle2,n);
            break;
            case 2: push(&spindle3,n);
            break;
        }
        printlist(&spindle1);
        printlist(&spindle2);
        printlist(&spindle3);
        printf("\n") ;
    }
}
