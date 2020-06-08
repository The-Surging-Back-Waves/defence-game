//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_MAPELEMENT_H
#define DEFENCE_GAME_MAPELEMENT_H
#include "Position.h"

class MapElement {
    static int geneId(){static int id = 0;id++;return id;}
public:
    //constructor
    MapElement():
        id(geneId())
    {

    }

    MapElement(int value):
        id(geneId()),value(value)
    {

    }
    //getters
    Position& getPos(){return pos;}
    int getid(){return id;}
    int getDepth(){return depth;}
    int getValue(){return value;}

    //setters
    void setDepth(int k){depth = k;}
    void setValue(int k){value = k;}
private:
    Position pos;
    int id;
    int depth;
    int value;
};


#endif //DEFENCE_GAME_MAPELEMENT_H
