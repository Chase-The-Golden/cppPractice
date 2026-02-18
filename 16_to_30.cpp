#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void func_16() {
    cout << "\nQ16" << endl;
    
    vector<int> v1, v2;
    bool match = true;

    // Filling vector randomly
    for (int i = 0; i < rand() % 4 + 1; i++) {
        v1.push_back(rand() % 20);
    }
    for (int i = 0; i < rand() % 4 + 1; i++) {
        v2.push_back(rand() % 20);
    }

    // Print vectors
    cout << "arr1[] = {";
    for (auto i : v1) 
        cout << i << ", ";
    cout << "\b\b}" << endl;

    cout << "arr2[] = {";
    for (auto i : v2)
        cout << i << ", ";
    cout << "\b\b}" << endl;

    // Checking vectors
    if (v1.size() != v2.size()) 
        match = false;
    else {
        for (int i = 0; i < min(v1.size(), v2.size()); i++) {
            if (v1.at(i) != v2.at(i)) {
                match = false;
                break;
            }
        }
    }

    // Print results
    if (match)
        cout << "arr1[] and arr2[] are equal." << endl;
    else
        cout << "arr1[] and arr2[] are not equal." << endl;

}

void func_17() {
    cout << "\nQ17" << endl;

    int arr[4];
    float sum = 0;

    cout << "arr[] = {";
    for (int i = 0; i < 4; i++) {
        arr[i] = rand() % 50;
        cout << arr[i] << ", ";
        sum += arr[i];
    }
    cout << "\b\b}" << endl;

    cout << "Average = " << sum / 4 << endl;
}

void func_18() {
    cout << "\nQ18" << endl;

    int arr[6];
    cout << "arr[] = {";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        arr[i] = rand() % 50;
        cout << arr[i] << ", ";
    }
    cout << "\b\b}" << endl;

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < 6; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Maxmimum = " << max << endl;
    cout << "Minimum = " << min << endl;
}

void func_19() {
    cout << "\nQ19" << endl;

    int arr[6], n;
    bool found = false;

    cout << "arr[] = {";
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        arr[i] = rand() % 20;
        cout << arr[i] << ", ";
    }
    cout << "\b\b}" << endl;

    cout << "Element to be Searched: ";
    cin >> n;

    for (int i = 0; i < 6; i++) {
        if (n == arr[i]) {
            found = true;
            cout << n << " found in index " << i << endl;
        }
    }

    if(!found)
        cout << n << " not found in the arr[]" << endl;
}

void func_20() {
    cout << "\nQ20" << endl;

    int arr[6],
        k = rand() % 5 + 1,
        count = 0,
        size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "arr[] = {";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 50;
        cout << arr[i] << ", ";
    }
    cout << "\b\b}" << endl;

    cout << "K = " << k << endl;
    while (count < k) {
        int temp = arr[size - 1];
        for (int i = size - 1; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
        count++;
    }

    cout << "Array after rotation: {";
    for (auto i : arr) {
        cout << i << ", ";
    }
    cout << "\b\b}" << endl;
}

void func_21() {
    cout << "\nQ21" << endl;

    int matrix[3][3];
    int pDiag = 0, sDiag = 0, size = sizeof(matrix) / sizeof(matrix[0]);

    // Filling matrix
    cout << "matrix =";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = rand() % 9;
            cout << matrix[i][j] << " ";
        }
        cout << endl << (i < 2 ? "\t" : "");
    }

    // Principal diagonal
    for (int i = 0; i < size; i++) {
        pDiag += matrix[i][i];
    }
    cout << "Principal diagonal = " << pDiag << endl;

    // Secondary diagonal
    for (int i = 0; i < size; i++) {
        sDiag += matrix[size - 1 - i][i];
    }
    cout << "Secondarty diagnonal = " << sDiag << endl;
}

void func_22() {
    cout << "\nQ22" << endl;

    int matrix[3][3];
    int temp,
        count = 0,
        k = rand() % 9,
        size = sizeof(matrix) / sizeof(matrix[0]);

    // Filling matrix
    cout << "matrix =";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = rand() % 9;
            cout << matrix[i][j] << " ";
        }
        cout << endl << (i < 2 ? "\t" : "");
    }

    while (count < k) {
        for (int i = 0; i < 3; i++) {
            // TODO: Reevaluate matrix rotation
        }
        count++;
    }
}

void func_23() {
    cout << "\nQ23" << endl;

    string s;
    cout << "str = ";
    cin >> s;
    cout << "Length of str = " << s.length() << endl;
}

void func_24() {
    cout << "\nQ24" << endl;

    string s1, s2;
    cout << "str1 = ";
    cin >> s1;
    cout << "str2 = ";
    cin >> s2;

    cout << "str1 and str2 are" << (s1 == s2 ? " " : " not ") << "equal." << endl;
}

void func_25() {
    cout << "\nQ25" << endl;
    
    string s;
    bool palindrome = true;

    cout << "str = ";
    cin >> s;

    int mid = s.length() % 2 == 0 ? s.length() / 2 : s.length() / 2 + 1;

    for (int i = 0; i < mid; i++) {
        if (s[i] != s[s.length()- 1 - i]) {
            palindrome = false;
            break;
        }
    }

    cout << "str is" << (palindrome ? " " : " NOT ") << "a palindrome string." << endl;
}

void func_26() {
    cout << "\nQ26" << endl;

    // TODO: Put calculation of dec to bin and vice versa below

}

void func_27() {
    cout << "\nQ27" << endl;
    
    string s = to_string(rand() % 100000);
    cout << "str = \"" << s << "\"" << endl;
    cout << "Number = " << stoi(s) << endl;
}

void func_28() {
    cout << "\nQ28" << endl;
    
    string s;
    cout << "str = ";
    cin.ignore();
    getline(cin, s);

    stringstream ss(s);
    
    string token;

    while (getline(ss, token, ' ')) {
        cout << token << endl;
    }
}

void func_29() {
    cout << "\nQ29" << endl;

    int layers = rand() % 9 + 1, stars = layers;
    cout << layers << endl;

    for (int i = 0; i < layers; i++) {
        for (int j = 0; j < layers; j++) {
            if (j >= stars - 1)
                cout << "* ";
            else
                cout << " ";
        }
        cout << endl;
        stars--;
    }
}