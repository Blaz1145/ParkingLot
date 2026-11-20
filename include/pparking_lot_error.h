//
// Created by 42194 on 20. 11. 2026.
//

#ifndef PARKINGLOT_PPARKINGLOT_ERROR_H
#define PARKINGLOT_PPARKINGLOT_ERROR_H
#include <stdexcept>

class pparking_lot_error : std::range_error {
public:
    explicit pparking_lot_error(const std::string &msg): std::range_error(msg){}
};

#endif //PARKINGLOT_PPARKINGLOT_ERROR_H