//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_MAP_H
#define DEFENCE_GAME_MAP_H
#include"MapElement.h"
#include "vector"
class Map {
    static int geneId(){static int id = 0;id++;return id;}
public:
    Map():id(geneId()){}

    int getHeight(){return height;}
    int getWidth(){return width;}
    MapElement getMapelement(int x,int y){return element[x][y];}
    MapElement getMapelement(Position position){return element[position.getX()][position.getY()];}

    void setHeight(int val){height = val;}
    void setWidth(int val){width = val;}

private:
    int height;
    int width;
    std::vector< std::vector<MapElement> > element;
    int id;

};


#endif //DEFENCE_GAME_MAP_H
