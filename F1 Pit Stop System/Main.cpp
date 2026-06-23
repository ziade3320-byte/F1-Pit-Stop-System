#include <iostream>
#include <string>
#include "Queue.h"

using namespace std;
int main() {

    Queue q;
    int choice;

    do {

        cout << "\n========== F1 Pit Stop Queue ==========\n";
        cout << "1. Add Car\n";
        cout << "2. Service Next Car\n";
        cout << "3. Show Next Car\n";
        cout << "4. Display Queue\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
        {
            string driverName, team, serviceType;
            int lapNumber;

            cout << "Enter Driver Name: ";
            cin.ignore();
            getline(cin, driverName);

            cout << "Enter Team: ";
            getline(cin, team);

            cout << "Enter Lap Number: ";
            cin >> lapNumber;

            cin.ignore();

            cout << "Enter Service Type: ";
            getline(cin, serviceType);

            Car car(driverName, team, lapNumber, serviceType);

            q.enqueue(car);

            cout << "\nCar Added Successfully!\n";
            break;
        }

        case 2:
        {
            q.dequeue();
            cout << "\nNext Car Serviced!\n";
            break;
        }

        case 3:
        {
            q.peek();
            break;
        }

        case 4:
        {
            q.display();
            break;
        }

        case 5:
        {
            cout << "\nExiting Program...\n";
            break;
        }

        default:
        {
            cout << "\nInvalid Choice!\n";
        }

        }

    } while (choice != 5);

    return 0;
}