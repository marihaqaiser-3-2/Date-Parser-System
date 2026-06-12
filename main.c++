#include <iostream>
#include <cstdio> // Necessary header for using the scanf function
using namespace std;

// Struct to aggregate components of a calendar date
struct inputDate {
    int day;
    int month;
    int year;
};

int main() {
    inputDate d1;

    cout << "Enter Date (DD/MM/YYYY): ";
    
    // Using formatted input to automatically extract values separated by slashes
    scanf("%d/%d/%d", &d1.day, &d1.month, &d1.year);

    // Displaying the parsed struct members
    cout << "Day: " << d1.day << endl;
    cout << "Month: " << d1.month << endl;
    cout << "Year: " << d1.year << endl;

    return 0;
}
