Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;
#define SIZE 5
class PriorityQueue{
    int q[SIZE];
    int front, rear;
public:
    PriorityQueue(){
        front = -1;
        rear = -1;
    }
   void push(int x){
        if (rear == SIZE - 1){
            cout << "Priority Queue Overflow" << endl;
            return;
        }
      if (front == -1)
            front = 0;
         rear++;
        int i = rear;
     while (i > front && q[i - 1] < x){
            q[i] = q[i - 1];
            i--;
        }
      q[i] = x;
    }
     void pop(){
        if (front == -1){
            cout << "Priority Queue Underflow" << endl;
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
            cout << "Priority Queue is Empty" << endl;
        else
            cout << "Highest Priority Element: " << q[front] << endl;
    }
     void display(){
        if (front == -1){
            cout << "Priority Queue is Empty" << endl;
            return;
        }
         cout << "Priority Queue elements: ";
         for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
         cout << endl;
    }
      void isEmpty(){
        if (front == -1)
            cout << "Priority Queue is Empty" << endl;
        else
            cout << "Priority Queue is Not Empty" << endl;
    }
void isFull(){
        if (rear == SIZE - 1)
            cout << "Priority Queue is Full" << endl;
        else
            cout << "Priority Queue is Not Full" << endl;
    }
void getSize(){
        if (front == -1)
            cout << "Priority Queue size: 0" << endl;
        else
            cout << "Priority Queue size: " << rear - front + 1 << endl;
    }
};
int main(){
    PriorityQueue q;
    q.push(30);
    q.push(10);
    q.push(50);
    q.push(20);
    q.push(40);
    q.display();
    q.top();
    q.pop();
    q.display();
    q.getSize();
    q.isEmpty();
    q.isFull();
     return 0;
}
************OUTPUT****************
Priority Queue elements: 50 40 30 20 10
Highest Priority Element: 50
Deleted element: 50
Priority Queue elements: 40 30 20 10
Priority Queue size: 4
Priority Queue is Not Empty
Priority Queue is Not Full