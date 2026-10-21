Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;

struct Node
{
    int data, priority;
    Node *next;
};

class PriorityQueue
{
    Node *pq;

public:
    PriorityQueue()
    {
        pq = NULL;
    }

    void Enqueue(int x, int p)
    {
        Node *R = new Node;
        R->data = x;
        R->priority = p;
        R->next = NULL;

        Node *curr = pq;
        Node *prev = NULL;

        while (curr != NULL && curr->priority <= p)
        {
            prev = curr;
            curr = curr->next;
        }

        if (prev == NULL)
        {
            R->next = pq;
            pq = R;
        }
        else
        {
            prev->next = R;
            R->next = curr;
        }
    }

    void Dequeue()
    {
        if (pq == NULL)
        {
            cout << "Priority Queue Underflow";
        }
        else
        {
            Node *R = pq;
            cout << "Deleted Element = " << R->data;
            pq = pq->next;
            delete R;
        }
    }

    void Display()
    {
        Node *curr = pq;

        if (curr == NULL)
        {
            cout << "Priority Queue is Empty";
        }
        else
        {
            while (curr != NULL)
            {
                cout << curr->data << " ";
                curr = curr->next;
            }
        }
    }
};

int main()
{
    PriorityQueue pq;
    pq.Enqueue(10, 3);
    pq.Enqueue(20, 1);
    pq.Enqueue(30, 2);

    pq.Display();

    cout << endl;
    pq.Dequeue();

    cout << endl;
    pq.Display();

    return 0;
}
*********OUTPUT************
20 30 10
Deleted Element = 20
30 10