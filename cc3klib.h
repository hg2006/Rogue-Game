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
#include <ctime>
#include <algorithm>
#include <random>
#include <memory>



class Game;
class GameObject;
class Map;
class Cell;


enum MapItemType{HUMAN, DWARF, ELF, MERCHANT, HALFLING,
ORCS, DRAGON, SMALLGOLD, NORMALGOLD, MERCHANTHOARD, DRAGONHOARD,
BA, BD, WA, WD, RH, PH, ASTAIR, SHADE, DROW, VAMPIRE, TROLL,
GOBLIN};

enum CellType{OBSTACLE, ROOM, PASSAGE, DOOR, STAIR, ENEMY, PLAYER, POTION, TREASURE};

enum PotionType{PBA, PBD, PWA, PWD, PRH, PPH};


#endif
