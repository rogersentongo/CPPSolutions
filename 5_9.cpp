/*
 * Product of Odd Integers: Write a program that uses a for statement to calculate
 * and print the product of the odd integers from 1 to 15. By Roger Sentongo
 */


#include <iostream>
using namespace std;


int main() {

    int odd{1}, product{1};

    //There are 7 odd integers between 1 and 15
    for(int i{1}; i <=7; ++i){
        odd = (2*i)+1;
        cout << odd<< endl;
        product *=odd;
    }

    cout << "The product of odd integers from 1 to 15 is "<< product<<endl;
    return 0;
}