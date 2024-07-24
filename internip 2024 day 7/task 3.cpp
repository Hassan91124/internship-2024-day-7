#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number >= 10 && number <= 20) {
        cout << "Within range" << endl;
    } else {
        cout << "Out of range" << endl;
    }

    return 0;
}
