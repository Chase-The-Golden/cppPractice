#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

void func_1() {
    cout << "Q1" << endl;

    cout << "Hello ";
    printf("World\n");
}

void func_2() {
    cout << "\nQ2" << endl;

    int n;
    cout << "Enter any Number: ";
    cin >> n;
    cout << "Entered Number: " << n << endl;
}

void func_3() {
    cout << "\nQ3" << endl;

    int r = rand() % 25;
    const int ASCII = 65 + r;
    cout << "Character = " << (char)(ASCII) << endl;
    printf("ASCII Value of '%c' = %d\n", ASCII, ASCII);
}

void func_4() {
    cout << "\nQ4" << endl;
    
    int a = rand() % 250, b = rand() % 250;
    cout << "a = " << a << ", b = " << b << endl;

    // swap
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << ", b = " << b << endl;
}

void func_5() {
    cout << "\nQ5" << endl;

    cout << "size of int: " << sizeof(int) << " bytes" << endl;
    cout << "size of float: " << sizeof(float) << " bytes" << endl;
    cout << "size of double: " << sizeof(double) << " bytes" << endl;
    cout << "size of char: " << sizeof(char) << " bytes" << endl;
}

void func_6() {
    cout << "\nQ6" << endl;

    int principle = rand() % 25000;
    float rate = rand() % 15;
    int years = rand() % 10;

    cout << "Principle = " << principle << endl;
    cout << "Rate = " << rate << "%" << endl;
    cout << "Time = " << years << " Years" << endl;

    float interest = principle * pow(float(1 + rate / 100), years);
    printf("Compound Interest = %.2f\n", interest - principle);
}

void func_7() {
    cout << "\nQ7" << endl;

    int n = rand();
    cout << "Number = " << n << endl;
    cout << n << " is " << (n % 2 == 0 ? "Even" : "Odd") << " Number." << endl;
}

void func_8() {
    cout << "\nQ8" << endl;

    // Assigning random numbers
    int a = rand() % 25;
    int b = rand() % 25;
    int c = rand() % 25;
    
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    int largestNum = a;
    char largestChar = 'a';

    if (largestNum < b) largestChar = 'b';
    if (largestNum < c) largestChar = 'c';

    cout << largestChar << " is the largest." << endl;
}

void func_9() {
    cout << "\nQ9" << endl;

    int year = rand() % 2026;

    cout << "Number to Check = " << year << endl;

    if (year % 4 == 0) {
        cout << year << " is a Leap Year" << endl;
    } else if (year % 100 == 0 && year % 400 == 0) {
        cout << year << " is a Leap Year" << endl;
    } else if (year % 100 == 0 && year % 400 != 0) {
        cout << year << " is NOT a Leap Year" << endl;
    } else {
        cout << year << " is NOT a Leap Year" << endl;
    }
}

void func_10() {
    cout << "\nQ10" << endl;

    int n = rand();
    bool prime = true;

    cout << "Number to Check = " << n << endl;
    
    if (n > 1) {
        // Brute force O(n)
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    } else {
        prime = false;
    }

    cout << n << " is" << (prime ? " " : " NOT ") << "a prime number." << endl;
}

void func_11() {
    cout << "\nQ11" << endl;

    string n = to_string(rand());
    int mid = n.length() % 2 == 0 ? n.length() / 2 : n.length() / 2 + 1;

    bool palindrome = true;

    for (int i = 0; i < mid; i++) {
        if (n[i] != n[n.length()- 1 - i]) {
            palindrome = false;
            break;
        }
    }

    cout << n << " is" << (palindrome ? " " : " NOT ") << "a palindrome number." << endl;
}

void func_12() {
    cout << "\nQ12" << endl;

    int a, b;
    char mode;

    cout << "Enter the Number: ";
    cin >> a >> b;

    cout << "Enter a for addition." << endl;
    cout << "Enter s for subtraction." << endl;
    cout << "Enter m for multiplication." << endl;
    cout << "Enter d for division." << endl;
    cin >> mode;

    switch(mode) {
        case 'a':
            cout << a + b << endl;
            break;
        case 's':
            cout << a - b << endl;
            break;
        case 'm':
            cout << a * b << endl;
            break;
        case 'd':
            if (b == 0)
                cerr << "ERR" << endl;
            else
                cout << a / b << endl;
            break;
        default:
            cerr << "ERR" << endl;
    }
}

void recur_13(string s, int i) {
    if (i < 0) {
        cout << endl;
        return;
    }
    
    cout << s[i];
    recur_13(s, i-1);
}

void func_13() {
    cout << "\nQ13" << endl;

    string sentence;
    cout << "Sentence = ";
    cin.ignore();
    getline(cin, sentence);
    recur_13(sentence, sentence.length() - 1);
}

int recur_14(int n) {
    if (n <= 1)
        return n;
    
    return recur_14(n - 1) + recur_14(n - 2);
}

void func_14() {
    cout << "\nQ14" << endl;

    int num = rand() % 12;

    cout << "N = " << num << endl;
    cout << recur_14(num) << endl;
}

void func_15() {
    cout << "\nQ15" << endl;

    int a = rand() % 20, b = rand() % 20;

    cout << "a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
}