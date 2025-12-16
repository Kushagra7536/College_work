#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int val;
    struct node* left;
    struct node* right;
}node;

node* createnode(int data){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->val=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

// Adding a node
node* insert(node* root , int data){
    if (root==NULL) return createnode(data);
    else if (data < root->val){
        root->left = insert(root->left , data);
    }
    else if(data >= root->val){
        root->right = insert(root->right,data);
    }
    return root;
}
// Searching a node
node* search(node* root,int key){
    if (root==NULL){
        printf("Root is NULL\n");
        return NULL;
    }
    if (root->val==key) return root;

    node* leftresult = search(root->left,key);
    if (leftresult!=NULL) return leftresult;

    search(root->right,key);
}

// Traversal

//? Inorder (LNR)
void inorder(node* root){
    if (root!=NULL){
        inorder(root->left);
        printf("%d ",root->val);
        inorder(root->right);
    }
}

//? Preorder(NLR)
void preorder(node* root){
    if (root!=NULL){
        printf("%d ",root->val);
        preorder(root->left);
        preorder(root->right);
    }
}

//? Postorder (LRN)
void postorder(node* root){
    if (root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->val);
    }
}

node* findmin(node* root){
    while(root->left!=NULL) root=root->left;
    return root;
}

// Delete node
node* Delete(node* root, int key){
    if (root==NULL){printf("Root is NULL"); return NULL;}

    //finding the node to be deleted
    if (key < root->val){
        root->left = Delete(root->left,key);
    }
    else if (key > root->val){
        root->right = Delete(root->right,key);
    }
    else{
        // if found node is a leaf node
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }

        //if found node has 1 child
        else if(root->left == NULL){
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right==NULL){
            node* temp = root->left;
            free(root);
            return(temp);
        }

        // if found node has both childs
        else{
            node* temp=findmin(root->right);
            root->val=temp->val;
            root->right = Delete(root->right , temp->val);
        }
    }
    return root; 
}


int main(){
    node* root = createnode(1);
    printf("Building Tree\n");
    insert(root,2);

    node* target= search(root,5);
    printf("%d\n",target->val);

    preorder(root); printf("\n");
    inorder(root); printf("\n");
    postorder(root); printf("\n");
}