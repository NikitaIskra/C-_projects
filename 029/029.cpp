#include <iostream>

using namespace std;

//template<typename T>

//class Processor {
//public:
//    Processor() {
//
//    }
//    T process(const T& input) {
//        return input;
//    }
//
//    template<typename V>
//    V convert(const T& input);
//
//};
//
//template<>
//class Processor<string> {
//public:
//    void printSpecial(const string& input) {
//        cout << "Special text \"" << input << "\"" << endl;
//    }
//};
//
//template<typename T>
//template<typename V>
//V Processor<T>::convert(const T& input) {
//    return static_cast<V>(input);
//}

//template<typename T, typename T2>
//class Comparator {
//private:
//    T a;
//    T2 b;
//public:
//    Comparator(T a, T2 b) : a(a), b(b) {}
//
//    auto max() {
//        return (a > b) ? a : b;
//    }
//    
//    void print() {
//        cout << max() << endl;
//    }
//
//};

template<typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& val) : data(val), next(nullptr);
    };
    Node* head;
public:
    LinkedList():head(nullptr) {}
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

    void print() const {
        Node* current = head;
        while (current) {
            cout << current->data << " ->";
            current = current->next;
        }
        /*cout << "List is empty" << endl;*/
    }

};

int main()
{
    LinkedList<int> list;
    list.push_back(10);
    list.push_front(5); 
    list.push_back(20);
    list.print();




    //Comparator<int, double>p(5, 7.2);
    //p.print();
    //Processor<int>p;
    //cout << p.process(100) << endl;
    //char result = p.convert<char>(101);
    //cout << result << endl;
    //Processor<string> s;
    //s.printSpecial("Hello");
}
