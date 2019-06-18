/*
 * Write a program that uses a for statement to sum
 * a sequence of integers. Assume that first integer read
 * specifies the number of values remaining to be entered.
 * Your program should read only one value per input
 * statement. A typical input sequence might be
 *  5 100 200 300 400 500. By Roger Sentongo
 */



#include <iostream>
using namespace std;

int main() {

    //Variables
    int num{0}, digit{0}, total{0};

    // Ask user for number of values to be summed
    cout << "Please enter the number of values to be summed: "<< endl;
    cin >> num;

    //Use for loop to sum integers as user enters them
    for(int i=1; i<=num; i++){
        cout << "Enter the digit until until you see result: " << endl;
        cin >> digit;

        total +=digit;
    }

    cout << "Hi! your total is "<< total << "."<< endl;
}