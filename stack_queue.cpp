class ArrayStack {
private:
    int arr[10000];
    int topIndex;

public:
    ArrayStack() {
        topIndex = -1;
    }

    void push(int x) {
        topIndex++;
        arr[topIndex] = x;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }

        int x = arr[topIndex];
        topIndex--;

        return x;
    }

    int top() {
        if (isEmpty()) {
            return -1;
        }

        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }
};

class ArrayQueue {
private:
    int arr[10000];
    int front;
    int rear;
    int size;
    int capacity;

public:
    ArrayQueue() {
        front = 0;
        rear = -1;
        size = 0;
        capacity = 10000;
    }

    void push(int x) {
        if (size == capacity) {
            return;
        }

        rear = (rear + 1) % capacity;
        arr[rear] = x;
        size++;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }

        int x = arr[front];
        front = (front + 1) % capacity;
        size--;

        return x;
    }

    int peek() {
        if (isEmpty()) {
            return -1;
        }

        return arr[front];
    }

    bool isEmpty() {
        return size == 0;
    }
};