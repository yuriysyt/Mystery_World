#include "Number.h"

Number::Number(int r, int c) : _row(r), _col(c) {}

int Number::getRow() const {
    return _row;
}

int Number::getCol() const {
    return _col;
}