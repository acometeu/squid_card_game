#include "Deadlies.hpp"

Deadlies::Deadlies(void){
    
    return;
}

Deadlies::~Deadlies(void){

    return;
}

void    Deadlies::create_deck_minus_one_squid(void){

    _deck.clear();

    for (int i = 0; i < 6; i++){
        _deck.push_back(squid);
    }
    
    for (int i = 1; i < 7; i++){

        for (int j = 0; j < 7; j++){
            _deck.push_back(i);
        }
    }
    
    _deck.push_back(sheep);
    _deck.push_back(joker);
}

void    Deadlies::shuffle(void){

    std::random_device  rd;                 //seed
    std::mt19937        rng(rd());          //pseudo-random number generator


    //Fisher Yates algorithm
    int random;
    int temp;

    for (int i = _deck.size() - 1; i > 0; i--){
        std::uniform_int_distribution<std::mt19937::result_type>    dist(0, i);           //equal distribution in specific range

        random = dist(rng);
        
        if (random == i)
            continue;

        temp = _deck[i];
        _deck[i] = _deck[random];
        _deck[random] = temp;
    }
}

void    Deadlies::squid_algo(void){
    
}

std::vector<int>    Deadlies::get_deck(void) const{

    return (_deck);
}