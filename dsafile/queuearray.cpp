#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front, rear, size;

public:
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    bool isFull() {
        if (rear == size - 1)
            return true;
        else
            return false;
    }

    void enqueue(int n) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1)
            front = 0;

        rear = rear + 1;
        arr[rear] = n;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }

        int n = arr[front];

        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = front + 1;
        }

        cout << "Deleted: " << n << endl;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Front element: " << arr[front] << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        int i = front;

        while (i <= rear) {
            cout << arr[i] << " ";
            i = i + 1;
        }

        cout << endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    int size, choice, n;

    cout << "Enter queue size: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size\n";
        return 0;
    }

    Queue Q(size);

    do {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\n5. IsEmpty";
        cout << "\n6. IsFull";
        cout << "\n7. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element: ";
                cin >> n;
                Q.enqueue(n);
                break;

            case 2:
                Q.dequeue();
                break;

            case 3:
                Q.peek();
                break;

            case 4:
                Q.display();
                break;

            case 5:
                if (Q.isEmpty())
                    cout << "Queue is Empty\n";
                else
                    cout << "Queue is not Empty\n";
                break;

            case 6:
                if (Q.isFull())
                    cout << "Queue is Full\n";
                else
                    cout << "Queue is not Full\n";
                break;

            case 7:
                cout << "Exit\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 7);

    return 0;
}