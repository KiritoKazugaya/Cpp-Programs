#include <iostream>
using namespace std;

int main() {
    cout << "Enter rows: ";
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

