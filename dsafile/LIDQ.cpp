Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node *prev;
 Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
class Deque{
    Node *front;
    Node *rear;
public:
    Deque(){
        front = NULL;
        rear = NULL;
    }
void insertFront(int value){
        Node *newNode = new Node(value);
    if (front == NULL){
            front = rear = newNode;
        }
        else{
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    cout << value << " inserted at front" << endl;
    }
    void insertRear(int value){
        Node *newNode = new Node(value);
     if (rear == NULL){
            front = rear = newNode;
        }
        else{
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
     cout << value << " inserted at rear" << endl;
    }

    void deleteFront(){
        if (front == NULL){
            cout << "Deque Underflow" << endl;
        }
        else{
            Node *temp = front;
            cout << front->data << " deleted from front" << endl;
            front = front->next;
            if (front == NULL){
                rear = NULL;
            }
            else{
                front->prev = NULL;
            }
           delete temp;
        }
    }
     void deleteRear(){
        if (rear == NULL){
            cout << "Deque Underflow" << endl;
        }
        else{
            Node *temp = rear;
            cout << rear->data << " deleted from rear" << endl;
             rear = rear->prev;
             if (rear == NULL){
                front = NULL;
            }
            else{
                rear->next = NULL;
            }
           delete temp;
        }
    }
    void display(){
        if (front == NULL){
            cout << "Deque is Empty" << endl;
        }
        else{
            Node *temp = front;
            cout << "Deque elements: ";
            while (temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
int main(){
    Deque d;
    d.insertFront(10);
    d.insertRear(20);
    d.insertFront(5);
    d.insertRear(30);
    d.display();
   d.deleteFront();
    d.deleteRear();
    d.display();
   return 0;
}
***********OUTPUT*****************
10 inserted at front
20 inserted at rear
5 inserted at front
30 inserted at rear
Deque elements: 5 10 20 30
5 deleted from front
30 deleted from rear
Deque elements: 10 20