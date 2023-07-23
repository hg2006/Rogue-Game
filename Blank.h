#ifndef _BLANK_H_
#define _BLANK_H_

#include "cc3klib.h"
#include "Cell.h"

class Blank: public Cell{

    Blank(){};
    ~Blank(){};
    char Render() const override;
    CellType GetType() const override;
};

#endif
