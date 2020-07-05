#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* front = NULL;
Node* rear = NULL;

void Enqueue(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;    
}

void Dequeue(){
    Node* temp = front;
    if(front == NULL) {
		printf("Queue is Empty\n");
		return;
	}
    else if(front == rear){
        rear = front = NULL;
    }
    else{
        front = front->next;
    }
    free(temp);
}

int Front(){
    if(front == NULL) {
        cout<<"The Queue is Empty\n";
        return 0;
    }
    return front->data;
}

void Print() {
	struct Node* temp = front;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	/* Drive code to test the implementation. */
	// Printing elements in Queue after each Enqueue or Dequeue 
	Enqueue(2); Print(); 
	Enqueue(4); Print();
	Enqueue(6); Print();
	Dequeue();  Print();
	Enqueue(8); Print();
}