#include <iostream>
using namespace std;

int main() {
    int choice;
    float speed, distance, time;

    cout << "Physics Calculator\n";
    cout << "1. Calculate Speed\n";
    cout << "2. Calculate Distance\n";
    cout << "3. Calculate Time\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter distance (m) and time (s): ";
        cin >> distance >> time;

        if (time != 0) {
            speed = distance / time;
            cout << "The speed is: " << speed << " m/s";
        } else {
            cout << "Error: Time cannot be zero!";
        }
    }
    else if (choice == 2) {
        cout << "Enter speed (m/s) and time (s): ";
        cin >> speed >> time;

        distance = speed * time;
        cout << "The distance is: " << distance << " meters";
    }
    else if (choice == 3) {
        cout << "Enter distance (m) and speed (m/s): ";
        cin >> distance >> speed;

        if (speed != 0) {
            time = distance / speed;
            cout << "The time is: " << time << " seconds";
        } else {
            cout << "Error: Speed cannot be zero!";
        }
    }
    else {
        cout << "Invalid choice.";
    }

    return 0;
}