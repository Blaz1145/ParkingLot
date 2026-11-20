//
// Created by 42194 on 20. 11. 2026.
//

#include "../include/Car.h"

Car::Car(const std::string &name, const float &maxSpeed) : _name(name) , _maxSpeed(maxSpeed) {
    _wheels.emplace(WheelPosition::FRONT_LEFT , Wheel(2.4, 2.4));
    _wheels.emplace(WheelPosition::FRONT_RIGHT , Wheel(2.4, 2.4));
    _wheels.emplace(WheelPosition::BACK_LEFT , Wheel(2.1, 2.6));
    _wheels.emplace(WheelPosition::BACK_LEFT , Wheel(2.1, 2.5));
    /* Naplnenie mapy udajmi  //wheel ma automaticky konstruktor nemusime pisat explcitne*/
}

float Car::getMaxSpeed() const {
    return _maxSpeed;
}

const std::string Car::getName() const {
    return _name;
}

Wheel &Car::operator[](const WheelPosition &position) { //toto dostane na position = FRONT_LEFT a v mape to pouzije
    return _wheels[position];                           // ako vrati priamo ten najdeny objekt typu Wheel
}                                                       // a potom v main pomocou .postion prideme k tomu cislu

