#include <iostream>
#include <exception>
using namespace std;

template<typename T>
class LinkedList {

private:

    struct Node {

        T data;

        Node* next;

        Node(const T& val) :data(val), next(nullptr) {}

    };

    Node* head;

public:

    LinkedList() :head(nullptr) {}

    bool is_empty()const {

        return head == nullptr;

    }

    void push_front(const T& value) {

        Node* newNode = new Node(value);

        newNode->next = head;

        head = newNode;

    }

    void push_back(const T& value) {

        Node* newNode = new Node(value);

        if (!head) {

            head = newNode;

            return;

        }

        Node* current = head;

        while (current->next) {

            current = current->next;

        }

        current->next = newNode;

    }

    void print()const {

        if (is_empty()) {

            cout << "List is empty" << endl;

        }

        Node* current = head;

        while (current) {

            cout << current->data << " -> ";

            current = current->next;

        }

        cout << endl;

    }

    void clear() {

        while (head) {

            Node* temp = head;

            head = head->next;

            delete temp;

        }

    }

    bool insert_before(const T& target, const T& value) {

        if (!head) return false;

        if (head->data == target) {

            push_front(value);

            return true;

        }

        Node* prev = nullptr;

        Node* current = head;

        while (current) {

            if (current->data == target) {

                Node* newNode = new Node(value);

                newNode->next = current;

                if (prev) prev->next = newNode;

                return true;

            }

            prev = current;

            current = current->next;

        }

        return false;

    }

    bool insert_after(const T& target, const T& value) {

        Node* current = head;

        while (current) {

            if (current->data == target) {

                Node* newNode = new Node(value);

                newNode->next = current->next;

                current->next = newNode;

                return true;

            }

            current = current->next;

        }

        return false;

    }

    bool remove(const T& value) {

        Node* current = head;

        Node* prev = nullptr;

        while (current) {

            if (current->data == value) {

                if (prev)

                    prev->next = current->next;

                else

                    head = current->next;

                delete current;

                return true;

            }

            prev = current;

            current = current->next;

        }

        return false;

    }

    T peek_front()const {
        if (!head) throw runtime_error("List is empty");
        return head->data;
    }

    bool pop_front() {

        if (!head) return false;

        Node* temp = head;

        head = head->next;

        delete temp;

        return true;

    }

    bool contains_top()const {

        return head != nullptr;

    }

};

template<typename T>
class Stack {

private:
    LinkedList<T> list;
public:

    void push(const T& value) {
        list.push_front(value);
    }

    bool pop() {
        if (!list.contains_top()) return false;
        list.pop_front();
        return true;
    }

    T top()const {
        return list.peek_front();
    }

    bool is_empty() {
        return list.is_empty();
    }

    void print() const {
        cout << "Stack (top -> bottom): ";
        list.print();

    }

};


template<typename T>
class Queue {

private:
    LinkedList<T> list;
public:

    void enqueue(const T& value) {
        list.push_back(value);
    }

    bool dequeue() {
        if (!list.contains_top()) return false;
        list.pop_front();
        return true;
    }

    T front()const {
        return list.peek_front();
    }

    bool is_empty() {
        return list.is_empty();
    }

    void print() const {
        cout << "Queue (front -> back): ";
        list.print();
    }

};



int main()
{
try {
     Queue<string> q;
     q.enqueue("Alice");
     q.enqueue("Bob");
     q.print();
     cout << q.front() << endl;
     q.dequeue();
     q.print();
     q.dequeue();
     q.print();
     cout << q.front() << endl;
    }
catch (exception& e) {
    cout << e.what() << endl;
   }
}

