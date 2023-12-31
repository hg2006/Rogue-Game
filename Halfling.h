#ifndef _HALFLING_H_
#define _HALFLING_H_

#include "Enemy.h"
#include "cc3klib.h"

class Halfling : public Enemy {
public:
    Halfling(int row, int col, Map *map, MapItemType type = HALFLING, int currentHP = 100, int maxHP = 100, int atk = 15, int def = 20);
    ~Halfling();
    void attacked(const int damage) override;
};

#endif
