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
#include "include/pparking_lot_error.h"

template<typename T, int size = 5> //template a typename je to iste
class ParkingLot {
public:
    void parkACar(std::shared_ptr<T>car);
private:
    std::list<std::shared_ptr<T>> _cars;     //list je linearny zoznam //je privatny a cez funkciu by som sa k nemu dostal
};


template<typename T, int size>
void ParkingLot<T , size>::parkACar(std::shared_ptr<T> car) {
    for (const auto& car: _cars) {
        std::cout << "Chyba " << e.what() << std::endl;
    }

}


#endif //PARKINGLOT_PARKINGLOT_H