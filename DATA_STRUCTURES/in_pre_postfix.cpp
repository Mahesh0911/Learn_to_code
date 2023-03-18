#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

// linked list
struct linkli
{

    char data;
    struct linkli *next;
};

// isfull for stack
int isFull(struct linkli *a)
{
    struct linkli *n = new struct linkli;
    if (n == NULL)
    {
        // cout << "Stack overflow" << endl;
        return 1;
    }
    free(n);
    return 0;
}

// isEmpty function for stack

int isEmpty(struct linkli *a)
{
    if (a == NULL)
    {
        return 1;
    }
    return 0;
}

// push opration on stack
struct linkli * push(struct linkli *p, int data)
{
    if (isFull(p) == 1)
    {
        // cout << "Stack overflow." << endl;
    }
    else
    {
        struct linkli *n = new struct linkli;
        n->data = data;
        n->next = p;
        p = n;
        return p;
    }
}

// pop element from stack
char pop(struct linkli **p)
{
    if (isEmpty(*p) == 1)
    {
        // cout << "Stack Underflow" << endl;
        
    }
    else
    {
        struct linkli *a = *p;
        *p = (*p)->next;
        char x = a->data;
        free(a);
        return x;
    }
}

// link list access element from peek
char peek(struct linkli *ptr)
{
    return ptr->data;
}

// bottom node of stack
void bottom(struct linkli *ptr)
{
    struct linkli *ptrr = ptr;
    while (ptrr->next != NULL)
    {
        ptrr = ptrr->next;
    }
    cout << "bottom value is : " << ptrr->data << endl;
}

// linked list traversal
void lilitraver(struct linkli *ptrr)
{

    // using while loop
    while (ptrr != NULL)
    {

        cout << "Element :" << ptrr->data << endl;
        ptrr = ptrr->next;
    }
}

char ttop(struct linkli* tt){
    return tt->data;

}

// operator checking function
int isoperator(char a)
{
    if (a == '-' || a == '+' || a == '*' || a == '/')
    {
        return 1;
    }
    return 0;
}

// precedane calculating function
int prec(char a)
{
    if (a == '*' || a == '/')
    {
        return 3;
    }
    else if (a == '+' || a == '-')
    {
        return 2;
    }
    return 0;
}
// infix to postfix expression
char *intopost(char *infix)
{
    struct linkli *top = (struct linkli *)malloc(sizeof(struct linkli));
    top->data=0;
    top->next=NULL;
    char *post = (char *)malloc(strlen(infix) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isoperator(infix[i]))
        {
            post[j] = infix[i];
            j++;
            i++;
            // cout<<infix[i];
            // cout<<post[j];
        }
        else
        {
            cout<<ttop(top);
            if (prec(infix[i]) >( prec(peek(top))))
            {

                top=push(top, infix[i]);
                i++;
            }
            else
            {
                post[j] = pop(&top);
                j++;
            }
        }
    }
    while (!isEmpty(top))
    {
        post[j] = pop(&top);
        j++;
    }
    post[j] = '\0';
    // std::cout << "hello" << endl;
    return post;
}

int main()
{
    char * infix = (char *) "x-y+z-k*d";

    cout<<"post fix notation is:" << intopost(infix);
    // pushing element in stack

    return 0;
}
