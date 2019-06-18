/*
 * Write a program that uses a for statement to calculate the factorials
 * of integers from 1 to 5. By Roger Sentongo
 */

#include <iostream>
using namespace std;

int main() {

    int num{0}; // stores integer to be factorialized
    int factorial{1}; //stores factorial output

    for(int i{1}; i <=5; ++i){
        num = i;


        for (int j{1}; j<=i; j++){
            factorial *= j;
        }

        cout << "The factorial of "<<i<<" is " <<factorial<<endl;
        //reset factorial back to 1
        factorial = 1;
    }

    return 0;
}