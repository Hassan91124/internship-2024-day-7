#include <iostream>

using namespace std;

int main() {
    double hoursWorked, hourlyRate, grossPay;
    cout << "Enter hours worked: ";
    cin >> hoursWorked;
    cout << "Enter hourly rate: ";
    cin >> hourlyRate;

    if (hoursWorked > 40) {
        grossPay = (40 * hourlyRate) + ((hoursWorked - 40) * (hourlyRate * 1.5));
    } else {
        grossPay = hoursWorked * hourlyRate;
    }

    cout << "Gross pay: $" << grossPay << endl;

    return 0;
}
