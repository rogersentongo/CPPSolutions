/*Read Question 8.8 from Text
 * By Roger Sentongo May 25th 2019 at Bklyn Blend
 */


#include <iostream>
#include <iomanip>

int main() {

    const int SIZE = 5;

    //a.)
    unsigned int values[SIZE]{2,4,6,8,10};

    //b.)
    unsigned int *vptr;

    //c.)
    for (int i{0}; i < SIZE; i++)
        std::cout << values[i] << std::endl;

    //d.)
    vptr = values;
    vptr = &values[0];

    //e.)
    for(int i{0}; i< SIZE; i++)
        std::cout << std::setw(4)<< *(vptr+i) << std::endl;

    //f.)
    for(int i{0}; i<SIZE; i++)
        std::cout << *(values+i) << std::endl;

    //g.)
    for(int i{0}; i <SIZE; i++)
        std::cout << vptr[i] << std::endl;

    //h.)
    std::cout << values[4]<< std::endl;
    std::cout << *(values+4)<<std::endl;

    std::cout << vptr[4] <<std::endl;
    std::cout << *(vptr+4) <<std::endl;

    //i.)
    std::cout << vptr + 3 << std::endl;
    std::cout << *(vptr+3) << std::endl;

    //j.)
    std::cout << vptr + 4 << std::endl;
    std::cout << *(vptr +4) << std:: endl;





    return 0;
}