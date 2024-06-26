#include <iostream>
#include <string>
#include <vector>
#include "Birds.h"
using namespace std;
int main()
{
    BirdManager manager;
    int choice;

    while (true) {
        cout << "1. Add Parrot" << endl;
        cout << "2. Add Eagle" << endl;
        cout << "3. Add Penguin" << endl;
        cout << "4. Add Owl" << endl;
        cout << "5. Add Swan" << endl;
        cout << "6. Display All Birds" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string name, food;
            double wingSpan;
            cout << "Enter parrot name: ";
            cin >> name;
            cout << "Enter parrot wing span (cm): ";
            cin >> wingSpan;
            cout << "Enter parrot food: ";
            cin >> food;
            manager.addBird(new Parrot(name, wingSpan, food));
        }
        else if (choice == 2) {
            string name, food;
            double wingSpan;
            cout << "Enter eagle name: ";
            cin >> name;
            cout << "Enter eagle wing span (cm): ";
            cin >> wingSpan;
            cout << "Enter eagle food: ";
            cin >> food;
            manager.addBird(new Eagle(name, wingSpan, food));
        }
        else if (choice == 3) {
            string name, food;
            double wingSpan;
            cout << "Enter penguin name: ";
            cin >> name;
            cout << "Enter penguin wing span (cm): ";
            cin >> wingSpan;
            cout << "Enter penguin food: ";
            cin >> food;

            manager.addBird(new Penguin(name, wingSpan, food));

        }
        else if (choice == 4) {
            string name, food;
            double wingSpan;
            cout << "Enter owl name: ";
            cin >> name;
            cout << "Enter owl wing span (cm): ";
            cin >> wingSpan;
            cout << "Enter owl food: ";
            cin >> food;

            manager.addBird(new Owl(name, wingSpan, food));

        }
        else if (choice == 5) {
            string name, food;
            double wingSpan;
            cout << "Enter swan name: ";
            cin >> name;
            cout << "Enter swan wing span (cm): ";
            cin >> wingSpan;
            cout << "Enter swan food: ";
            cin >> food;

            manager.addBird(new Swan(name, wingSpan, food));

        }
        else if (choice == 6) {
            manager.displayAllBirds();

        }
        else if (choice == 7) {
            break;

        }
        else {
            cout << "Incorrect choice. Please try again." << endl;
        }
    }

   
}