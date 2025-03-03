/*
========================================================
Chada Tech Clock Program
Author: Jessica Livingston
Date: February 3, 2025
Description:
   This program displays both a 12-hour and a 24-hour clock
   simultaneously and allows user interaction to adjust the time.
   The user can:
   - Add an hour
   - Add a minute
   - Add a second
   - Exit the program
========================================================
*/

#include <iostream>
#include <iomanip>

using namespace std;    

// Clock class definition
class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize the clock
    Clock(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to add an hour
    void AddHour() {
        hours = (hours + 1) % 24;
    }

    // Function to add a minute
    void AddMinute() {
        minutes = (minutes + 1) % 60;
        if (minutes == 0) {
            AddHour();
        }
    }

    // Function to add a second
    void AddSecond() {
        seconds = (seconds + 1) % 60;
        if (seconds == 0) {
            AddMinute();
        }
    }

    // Function to display the time in both 12-hour and 24-hour format
    void DisplayTime() {
        // Display 24-hour format
        cout << "**************************" << endl;
        cout << "*      24-Hour Clock     *" << endl;
        cout << "*      " << setw(2) << setfill('0') << hours << ":"
            << setw(2) << setfill('0') << minutes << ":"
            << setw(2) << setfill('0') << seconds << "       *" << endl;
        cout << "**************************" << endl;

        // Convert to 12-hour format
        int displayHour = hours % 12;
        if (displayHour == 0) displayHour = 12; // Midnight and Noon case
        string period = (hours >= 12) ? "PM" : "AM";

        // Display 12-hour format
        cout << "**************************" << endl;
        cout << "*      12-Hour Clock     *" << endl;
        cout << "*      " << setw(2) << setfill('0') << displayHour << ":"
            << setw(2) << setfill('0') << minutes << ":"
            << setw(2) << setfill('0') << seconds << " " << period << "   *" << endl;
        cout << "**************************" << endl;
    }
};

// Function to display the menu
void DisplayMenu() {
    cout << "\n********* Menu *********" << endl;
    cout << "1 - Add One Hour" << endl;
    cout << "2 - Add One Minute" << endl;
    cout << "3 - Add One Second" << endl;
    cout << "4 - Exit" << endl;
    cout << "Enter your choice: ";
}

// Main function with minimal code
int main() {
    Clock myClock(12, 0, 0); // Initialize clock with default time

    bool running = true;
    while (running) {
        myClock.DisplayTime();  // Show current time
        DisplayMenu();          // Show menu

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            myClock.AddHour();
            break;
        case 2:
            myClock.AddMinute();
            break;
        case 3:
            myClock.AddSecond();
            break;
        case 4:
            running = false;  // Exit loop
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    }

    cout << "Exiting program. Goodbye!" << endl;
    return 0;
}
