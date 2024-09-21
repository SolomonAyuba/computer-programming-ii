//
// Created by Solomon Ayuba on 20/09/2024 - Week 3 Module.
//

#include <iostream>

#define MAX_SIZE 100


class Queue {

private:

    int front, rear;

    int arr[MAX_SIZE];

public:

    Queue() {

        front = rear = -1; // Initialize front and rear of the queue to -1

    }

    // Function to enqueue element into the queue

    void enqueue(int val) {

        if (rear == MAX_SIZE - 1) {

            std::cout << "Queue Overflow\n";

            return;

        }

        if (front == -1) {

            front = 0;

        }

        arr[++rear] = val;

        std::cout << val << " enqueued into queue\n";

    }

    // Function to dequeue element from the queue

    int dequeue() {

        if (front == -1 || front > rear) {

            std::cout << "Queue Underflow\n";

            return -1;

        }

        int val = arr[front++];

        return val;

    }

    // Function to check if the queue is empty

    bool isEmpty() {

        return front == -1 || front > rear;

    }

};


int main() {

    Queue myQueue;

    myQueue.enqueue(10);

    myQueue.enqueue(20);

    myQueue.enqueue(30);

    std::cout << "Dequeued element: " << myQueue.dequeue() << std::endl;

    std::cout << "Dequeued element: " << myQueue.dequeue() << std::endl;


    std::cout << "Is the queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;

}