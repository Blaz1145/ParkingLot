//
// Created by 42194 on 20. 11. 2026.
//
/*
 * SABLONOVA TRIEDA
 */
#ifndef PARKINGLOT_PARKINGLOT_H
#define PARKINGLOT_PARKINGLOT_H
#include <list>
#include <memory>

#include "Car.h"

template<typename T> //template a typename je to iste
class ParkingLot {
public:
    void parkACar(std::shared_ptr<T>car);
private:
    std::list<std::shared_ptr<T>> _cars;     //list je linearny zoznam //je privatny a cez funkciu by som sa k nemu dostal
};

template<typename T>
void ParkingLot<T>::parkACar(std::shared_ptr<T> car) {
    _cars.push_back(car); //push_back funkcia na ulozenie na konci linearneho listu
}


#endif //PARKINGLOT_PARKINGLOT_H