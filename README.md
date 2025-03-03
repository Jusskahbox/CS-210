Chada Tech Clock Program
Author: Jessica Livingston
Date: February 3, 2025

Project Overview
  The Chada Tech Clock Program is a C++ application that displays both a 12-hour and 24-hour clock on the screen. The user can interact with the program to adjust the time using a menu-driven interface. The available options include:

Add an hour
Add a minute
Add a second
Exit the program
  This project demonstrates fundamental object-oriented programming (OOP) principles in C++, including class design, encapsulation, and modular functions for handling clock operations.

Key Features
    -Displays time in both 12-hour and 24-hour formats.
    -Allows user interaction through a menu-driven system.
    -Implements modular functions for adding hours, minutes, and seconds.
    -Uses formatted output with iomanip to maintain a clean and readable display.
What I Did Well
One of the strong points of this project is:

  Structured OOP Design: The Clock class is well-structured, encapsulating time attributes (hours, minutes, seconds) and providing dedicated functions to manipulate them.
User-Friendly Display: The formatted output ensures that the clock is neatly presented and easy to read.
Efficient Time Adjustments: The program correctly handles rollover for hours, minutes, and seconds (e.g., adding a minute at 59 resets it to 00 and increments the hour).
Areas for Improvement:

Improved Input Handling: Currently, the program does not allow the user to manually set an initial time; adding this feature would make it more flexible.

Better User Interface: A more interactive text-based interface or even a simple GUI could enhance user experience.
Efficiency Optimization: Instead of separate AddHour(), AddMinute(), and AddSecond() functions, I could combine them into a more generalized time manipulation function.

Challenges Faced & How I Overcame Them
The most challenging aspect of this project was ensuring time rollover logic worked correctly. Initially, when adding seconds, the program did not correctly carry over to minutes and hours. 

I resolved this by:
    -Using modulo operations (%) to reset values when they reached their limits.
    -Implementing conditional checks to ensure proper cascading of time increments.
    -Testing with multiple edge cases (e.g., 23:59:59 to 00:00:00).
    
Transferable Skills
This project helped me develop skills that I can apply in future programming tasks:

Object-Oriented Programming (OOP):
    -Designing reusable classes and functions.
    -Working with Time and Modulo Operations: Essential for handling time-based logic in various applications.
    -Debugging and Testing Edge Cases: Ensuring program stability by testing boundary conditions.
    -Making the Program Maintainable & Readable
    
To ensure long-term maintainability:
    -The code follows clear naming conventions.
    -Functions are modularized for reusability.
    -Inline comments and a structured format make it easy to understand.
    
Conclusion
  The Chada Tech Clock Program is a well-structured C++ project demonstrating my ability to write clean, modular, and functional code. Future improvements could involve GUI implementation and additional user options. This project will serve as a strong portfolio piece showcasing my proficiency in C++ programming.# CS-210
