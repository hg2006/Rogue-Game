#ifndef _STAIR_H_
#define _STAIR_H_

#include "cc3klib.h"
#include "Cell.h"

class Stair: public Cell{
public:
    Stair(){};
    ~Stair(){};
    char Render() const override;
    CellType GetType() const override;
};

#endif
