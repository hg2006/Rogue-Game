#ifndef _CELL_H_
#define _CELL_H_

#include "cc3klib.h"

class Cell{
    GameObject* obj;
protected:

    friend class Map;

    Cell();   // defaulted to be nullptr
    virtual char Render() const = 0;
    char Render1();
    virtual CellType GetType() const = 0;
    GameObject* GetObject() const;
    void SetObject(GameObject* obj);
    void Attach(GameObject* obj);
    void Detach();
public:
    virtual ~Cell();
};

#endif
