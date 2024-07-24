#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number < 10) {
        cout << "Small" << endl;
    } else if (number <= 20) {
        cout << "Medium" << endl;
    } else {
        cout << "Large" << endl;
    }

    return 0;
}
