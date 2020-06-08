//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_LEVEL_H
#define DEFENCE_GAME_LEVEL_H
#include"Troop.h"
#include"Map.h"
#include"Tower.h"
class level {
public:
    void start();
    void win();
    void lose();

private:
    int HP;
    Troop *monstertroop;
    Map map;
    int money;
    int round;
    int id;
    int code;
    Tower *towers;


};


#endif //DEFENCE_GAME_LEVEL_H
