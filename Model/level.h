//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_LEVEL_H
#define DEFENCE_GAME_LEVEL_H
#include"Troop.h"
#include"Map.h"
#include"Tower.h"
class Tower;
class level{
public:
    void start();
    void win();
    void lose();
    int getHP(){return HP;}
    Troop* getTroop(){return monstertroop;}
    Map* getMap(){return &map;}
    int getMoney(){return money;}
    int getRound(){return round;}
    int getID(){return id;}
    int getCode(){return code;}
    Tower* getTower(){return towers;}
    void setHP(int val){HP = val;}
    void setMoney(int val){money = val;}
    level* getLevel(){
        static level Level;
        return &Level;
    }

private:
    level (){}
    level(const level&) = delete;
    level& operator =(const level &) = delete;
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
