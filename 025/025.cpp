#include <iostream>

using namespace std;

//class Student {
//private:
//    char* name;
//public:
//    Student(const char* n) {
//        name = new char[strlen(n) + 1];
//        strcpy_s(name, strlen(n) + 1, n);
//    }
//    Student(const Student& other) {
//        name = new char[strlen(other.name) + 1];
//        strcpy_s(name, strlen(other.name) + 1, other.name);
//    }
//    ~Student() {
//        delete[] name;
//        cout << "object deleted" << endl;
//    }
//    void print() const {
//        cout << name << endl;
//    }
//
//    void printOther(const Student& student) {
//        student.print();
//    }
//};

class Book {
    Book* mas[10];
    string author;
    string name;
    string publishing;
    int year;
    int number;
    int page;
public:
    Book() {}

    Book(const string& author, const string& name, const string& publishing, int year, int number, int page) : author(author), name(name), publishing(publishing), year(year), number(number), page(page) {

    }

    string getAutor() const {
        return author;
    }

    string getPublisher() const {
        return publishing;
    }

    int getYear() const {
        return year;
    }

    void print() {
        cout << "Author: " << author << endl;
        cout << "Name: " << name << endl;
        cout << "Publisher: " << publishing << endl;
        cout << "Year: " << year << endl;
        cout << "Number: " << number << endl;
        cout << "Page: " << page << endl;
    }

};

class Library {
    Book* mas;
    int c;
    int size;
    int syear;
public:
    Library(int c) : c(c), size(0) {
        mas = new Book[c];
    }

    void addBook(const Book& book) {
        if (size < c) {
            mas[size++] = book;
        }
    }

    void printBook(const string& author) {
        for (int i = 0; i < size; i++) {
            if (mas[i].getAutor() == author) {
                mas[i].print();
            }
        }
    }

    void printPublisher(const string& publishing) {
        for (int i = 0; i < size; i++) {
            if (mas[i].getPublisher() == publishing) {
                mas[i].print();
            }
        }
    }

    void printYear(int year, int syear) {
        for (int i = 0; i < size; i++) {
            if (mas[i].getYear() >= syear) {
                mas[i].print();
            }
        }
    }

};

int main()
{

    Library library(5);

    Book b1("George Orwell", "1984", "Secker & Warburg", 1949, 1, 328);
    Book b2("J.K. Rowling", "Harry Potter and the Philosopher's Stone", "Bloomsbury", 1997, 2, 223);
    Book b3("J.R.R. Tolkien", "The Hobbit", "George Allen & Unwin", 1937, 3, 310);
    Book b4("George Orwell", "Animal Farm", "Secker & Warburg", 1945, 4, 112);
    Book b5("Ernest Hemingway", "The Old Man and the Sea", "Charles Scribner's Sons", 1952, 5, 127);

    library.addBook(b1);
    library.addBook(b2);
    library.addBook(b3);
    library.addBook(b4);
    library.addBook(b5);

    cout << "Books by George Orwell:" << endl;
    library.printBook("George Orwell");


    cout << "\nBooks published by 'Bloomsbury':" << endl;
    library.printPublisher("Bloomsbury");

    cout << "\nBooks published after 1940:" << endl;
    library.printYear(0, 1940);


    //Student s1("Student1");
    //Student s2 = s1;
    //s1.print();
    //s2.print();
    //Student s3("Student3");
    //s2.printOther(s3);
}

