#pragma once

class Number {
private:
    int _row, _col;

public:
    Number(int r, int c);

    int getRow() const;
    int getCol() const;
};