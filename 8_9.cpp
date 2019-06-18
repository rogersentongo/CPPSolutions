/*
 * By Roger Sentongo 2019. Read Question 8.9 from Text
 */

#include <iostream>
#include <iomanip>



int main() {

    long value1, value2;

    value1 = 200000;





    //a.)
    long int *longPtr;

    //b.)
    longPtr = &value1;

    //c.)
    std::cout << *longPtr<<std::endl;

    //d.)
    value2 = *longPtr;

    //e.)
    std::cout << value2 << std::endl;

    //f.)
    std::cout << value1 << std::endl;

    //g.)
    std::cout << longPtr << std::endl;
    std::cout << &value1 << std::endl;






    return 0;
}