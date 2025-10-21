#include<stdio.h>
# define max 5

int Queue[100];
int front,rear = -1;


void push (int x){
    if (rear-front==max) printf("Overflow\n");
    else if(front==-1 && rear==-1){
        front++;
        rear++;
        Queue[rear] = x;
    }
    else{
        rear++;
        Queue[rear] = x;
    }
}

void pop() {
    if (front>rear || front==-1) printf("Underflow\n");
    else{
        printf("Popped  %d\n",Queue[front]);
        front++;
    }
}

void peek() {
    if (front>rear) printf("Queue empty\n");
    else  printf("Curent top is %d\n",Queue[front]);
}

int main(){
    for (int i=0 ; i<5 ; i++){   // pushing elements
        push(i+1);
    }
    push(6);  // testing edge case for overflow 

    peek();

    for (int i=0 ; i<5 ; i++){  // checking pop()
       pop();
       peek();
    }

    pop(); // testing edge case for underflow 

    peek();

}