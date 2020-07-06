#include <bits/stdc++.h>
//BST implementation in c++

using namespace std;

struct BSTNode
{
    int  data;
    BSTNode* left;
    BSTNode* right;
};
BSTNode* GetNewNode(int data){
    BSTNode* newNode = new BSTNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
BSTNode* Insert(BSTNode* root, int data){
    if(root == NULL){ //Empty Tree
        root = GetNewNode(data);
    }
}
int main(){
    BSTNode* root = NULL;
    root = Insert(root, 2);
    root = Insert(root, 2);
    root = Insert(root, 2);
    root = Insert(root, 2);
    root = Insert(root, 2);
    root = Insert(root, 2);
}
