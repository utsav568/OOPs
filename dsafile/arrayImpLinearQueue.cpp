
#include <iostream>
using namespace std;
#define SIZE 5
class Queue
{
    int q[SIZE];
    int front, rear;
public:
    Queue(){
        front = -1;
        rear = -1;
    }
 void push(int x){
        if (rear == SIZE - 1) {
            cout << "Queue Overflow" << endl;
            return;
        }
      if (front == -1)
            front = 0;

        rear++;
        q[rear] = x;
  }
  void pop() {
        if (front == -1){
            cout << "Queue Underflow" << endl;
            return;
        }
     cout << "Deleted element: " << q[front] << endl;
    if (front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front++;
        }
    }
    void top(){
        if (front == -1)
            cout << "Queue is Empty" << endl;
        else
            cout << "Front element: " << q[front] << endl;
    }
    void display(){
        if (front == -1){
            cout << "Queue is Empty" << endl;
            return;
        }
         cout << "Queue elements: ";
       for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
        cout << endl;
    }
     void isEmpty(){
        if (front == -1)
            cout << "Queue is Empty" << endl;
        else
            cout << "Queue is Not Empty" << endl;
    }
     void isFull(){
        if (rear == SIZE - 1)
            cout << "Queue is Full" << endl;
        else
            cout << "Queue is Not Full" << endl;
    }
     void getSize(){
        if (front == -1)
            cout << "Queue size: 0" << endl;
        else
            cout << "Queue size: " << rear - front + 1 << endl;
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
     q.top();
     q.pop();
    q.getSize();
    q.display();
    q.isEmpty();
   q.isFull();
   
}
***********OUTPUT*****************
Front element: 10
Deleted element: 10
Queue size: 3
Queue elements: 20 30 40 
Queue is Not Empty
Queue is Not Full
