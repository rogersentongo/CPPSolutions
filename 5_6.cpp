/*
 * Write a program that uses a for statement to write the smallest
 * of several integers. Assume the first value read specifies the number of values
 * remaining. By Roger Sentongo
 */


#include <iostream>
using namespace std;

int main() {

    //Variables
    int numbers{0}, smallest, init;

    cout << "Enter numbers to be evaluated. First number determines the no. of inputs: ";
    cin >> numbers;
    init = numbers;
    smallest = numbers;

    for(int i{0}; i <=init; i++){
        cout << "Continue entering numbers until you see result:"<<endl;
        cin >> numbers;
        if (numbers < smallest){
            smallest = numbers;
        }
    }

    cout << "The smallest integer of the " << (init+1) << " that you entered is " << smallest<< endl;


    return 0;
}