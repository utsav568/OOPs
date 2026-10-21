Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;
#define SIZE 5

class Deque
{
    int q[SIZE];
    int front, rear;

public:
    Deque(){
        front = -1;
        rear = -1;
    }

    void pushFront(int x){
        if ((front == 0 && rear == SIZE - 1) ||
            (front == rear + 1)){
            cout << "Deque Overflow" << endl;
            return;
        }

        if (front == -1){
            front = rear = 0;
        }
        else if (front == 0){
            front = SIZE - 1;
        }
        else{
            front--;
        }

        q[front] = x;
    }

    void pushRear(int x){
        if ((front == 0 && rear == SIZE - 1) ||
            (front == rear + 1)){
            cout << "Deque Overflow" << endl;
            return;
        }

        if (front == -1){
            front = rear = 0;
        }
        else if (rear == SIZE - 1){
            rear = 0;
        }
        else{
            rear++;
        }

        q[rear] = x;
    }

    void popFront(){
        if (front == -1){
            cout << "Deque Underflow" << endl;
            return;
        }

        cout << "Deleted element: " << q[front] << endl;

        if (front == rear){
            front = rear = -1;
        }
        else if (front == SIZE - 1){
            front = 0;
        }
        else{
            front++;
        }
    }

    void popRear(){
        if (front == -1){
            cout << "Deque Underflow" << endl;
            return;
        }

        cout << "Deleted element: " << q[rear] << endl;

        if (front == rear){
            front = rear = -1;
        }
        else if (rear == 0){
            rear = SIZE - 1;
        }
        else{
            rear--;
        }
    }

    void getFront(){
        if (front == -1)
            cout << "Deque is Empty" << endl;
        else
            cout << "Front element: " << q[front] << endl;
    }

    void getRear(){
        if (rear == -1)
            cout << "Deque is Empty" << endl;
        else
            cout << "Rear element: " << q[rear] << endl;
    }

    void display(){
        if (front == -1){
            cout << "Deque is Empty" << endl;
            return;
        }

        cout << "Deque elements: ";
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
            cout << "Deque is Empty" << endl;
        else
            cout << "Deque is Not Empty" << endl;
    }

    void isFull(){
        if ((front == 0 && rear == SIZE - 1) ||
            (front == rear + 1))
            cout << "Deque is Full" << endl;
        else
            cout << "Deque is Not Full" << endl;
    }

    void getSize(){
        if (front == -1)
            cout << "Deque size: 0" << endl;
        else
            cout << "Deque size: "
                 << (rear - front + SIZE) % SIZE + 1 << endl;
    }
};

int main(){
    Deque q;

    q.pushRear(10);
    q.pushRear(20);
    q.pushRear(30);
    q.pushFront(5);
    q.pushFront(1);

    q.display();
    q.getFront();
    q.getRear();
    q.getSize();
    q.isEmpty();
    q.isFull();

    q.popFront();
    q.popRear();

    q.display();

    return 0;
}
********OUTPUT**************
Deque elements: 1 5 10 20 30
Front element: 1
Rear element: 30
Deque size: 5
Deque is Not Empty
Deque is Full
Deleted element: 1
Deleted element: 30
Deque elements: 5 10 20