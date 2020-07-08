#include <bits/stdc++.h>
//BST implementation in c++ and to find the min and max element of BST.

using namespace std;

struct BSTNode
{
    int  data;
    BSTNode* left;
    BSTNode* right;
};


BSTNode* GetNewNode(int data){ //function to get the new Node.
    BSTNode* newNode = new BSTNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BSTNode* Insert(BSTNode* root, int data){ //Insert function to insert the elements in bst.
    if(root == NULL){ //Empty Tree
        root = GetNewNode(data);
    }
    else if(data<= root->data){
        root->left = Insert(root->left, data);
    }
    else{
        root->right = Insert(root->right, data);
    }
    return root;
}
void LevelOrder(BSTNode* root){
    if(root == NULL){
        return;
    }
    queue<BSTNode*> Q;
    Q.push(root);
    //While at least one discovered Node.
    while (!Q.empty()) {
        BSTNode* current = Q.front();
        cout<< current->data<<" ";
        if(current->left != NULL) {
            Q.push(current->left);
        }
        if(current->right != NULL){
            Q.push(current->right);
        }
        Q.pop(); // removing the element at front.
        
    }
    
}

int main(){
    BSTNode* root = NULL; // pointer to root node. Setting tree empty.
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    LevelOrder(root);
    
}
