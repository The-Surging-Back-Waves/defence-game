//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_TROOP_H
#define DEFENCE_GAME_TROOP_H
#include"Monster.h"

class Troop {
    static int geneId(){static int ID = 0;ID++;return ID;}
public:
    Troop():id(geneId()){}
    int getTime(){return time;}
    int getId(){return id;}

private:
    Monster *monster;
    int *apperance;
    int time;
    int id;

};


#endif //DEFENCE_GAME_TROOP_H
