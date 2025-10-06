#include <stdio.h>
#include<stdbool.h>
#define max 100

//! DECLARATION 
typedef struct node{
    int val;
    int next;
}node;

node list[max];
int head=-1; // to symbolize empty list
int freeindex=0; // to keep track of next empty index



//! OPERATIONS

//? inserting at the back 
void insertback(int val){
    // node is created
    list[freeindex].val = val;
    list[freeindex].next=-1;

    // now we need to link the node
    if (head==-1){
        head=freeindex;
    }
    else{
        // finding last node
        int curr = head;
        while(list[curr].next!=-1){
            curr=list[curr].next;
        }

        list[curr].next=freeindex; // linking the last node to the new node
    }
    freeindex++;
}

//? inserting at front or middle 
//! here pos is the index at which we need to insert
void insert(int pos , int val){
    if (pos == 0){ // inserts at beginning
        list[freeindex].val=val;
        list[freeindex].next=pos;
        head=freeindex; // we are inserting at beginning so head needs to be updated
    }
    else{ // inserts at any given position(index)
        int curr = head;
        int count=0,prev=-1;                        // we used count and prev to keep track of how many nodes we need to cross 
        while(curr!=-1 && count < pos){             // inorder to reach the required node
            prev=curr;                              // since nodes are not inserted in sequential order we need to traverse through each node
            curr = list[curr].next;                 // and count how many nodes we crossed to land at correct index 
            count++;
        }
        list[freeindex].val=val;
        list[freeindex].next=curr;
        list[prev].next=freeindex;

    }

    freeindex++;
}

//? Deleting a node
void delete(int pos){
    if (pos == 0 &&  head == -1) printf("underflow");
    else if(pos == 0  && head !=-1){
        head=list[pos].next;
    }
    else{
        int curr = head , count = 0 , prev = -1;
        while(curr != -1 && count<pos){
            prev = curr;
            curr=list[curr].next;
            count++;
        }
        list[prev].next=list[curr].next;
    } 
}

//? searching for a node
int search (int x){
    bool flag = false;
    int current=head;
    int count=0;
    while(current != -1){

        if (list[current].val == x){
            flag = true;
            return count;
        }
        else {
            current=list[current].next;
            count++;
        }
        

        
    }
}

//? display the list
void display(){
    int current=head;
    while(current != -1){
        printf("%d ",list[current].val);
        current=list[current].next;
    }
    printf("\n");
}

int main(){

    // inserting 5 elements
    int i=0;
    while (i<5){
        insertback(i);
        i++;
    }

    // inserting nodes
    insert(1,78); display();

    insertback(89); display();

    insert(2,56); display();
 
    // searching for a node
    printf("Node no. is %d\n",search(89));

    // deleting nodes 
    delete(0); display(); 
    delete(2); display(); 
    delete(2); display(); 
    
   

}




