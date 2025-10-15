#include <iostream>

using namespace std;

class Reservoir {
    string title;
    int width;
    int length;
    int max;
    string type;
public:
    Reservoir() {}

    Reservoir(const string& title, int width, int length, int max, const string& type) : title(title), width(width), length(length), max(max), type(type) {

    }

    int Volume() const {
        return width * length * max;
    }

    int Area() const {
        return width * length;
    }

    string getType() const {
        return type;
    }

    void compareAreas(const Reservoir& r1, const Reservoir& r2) {

        int area1 = r1.Area();
        int area2 = r2.Area();

        if (area1 > area2) {
            cout << "First reservoir has a larger area." << endl;
        }
        else if (area2 > area1) {
            cout << "Second reservoir has a larger area." << endl;
        }
        else {
            cout << "Both reservoirs have equal area." << endl;
        }
    }

    Reservoir* Delete(Reservoir* arr, int& size, int indexToDelete) {

        Reservoir* newArr = new Reservoir[size - 1];

        for (int i = 0, j = 0; i < size; ++i) {
            if (i != indexToDelete) {
                newArr[j++] = arr[i];
            }
        }

        delete[] arr;
        --size;
        return newArr;
    }

};

int main()
{
    int n;
    cout << "How many reservoirs do you want to enter? ";
    cin >> n;
    Reservoir r;
    Reservoir* reservoirs = new Reservoir[n];
    int* volumes = new int[n];
    int* areas = new int[n];
    string* types = new string[n];

    for (int i = 0; i < n; ++i) {
        string title, type;
        int width, length, max;

        cout << "Title: ";
        cin >> title;
        cout << "Width: ";
        cin >> width;
        cout << "Length: ";
        cin >> length;
        cout << "Max depth: ";
        cin >> max;
        cout << "Type (Basin / Pond): ";
        cin >> type;

        reservoirs[i] = Reservoir(title, width, length, max, type);

        volumes[i] = reservoirs[i].Volume();
        areas[i] = reservoirs[i].Area();
        types[i] = reservoirs[i].getType();
    }

    cout << "Results: ";
    for (int i = 0; i < n; ++i) {
        cout << "Reservoir #" << i + 1 << ": " << endl;
        cout << "  Volume: " << volumes[i] << endl;
        cout << "  Area: " << areas[i] << endl;
        cout << "  Type: " << types[i] << endl;
    }
    int deleteIndex;
    cout << "Enter index to delete: ";
    cin >> deleteIndex;

    reservoirs = r.Delete(reservoirs, n, deleteIndex);

    delete[] reservoirs;
    delete[] volumes;
    delete[] areas;
    delete[] types;
}


