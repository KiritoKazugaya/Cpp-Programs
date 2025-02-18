#include <iostream>
#include <cmath>
#include <bitset>
#include <string>
#include <sstream>  // ? Added for alternative conversion
using namespace std;

bool isMagicNumber(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return (num == 1);
}

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == num;
}

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

bool isHarshad(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}

bool isKaprekar(int num) {
    long square = (long)num * num;
    
    ostringstream strm;
    strm << square;
    string s = strm.str();  

    int len = s.length();
    int left = (len > 1) ? stoi(s.substr(0, len / 2)) : 0;  
    int right;
    sscanf(s.substr(len / 2).c_str(), "%d", &right);  

    return (left + right == num);
}

bool isAutomorphic(int num) {
    long square = (long)num * num;
    return square % (long)pow(10, (int)log10(num) + 1) == num;
}

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool isFibonacci(int num) {
    int a = 0, b = 1, next = 0;
    while (next < num) {
        next = a + b;
        a = b;
        b = next;
    }
    return (num == 0 || num == next);
}

int squareSum(int n) {
    int sum = 0;
    while (n) {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}

bool isHappy(int num) {
    int slow = num, fast = num;
    do {
        slow = squareSum(slow);
        fast = squareSum(squareSum(fast));
    } while (slow != fast);
    return slow == 1;
}

bool isUgly(int num) {
    if (num <= 0) return false;
    while (num % 2 == 0) num /= 2;
    while (num % 3 == 0) num /= 3;
    while (num % 5 == 0) num /= 5;
    return num == 1;
}

bool isDuck(int num) {
    ostringstream strm;
    strm << num;
    string s = strm.str();

    return s.find('0') != string::npos && s[0] != '0';
}

bool isPalindrome(int num) {
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == num;
}

bool isSmith(int num) {
    if (isPrime(num)) return false;
    int digitSum = 0, temp = num;
    while (temp > 0) {
        digitSum += temp % 10;
        temp /= 10;
    }
    int factorSum = 0, n = num;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            int temp2 = i;
            while (temp2 > 0) {
                factorSum += temp2 % 10;
                temp2 /= 10;
            }
            n /= i;
        }
    }
    return digitSum == factorSum;
}

bool isSpy(int num) {
    int sum = 0, prod = 1, temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        prod *= digit;
        temp /= 10;
    }
    return sum == prod;
}

bool isPronic(int num) {
    for (int i = 0; i * (i + 1) <= num; i++) {
        if (i * (i + 1) == num)
            return true;
    }
    return false;
}

bool isEmirp(int num) {
    if (!isPrime(num)) return false;
    int rev = 0, temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return isPrime(rev) && num != rev;
}

bool isEvil(int num) {
    bitset<32> binary(num);
    return binary.count() % 2 == 0;
}

bool isTrimorphic(int num) {
    long cube = (long)num * num * num;
    return cube % (long)pow(10, (int)log10(num) + 1) == num;
}

bool isTetrahedral(int num) {
    int n = 1, tetra = 1;
    while (tetra < num) {
        n++;
        tetra = (n * (n + 1) * (n + 2)) / 6;
    }
    return tetra == num;
}

void menu() {
    int num;
    char choice;
    do {
        cout << "Enter a number: ";
        cin >> num;
        cout << "Select a number property (1-20):\n";
        cout << "1. Magic Number\n2. Armstrong Number\n3. Perfect Number\n4. Harshad Number\n";
        cout << "5. Kaprekar Number\n6. Automorphic Number\n7. Prime Number\n8. Fibonacci Number\n";
        cout << "9. Happy Number\n10. Ugly Number\n11. Duck Number\n12. Palindrome\n";
        cout << "13. Smith Number\n14. Spy Number\n15. Pronic Number\n16. Emirp Number\n";
        cout << "17. Evil Number\n18. Trimorphic Number\n19. Tetrahedral Number\n";
        cout << "Enter your choice: ";
        
        int option;
        cin >> option;

        bool (*functions[])(int) = {
            isMagicNumber, isArmstrong, isPerfect, isHarshad, isKaprekar, isAutomorphic, isPrime,
            isFibonacci, isHappy, isUgly, isDuck, isPalindrome, isSmith, isSpy, isPronic,
            isEmirp, isEvil, isTrimorphic, isTetrahedral
        };

        cout << (functions[option - 1](num) ? "YES\n" : "NO\n");

        cout << "Check again? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
}

int main() {
    menu();
    return 0;
}

