#include <stdio.h>
#define max 5

int Stack[max];
int count = 0;

void push(int x)
{
    if (count == max)
        printf("Overflow\n");
    else
    {
        Stack[count] = x;
        count++;
    }
}

void pop()
{
    if (count == 0)
        printf("Underflow\n");
    else
    {
        printf("Popped  %d\n", Stack[count - 1]);
        count--;
    }
}

void peek()
{
    if (count == 0)
        printf("Stack empty\n");
    else
        printf("Curent top is %d\n", Stack[count - 1]);
}

int main()
{
    for (int i = 0; i < 5; i++)
    { // pushing elements
        push(i + 1);
    }
    push(6); // testing edge case for overflow

    peek();

    for (int i = 0; i < 5; i++)
    { // checking pop()
        pop();
        peek();
    }

    pop(); // testing edge case for underflow

    peek();
}