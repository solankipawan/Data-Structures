#include <bits/stdc++.h>
//BST implementation in c++ and to find the min and max element of BST.

using namespace std;

struct BSTNode
{
    int  data;
    BSTNode* left;
    BSTNode* right;
};
// pre Order Traversal means <root> <leftChild> <RightChild>
void preOrderTraversal(BSTNode* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);

}

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



int main(){
    BSTNode* root = NULL; // pointer to root node. Setting tree empty.
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);
    root = Insert(root, 12);
    preOrderTraversal(root);
    
}
