#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0 && number % 2 == 0) {
        cout << "Positive and even" << endl;
    } else if (number > 0) {
        cout << "Positive but odd" << endl;
    } else {
        cout << "Negative" << endl;
    }

    return 0;
}
