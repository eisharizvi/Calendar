# Calendar Generation Program

This program generates monthly or yearly calendars based on user-specified years. It utilizes Wang's algorithm to dynamically determine the first day of each month, providing adaptability for different years.

## Usage

To run the program, follow these steps:

1. **Compile the code:** Use a C++ compiler to compile the `calendar.cpp` file. For example, using `g++`: g++ calendar.cpp -o calendar
2. **Run the program:** Execute the compiled binary file along with the desired command-line arguments.

## Explanation

Wang's algorithm is employed to calculate the first day of each month for a given year. This algorithm is efficient and provides accurate results without relying on predefined tables. The program utilizes this algorithm to determine the starting day for each month, allowing for the generation of calendars for any year.

## Requirements

- C++ compiler (e.g., g++)
- Terminal or command-line interface

## About Wang's Algorithm

Wang's algorithm, also known as the Zeller's Congruence algorithm, is an algorithm used to calculate the day of the week for any given date. It takes into account the year, month, and day to determine the corresponding weekday. By employing this algorithm, the program dynamically determines the first day of each month, enabling the generation of accurate calendars for any year.

For more information about Wang's algorithm, refer to its documentation or related literature.
