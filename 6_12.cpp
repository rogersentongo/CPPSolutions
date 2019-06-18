/*
 * Parking Charges: A parking garage charges a $2 minimum fee to park
 * for up to 3 hours. The garage charges an additional $0.50 per hour for each hour
 * or part therof in excess of the 3 hours. The max charge for 24hr
 * period is $10. Assume that no car parks for longer than 24 hours at a
 * time. Write a program that calculates and prints the parking charges
 * for each of three customers who parked their cars in this garage yesterday. You
 * should enter the hours parked for each customer. Your program should print the
 * results in a neat tabular format and should calculate and print the total of
 * yesterday's receipts. The program should use the function calculateCharges to
 * determine the charge for each customer.
 * By Roger Sentongo
 */



#include <iostream>
#include <string>
using namespace std;

double calculateCharges(double hours);

int main() {

    string cust_name;
    int cust_hours{0};
    double cost;

    //Loop to get customer information
    for(int i{0}; i<3; i++) {
        //Ask user to enter the name for each customer
        cout << "\nWhat is the customer name?" << endl;
        cin >> cust_name;
        cout << "\nWhat are the customer's parking hours" << endl;
        cin >> cust_hours;

        cost = calculateCharges(cust_hours);

        cout << cust_name<<"'s cost of "<<cust_hours<<" hours of parking is " << "$" << cost << endl;
    }

    //Ask user to enter hours for customer

    return 0;
}

double calculateCharges(double hours){
    double charges;

    if (hours <= 3){
        charges = 2;
    } else if (hours >= 24) {
        charges = 10;
    } else {
        charges = hours * 0.5;
    }

    return charges;

}