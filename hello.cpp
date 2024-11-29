#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;

    if (terms <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        printFibonacci(terms);
    }

    return 0;
}
