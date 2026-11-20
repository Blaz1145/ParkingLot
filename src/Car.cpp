//
// Created by 42194 on 20. 11. 2026.
//

#include "../include/Car.h"

Car::Car(const std::string &name, const float &maxSpeed) : _name(name) , _maxSpeed(maxSpeed) {

}

float Car::getMaxSpeed() const {
    return _maxSpeed;
}

const std::string Car::getName() const {
    return _name;
}

