#include "Map.h"

int main(){
    BuffedPlayer *player = new BuffedPlayer{};
    Map* map = new Map{player};
    map->t();
    map->RenderMap();
}
