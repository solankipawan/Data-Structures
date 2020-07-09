#include <bits/stdc++.h>
//BST implementation in c++ and to find the min and max element of BST.

using namespace std;

struct BSTNode
{
    int  data;
    BSTNode* left;
    BSTNode* right;
};
bool ISBSTUtil(BSTNode* root, int MinValue, int MaxValue){
    if(root == NULL) return true;
    if(root->data< MinValue && root->data> MaxValue && ISBSTUtil(root->left, MinValue, root->data) && ISBSTUtil(root->left, root->data, MaxValue)){
        return true;
    }
    else
    return false;

}
bool IsBinarySearchTree(BSTNode* root){
    return ISBSTUtil(root, INT_MIN, INT_MAX);

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
   IsBinarySearchTree(root);
   if(IsBinarySearchTree){
       cout<<"Binary tree is BST";
   }
   else{
       cout<<"Given Binary tree is not BST";
   }
    
}
