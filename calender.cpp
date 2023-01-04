#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void printMonthName (int nameN){
    if (nameN == 1){
        cout << "JANUARY";
    }
    else if (nameN == 2){
        cout << "FEBRUARY";
    }
    else if (nameN == 3){
        cout << "MARCH";
    }
    else if (nameN == 4){
        cout << "APRIL";
    }
    else if (nameN == 5){
        cout << "MAY";
    }
    else if (nameN == 6){
        cout << "JUNE";
    }
    else if (nameN == 7){
        cout << "JULY";
    }
    else if (nameN == 8){
        cout << "AUGUST";
    }
    else if (nameN == 9){
        cout << "SEPTEMBER";
    }
    else if (nameN == 10){
        cout << "OCTOBER";
    }
    else if (nameN == 11){
        cout << "NOVEMBER";
    }
    else if (nameN == 12){
        cout << "DECEMBER";
    }
}

bool isLeap (int year){
    if ((year % 4) == 0 && (year % 100) != 0){
        return true;
    }
    else if ((year % 4) == 0 && (year % 100) == 0 && (year % 400) == 0){
        return true;
    }
    else {
        return false;
    }
}

int daysInMonth (int nameN, int year){
    int days;
    if (nameN == 1 || nameN == 3 || nameN == 5 || nameN == 7 || nameN == 8 || nameN == 10 || nameN == 12){
        days = 31;
    }
    else if (nameN == 2){
        if (isLeap (year) == true){
            days = 29;
        }
        else{
            days = 28;
        }
    }
    else {
        days = 30;
    }
    return days; 
}

int convert (int nameN){
    int month;
    if (nameN == 3){
        month = 1;
    }
    else if (nameN == 4){
        month = 2;
    }
    else if (nameN == 5){
        month = 3;
    }
    else if (nameN == 6){
        month = 4;
    }
    else if (nameN == 7){
        month = 5;
    }
    else if (nameN == 8){
        month = 6;
    }
    else if (nameN == 9){
        month = 7;
    }
    else if (nameN == 10){
        month = 8;
    }
    else if (nameN == 11){
        month = 9;
    }
    else if (nameN == 12){
        month = 10;
    }
    else if (nameN == 1){
        month = 11;
    }
    else if (nameN == 2){
        month = 12;
    }
    return month;
}

int firstDay (int nameN, int year){
    int fDay;
    int month;
    month = convert(nameN);
    if (month == 11 || month == 12){
        fDay = (int(1 + (floor ((2.6*month)-0.2)) - (2*(int(year/100))) + ((year%100)-1) + (floor(((year%100)-1)/4)) + (floor((int(year/100))/4))) % 7);
    }
    else{
        fDay = (int(1 + (floor ((2.6*month)-0.2)) - (2*(int(year/100))) + (year%100) + (floor((year%100)/4)) + (floor((int(year/100))/4))) % 7);
    }
    if (fDay < 0){
        fDay = 7+fDay;
    }
    return fDay;
}

void printMonth (int nameN, int year){
    printMonthName(nameN);
    cout << " " << year << endl;
    int fday = firstDay(nameN, year);
    int mDays = daysInMonth(nameN, year);
    int weekD = 1;
    cout << " S  M Tu  W Th  F  S" << endl;
    for (int i = 0; i<6; i++){
        for (int j = 0; j<7; j++){
            if (i==0 && j<fday){
                cout << "   ";
            }
            else{
                if (weekD >=10){
                    cout << weekD << " ";
                }
                else{
                    cout << " " << weekD << " ";
                }
                weekD++;
                if (weekD > mDays){
                    break;
                }
            }
        }
        cout << endl;
        if (weekD > mDays){
            break;
        }
    }
    
}

void printYear (int year){
    for (int i=1; i<=12; i++){
        cout << endl;
        printMonth(i, year);
        cout << endl;
    }
}

int main(){
    string choice;
    char again;
    int year; 
    int nameN;
    do{
        cout << endl;
        cout << endl;
        cout << "Do you want a month(M) or year(Y) calendar: ";
        cin >> choice;

        if (choice == "Y"){
            cout << endl;
            cout << "Which year: ";
            cin >> year;
            printYear(year);
            cout << endl;
        }
        else if (choice == "M"){
            cout << endl;
            cout << "Which year: ";
            cin >> year;
            cout << endl;
            cout << "Which month (1-12): ";
            cin >> nameN;
            cout << endl;
            printMonth(nameN, year);
            cout << endl;
        }
        else {
            cout << endl;
            cout << "Invalid choice. Would you like to try again? (Y/N): ";
            cin >> again; 
        }
    }while (again=='Y');
    return 0;
    
}