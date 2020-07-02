#include <bits/stdc++.h>
#define MAX_SIZE 101
int arr[MAX_SIZE];
using namespace std;
int top = -1;
void push(int x){
    if(top == MAX_SIZE-1){
        cout<< "Error: Stack overflow \n";
        return;
    }
    arr[++top] = x;

}
void pop(){
    if(top == -1){
        cout<< "Error: No element in the stack\n";
        return;
    }
    top--;
}
int Top(){
    return arr[top];
}
void print(){
    cout<< "Stack: ";
    for(int i =0; i<=top;++i){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
}
int main(){
    push(2); print();
    push(3); print();
    push(4); print();
    push(5); print();
    push(6); print();
    pop();
    push(7); print();
}
