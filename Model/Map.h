//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_MAP_H
#define DEFENCE_GAME_MAP_H
#include"MapElement.h"
class Map {
    static int geneId(){static int id = 0;id++;return id;}
public:
    Map():id(geneId()){}

    int getHeight(){return height;}
    int getWidth(){return width;}

    void setHeight(int val){height = val;}
    void setWidth(int val){width = val;}

private:
    int height;
    int width;
    MapElement *elements;
    int id;

};


#endif //DEFENCE_GAME_MAP_H
