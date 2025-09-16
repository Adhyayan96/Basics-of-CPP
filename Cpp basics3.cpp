#include <bits/stdc++.h>
using namespace std;

int main() {
    // Take an integer input from user & print it
    int a;
    cin >> a;
    cout << a << "\n";
    // Learning how to take a long line to print as output
    string str;
    getline(cin >> ws, str); // ws use ">> ws" for skipping all leading whitespace (spaces, tabs, new lines - that is generateed in last output) before continuing. Otherwise if it were first line we just would have written ; "getline(cin,variable-namee);".
    cout << str << "\n";
    // String getline practice
    string Eddy;
    getline(cin >> ws, Eddy);
    cout << Eddy << "\n";
    // Write a program to print you are an adult or not
    int age;
    cin >> age;
    if(age>=18) {
        cout << "You are an adult!" << "\n";
    }
    else {
        cout << "You are not an adult!" << "\n";
    }
    // Practice if else : Grade system by using marks for a school
    int mark;
    cin >> mark;
    if(mark>=80 && mark<=100){
        cout << "Your grade is: A" << "\n";
    }
    else if(mark>=60 && mark<=80){
        cout << "Your grade is: B" << "\n";
    }
    else if(mark>=30 && mark<=60){
        cout << "Your grade is: C" << "\n";
    }
    else if(mark>=0 && mark<=30){
        cout << "Your grade is: D" << "\n";
    }
    // Nested if else
    if(age<=25) {
        cout << "You can get a job" << "\n";
    }
    else if(age<=50) {
        cout << "You wil eligible for job" << "\n";
    }
    else if(age<=60) {
        cout << "You are eligible for job";
        if(age>55) {
            cout << " , but you are gonna retire soon.";
            cout << "\n";
        }
    }
    // Switch Statement
    int day;
    cout << "print any number between 1 to 7, to check the day" << "\n";
    cin >> day;
    switch(day) {
        case 1:
        cout << "Monday";
        break; // break is used for leaving the left cases, after exceuting neededo
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "Wednesday";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday";
        break;
    }
    if(day>7) {
        cout << "Invalid check" << "\n";
    }
    else {
        cout << " check" << "\n";
    }
return 0;
}