#include "Deadlies.hpp"

int main(void)
{
    Deadlies    deadlies;

    // test deck fill
    std::vector<int>    temp;

    deadlies.create_deck_minus_one_squid();

    temp = deadlies.get_deck();

    std::cout << "size = " << temp.size() <<std::endl;
    for(unsigned int i = 0; i < temp.size(); i++){
        std::cout << temp[i] << " ";
    }
    std::cout << std::endl;


    //test shuffle
    deadlies.shuffle();

    temp = deadlies.get_deck();

    for(unsigned int i = 0; i < temp.size(); i++){
        std::cout << temp[i] << " ";
    }
    std::cout << std::endl;
}
