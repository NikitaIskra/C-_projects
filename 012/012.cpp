#include <iostream>

using namespace std;

//int** addRow(int** array, int rows, int cols, int* newRow, int del) {
//    int** newArray = new int* [rows - 1];
//
//    for (int i = 0; i < rows; i++) {
//        if (i == del) {
//            continue;
//        }
//        else {
//            newArray[i] = new int[cols];
//            for (int j = 0; j < cols; j++) {
//                newArray[i][j] = array[i][j];
//            }
//        }
//    } 
//    for (int i = 0; i < rows; i++) {
//        delete[] array[i];
//    }
//    delete[] array;
//    return newArray;
//}
    //int del;
    //cout << "Enter num: ";
    //cin >> del;
    //int rows = 2;
    //int cols = 3;
    //int** array = new int* [rows];
    //for (int i = 0; i < rows; ++i) {
    //    array[i] = new int[cols];
    //    for (int j = 0; j < cols; ++j) {
    //        array[i][j] = i + j;
    //    }
    //}

    //int newRow[] = { 1, 1, 1 };
    //array = addRow(array, rows, cols, newRow, del);
    //rows--;

    //for (int i = 0; i < rows; ++i) {
    //    for (int j = 0; j < cols; ++j) {
    //        cout << array[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //for (int i = 0; i < rows; ++i) {
    //    delete[] array[i];
    //}
    //delete[] array;

enum DaysofWeek {
    Monday = 1000,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

enum UserStatus {
    Guest = 0,
    User = 1,
    Moderator = 2,
    Admin = 3
};

void CheckAccess(UserStatus, int user) {
    UserStatus a = Moderator
    if (user >= )
}

int main()
{
    //DaysofWeek today = Wednesday;
    //if (today == 1000) {
    //    cout << "Create a schedule for wek!!!" << endl;
    //}
    // 
    //if (today == 2) {
    //    cout << "Update your softwear!!!" << endl;
    //}
    int user;
    cout << "Your status 0 - Guest, 1 - User, 2 - Moderator, 3 - Admin : ";
    cin >> user;
}

