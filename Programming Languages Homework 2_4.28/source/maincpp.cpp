#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int paycode;
    double salary;
    double weeklySalary;
    double hours, hourlyRate;
    double sales;
    double payPerItem;
    int items;

    cout << fixed << setprecision(2);

    cout << "Enter paycode (1-4, -1 to end): ";
    cin >> paycode;

    while (paycode != -1) {
        switch (paycode) {
        case 1:
            // Manager
            cout << "Enter weekly salary: ";
            cin >> weeklySalary;
            salary = weeklySalary;
            break;

        case 2:
            // Hourly worker
            cout << "Enter hours worked: ";
            cin >> hours;

            cout << "Enter hourly rate: ";
            cin >> hourlyRate;

            if (hours <= 40) {
                salary = hours * hourlyRate;
            }
            else {
                salary = 40 * hourlyRate
                    + (hours - 40) * hourlyRate * 1.5;
            }
            break;

        case 3:
            // Commission worker
            cout << "Enter gross weekly sales: ";
            cin >> sales;

            salary = 250 + sales * 0.057;
            break;

        case 4:
            // Pieceworker
            cout << "Enter pay per item: ";
            cin >> payPerItem;

            cout << "Enter number of items produced: ";
            cin >> items;

            salary = payPerItem * items;
            break;

        default:
            cout << "Invalid paycode." << endl;
            cout << "\nEnter paycode (1-4, -1 to end): ";
            cin >> paycode;
            continue;
        }

        cout << "Weekly pay is: $" << salary << endl;
        cout << endl;

        cout << "Enter paycode (1-4, -1 to end): ";
        cin >> paycode;
    }
	system("pause");
    return 0;
}