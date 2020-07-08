/* The height of bst is defined as the number of edges in the longest path from root to leaf node.
Height of tree = height of root node.
Depth of node = No. of edges in path from root to that node*/
#include <bits/stdc++.h>
//BST implementation in c++ and to find the min and max element of BST.

using namespace std;

struct BSTNode
{
    int  data;
    BSTNode* left;
    BSTNode* right;
};

int Findheight(BSTNode* root){
    if(root ==NULL){
        return -1;
    }
    return max(Findheight(root->left), Findheight(root->right))+1;
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

bool Search(BSTNode* root, int data){ //To search elements from bst.
    if(root == NULL){
        return false;
    }
    else if(root->data == data){
        return true;
    }
    else if(data<= root->data){
        return Search(root->left, data);
    }
    else {
        return Search(root->right, data);
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
    int a =  Findheight(root);
    cout<<"The maximum height of tree is: "<< a << endl;
    int number;
    cout<< "Enter the number to be searched\n";
    cin>> number;
    if(Search(root, number) == true){
        cout<<"Found\n";
    }
    else{
        cout<<" Not found\n";
    }
}
