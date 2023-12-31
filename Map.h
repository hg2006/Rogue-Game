#ifndef _MAP_H_
#define _MAP_H_

#include "cc3klib.h"
#include "Cell.h"
#include "Room.h"
#include "Passage.h"
#include "Door.h"
#include "Blank.h"
#include "VerticalWall.h"
#include "HorizontalWall.h"
#include "Stair.h"
#include "BuffedPlayer.h"
#include "Player.h"
#include "Drow.h"
#include "Vampire.h"
#include "Troll.h"
#include "Goblin.h"
#include "Enemy.h"
#include "Human.h"
#include "Dwarf.h"
#include "Elf.h"
#include "Orcs.h"
#include "Halfling.h"
#include "Merchant.h"
#include "Dragon.h"

class Map{
public:
    std::vector < std::unique_ptr<Cell>> tiles;   // A vector of 1975 elements
    std::vector <std::unique_ptr<GameObject>> objects;
    BuffedPlayer *player;
    const int howmanyrow = 25;
    const int howmanycol = 79;
    
    Map(BuffedPlayer *p);
    ~Map();
    void InitializeMap();
    void RenderMap() const;
    void UpdateMap();
    BuffedPlayer *GetPlayer(){return player;}

    void InsertChamber(std::vector < std::vector <int> > &chambers, int index, MapItemType type);
    void InsertDragonHoard(std::vector < std::vector <int> > &chambers, int index);
    void InsertBoth(std::vector <int> &chamber, int row, int col);

    void genBoarderLine();
    void genBlankLine();
    void genChamber1(int choice = 0);
    void genGap1();
    void genChamber2(int choice = 0);
    void genChamber2Bottom();
    void genChamber3();
    void genGap2();
    void genGap3();
    void genChmWall(int offset = 0);
    void genChmWall2();
    void genChmWall3();
    void genChmWall4(int extend = 0);
    void genPassage1();
    void genPassage2(int choice = 0);
    void genChamber4(int choice = 0);
    void genChamber5(int choice = 0);
    void genPassage3 (int choice = 0);
    void genChamber5Bottom(int choice = 0);

public:
    friend struct Game;
    GameObject* GetObject(int row, int col) const;
    std::vector <CellType> GetViews(int row, int col) const;
    void GenerateObject(int row, int col, MapItemType type);
    void Attach(int row, int col, GameObject* obj); // attach a Gameobj to a specific cell
    void Detach(int row, int col);                  // detach a Gameobj from a specific cell 
    int index_convert(int row, int col) const;
};



#endif
