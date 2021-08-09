#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

typedef struct Stack
{
    Node *top;
}Stack;

Stack newStack()
{
    Stack stack;
    stack.top = NULL;
    return stack;
}

void push(Stack* ptr, int data)
{
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->data = data;
    temp->next = ptr->top;
    ptr->top = temp;
}

int pop(Stack* ptr)
{
    Node* temp = ptr->top;
    ptr->top = temp->next;
    return temp->data;
    free(temp);
}

int peek(Stack* ptr)
{
    Node* temp = ptr->top;
    ptr->top = temp->next;
    return temp->data;
}

int isEmpty(Stack* ptr)
{
    return ptr->top == NULL;
}