#ifndef _ROOM_H_
#define _ROOM_H_

#include "cc3klib.h"
#include "Cell.h"
#include "GameObject.h"

class Room: public Cell{
public:
    Room(){}
    ~Room(){}
    char Render() const override;
    CellType GetType() const override;
};

#endif
