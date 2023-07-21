#ifndef _CC3KLIB_H_
#define _CC3KLIB_H_

#include <iostream>
#include <sstream>
#include <utility>
#include <fstream>
#include <string>
#include <stdexcept>
#include <map>
#include <vector>
#include <compare>
#include <memory>

using namespace std;

class Game;
class GameObject;
class Map;
class Cell;

enum MapItemType{HUMAN, DWARF, ELF, MERCHANT,HALFLING,
ORCS, DRAGON, SMALLGOLD, NORMALGOLD, MERCHANTHOARD, DRAGONHOARD,
BA, BD, WA, WD, RH, PH};

enum CellType{OBSTACLE, ROOM, PASSAGE, DOOR, STAIR, ENEMY, PLAYER, ITEM};

enum PotionType{PBA, PBD, PWA, PWD, PRH, PPH};


#endif
