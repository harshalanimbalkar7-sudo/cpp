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