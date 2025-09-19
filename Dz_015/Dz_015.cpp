#include <iostream>

using namespace std;

struct Book {
private:
    string title;
    string author;
    string publisher;
    string genre;
    string b[10];
public:
    void filling() {
            cout << "Enter the title of the book: ";
            cin >> title;
            cout << "Enter the author: ";
            cin >> author;
            cout << "Enter the publisher: ";
            cin >> publisher;
            cout << "Enter genre: ";
            cin >> genre;
    }
    void display() {
        cout << "Title: " << title << ", Author: " << author << ", Publisher: " << publisher << ", Genre: " << genre << endl;
    }

    void edit() {
        string newtitle;
        string newauthor;
        string newpublisher;
        string newgenre;
        string edit;
        string edita;
        string editp;
        string editg;
        cout << "Enter the title of the book to edit: ";
        cin >> newtitle;
        cout << "Enter the author of the book to edit: ";
        cin >> newauthor;
        cout << "Enter the publisher of the book to edit: ";
        cin >> newpublisher;
        cout << "Enter the genre of the book to edit: ";
        cin >> newgenre;
        for (int i = 0; i < 10; i++) {
            if (title == newtitle) {
                cout << "Enter a new name: ";
                cin >> edit;
                title = edit;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (author == newauthor) {
                cout << "Enter a new author: ";
                cin >> edita;
                author = edita;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (publisher == newpublisher) {
                cout << "Enter a new publisher: ";
                cin >> editp;
                publisher = editp;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (genre == newgenre) {
                cout << "Enter a new genre: ";
                cin >> editg;
                genre = editg;
            }
        }
        cout << "Title: " << title << ", Author: " << author << ", Publisher: " << publisher << ", Genre: " << genre << endl;
    }

    void aut() {
        string aut;
        cout << "Enter the author you are looking for: ";
        cin >> aut;
        for (int i = 0; i < 10; i++) {
            if (author == aut) {
                author = aut;
            }
        }
        cout << "Title: " << title << ", Author: " << author << ", Publisher: " << publisher << ", Genre: " << genre << endl;
    }

    void tit() {
        string tit;
        cout << "Enter the title you are looking for: ";
        cin >> tit;
        for (int i = 0; i < 10; i++) {
            if (title == tit) {
                title = tit;
            }
        }
        cout << "Title: " << title << ", Author: " << author << ", Publisher: " << publisher << ", Genre: " << genre << endl;
    }

    void sortTitle(Book b[], int n) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (b[j].title > b[j + 1].title) {
                    Book tmp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = tmp;
                }
            }
        }
    }

    void sortAuthor(Book b[], int n) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (b[j].author > b[j + 1].author) {
                    Book tmp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = tmp;
                }
            }
        }
    }

    void sortPublisher(Book b[], int n) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (b[j].publisher > b[j + 1].publisher) {
                    Book tmp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = tmp;
                }
            }
        }
    }


};

int main()
{
    int n = 10;
    Book books[10];

    for (int i = 0; i < 10; i++) {
        books[i].filling();
    }

    for (int i = 0; i < 10; i++) {
        books[i].display();
    }

    books[0].edit();
    books[0].aut();
    books[0].tit();
    books[0].sortTitle(books, n);
    for (int i = 0; i < 10; i++) {
        books[i].display();
    }

    delete[] books;
}

