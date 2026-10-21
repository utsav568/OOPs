Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;
class Queue{
    struct Node{
        int data;
        Node* next;
    };
   Node* front;
    Node* rear;
   public:
    Queue(){
        front = NULL;
        rear = NULL;
    }
     void push(int x){
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = NULL;
      if (rear == NULL){
            front = rear = newNode;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
    }
     void pop(){
        if (front == NULL){
            cout << "Queue Underflow" << endl;
            return;
        }
       Node* temp = front;
        cout << "Deleted element: " << front->data << endl;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete temp;
    }
    void top(){
        if (front == NULL)
            cout << "Queue is Empty" << endl;
        else
            cout << "Front element: " << front->data << endl;
    }
    void display(){
        if (front == NULL){
            cout << "Queue is Empty" << endl;
            return;
        }
    Node* temp = front;
        cout << "Queue elements: ";
    while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
     cout << endl;
    }
    void isEmpty(){
        if (front == NULL)
            cout << "Queue is Empty" << endl;
        else
            cout << "Queue is Not Empty" << endl;
          }
    void getSize(){
        int count = 0;
        Node* temp = front;
     while (temp != NULL){
            count++;
            temp = temp->next;
        }
      cout << "Queue size: " << count << endl;
    }
};
int main(){
    Queue q;
     q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.top();
    q.pop();
    q.display();
    q.getSize();
    q.isEmpty();
     return 0;
}
********OUTPUT*******
Queue elements: 10 20 30 40
Front element: 10
Deleted element: 10
Queue elements: 20 30 40
Queue size: 3
Queue is Not Empty
