#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
    Node* top;  // pointer to top node

public:
    Stack() {
        top = nullptr;
    }

    // Push operation
    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = top;
        top = newNode;
        cout << x << " pushed onto stack\n";
    }

    // Pop operation
    int pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return -1;
        }
        int val = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return val;
    }

    // Peek operation
    int peek() {
        if (top == nullptr) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return top->data;
    }

    // Check if empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Display stack elements
    void display() {
        if (top == nullptr) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Stack elements: ";
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    st.display();

    cout << "Top element: " << st.peek() << endl;

    cout << "Popped: " << st.pop() << endl;
    cout << "Popped: " << st.pop() << endl;

    st.display();

    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
