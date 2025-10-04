#include<stdio.h>
#define max 100 
int Stack[max] ;
int top=-1;

void push(int val){
    if (top==max-1){
        printf("overflow");
    }
    else{
        top+=1;
        Stack[top]=val;
    }
}

int pop(){
    if (top==-1){
        printf("underflow");
    }
    else{
        top-=1;
        return Stack[top+1];
    }
}

int peek(){
    return Stack[top];
}

int main(){
    for (int i=0 ; i<5 ; i++){
        push(i);
    }

    printf("%d \n",peek());

    printf("%d was popped\n",pop());
    printf("%d \n",peek());
}