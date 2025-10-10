#include "Matematica.h"

    Matematica::Matematica():my_value(0) {}

    Matematica& Matematica::add(int value) {
        this->my_value += value;
        return *this;
    }
    Matematica& Matematica::sub(int value) {
        this->my_value -= value;
        return *this;
    }
    Matematica& Matematica::mult(int value) {
        this->my_value *= value;
        return *this;
    }
    int Matematica::getValue() const {
        return my_value;
    }