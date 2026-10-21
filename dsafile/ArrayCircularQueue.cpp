Name:Utsav Singh
Roll:2503201001269

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
        if ((rear + 1) % SIZE == front){
            cout << "Queue Overflow" << endl;
            return;
    }
    if (front == -1)
            front = 0;
      rear = (rear + 1) % SIZE;
        q[rear] = x;
    }
      void pop(){
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
            front = (front + 1) % SIZE;
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
        int i = front;
         while (true){
            cout << q[i] << " ";
         if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
       void isEmpty(){
        if (front == -1)
            cout << "Queue is Empty" << endl;
        else
            cout << "Queue is Not Empty" << endl;
    }
       void isFull(){
        if ((rear + 1) % SIZE == front)
            cout << "Queue is Full" << endl;
        else
            cout << "Queue is Not Full" << endl;
    }
      void getSize(){
        if (front == -1)
            cout << "Queue size: 0" << endl;
        else
            cout << "Queue size: "
                 << (rear - front + SIZE) % SIZE + 1 << endl;
    }
};

int main(){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.top();
    q.pop();
    q.getSize();
    q.display();
    q.isEmpty();
    q.isFull();

    q.push(60);
    q.display();

    return 0;
}
**************OUTPUT*************
Front element: 10
Deleted element: 10
Queue size: 4
Queue elements: 20 30 40 50
Queue is Not Empty
Queue is Not Full
Queue elements: 20 30 40 50 60