#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter name for conversion: ";
    cin >> s;
    int a[s.length()];
    for (int i = 0; i < s.length(); i++) {
        a[i] = int(s[i]);
    }
    cout << "ASCII values: ";
    for (int i = 0; i < s.length(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += a[i];
    }

    while (sum >= 15) {
        int tempSum = 0;
        while (sum > 0) {
            tempSum += sum % 10;
            sum /= 10;
        }
        sum = tempSum;
    }

    cout << "Final number: " << sum << endl;

    string binary = "";
    int num = sum;
    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary;
        num /= 2;
    }

    cout << "Binary form: " << binary << endl;

    int ultimateSum = 0;
    for (int i = 0; i < binary.length(); i++) {
        ultimateSum += binary[i] - '0';
    }

    cout << "Ultimate sum: " << ultimateSum << endl;

    return 0;
}

