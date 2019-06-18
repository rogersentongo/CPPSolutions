/*
 * Calculating Total Sales: A mail order house sells five different products
 * retail prices are: 1-$2.98 2-$4.50 3- $9.98, 4- $4.49
 * 5-$6.87. Write a program that reads a series of pairs of numbers as follows:
 * a.) product number
 * b.) quantity sold
 * Your program should use a switch to det. the retail price for each product.
 * It should calculate and display the total retail value of all
 * products sold. Use a sentinel controlled loop to determine when the program
 * should stop looping and display the final result.
 * By Roger Sentongo
 *
 */





#include <iostream>
using namespace std;

//Function prototype to compute total cost ot product
int total_cost(int prod_no, int quantity);

int main() {

    //Initializes variables
    double total_price{0};
    double total_price_for_all{0};
    int prod_no{0};
    int quantity{0};
    char response;

    cout << "Would you like to buy some products?: "<< endl;
    cin >> response;

    if (response != 'y' && response != 'Y')
        cout << "Thank you, program will terminate now";

    //Reads input from user. Product no. and quantity
    while(response == 'y' || response == 'Y') {
        cout << "Input product no.: " << endl;
        cin >> prod_no;

        cout << "Input quantity you want to buy: " << endl;
        cin >> quantity;

        total_price += total_cost(prod_no, quantity);
        cout << "Total price is now " << total_price<< endl;

        cout << "Input any other character besides Y or y to see results!"<< endl;
        cin >> response;
    }




}

int total_cost(int prod_no, int quantity){


    switch(prod_no){
        case 1:
            return 2.98 * quantity;
            break;
        case 2:
            return 4.50 * quantity;
            break;
        case 3:
            return 9.98 * quantity;
            break;
        case 4:
            return 4.49 * quantity;
            break;
        case 5:
            return 6.87 * quantity;
            break;
        default:
            cout << "Please input correct number!"<<endl;
            return 0;

    }


}