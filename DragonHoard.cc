
#include "DragonHoard.h"
#include "cc3klib.h"

DragonHoard::DragonHoard(int row, int col, Map *map) :
    Treasure{row, col, map} {}

DragonHoard::~DragonHoard() {}

MapItemType DragonHoard::Consume() {
    detach();
    return DRAGONHOARD;
}

DragonHoard::getPickable() {
    return pickable;
}

DragonHoard::setPickable(bool pick) {
    pickable = pick;
}
