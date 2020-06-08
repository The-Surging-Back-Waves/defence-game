//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_MONSTER_H
#define DEFENCE_GAME_MONSTER_H
#include "Position.h"

class Monster {
    static int geneId(){static int id = 0;id++;return id;}
public:
    //constructor
    Monster():
        id(geneId())
    {}

    //getters
    int getHP(){return HP;}
    int getSpeed(){return speed;}
    int getMoney(){return money;}
    Position& getPos(){return pos;}
    int getId(){return id;}
    int getDamage(){return damage;}

    //setters
    void setHP(int k){HP = k;}
    void setSpeed(int k){speed = k;}
    void setMoney(int k){money = k;}
    void setDamage(int k){damage = k;}
    void setPosition(int x,int y){pos = Position(x,y);}
private:
    int HP;
    int speed;
    int money;
    int damage;
    const int id;
    Position pos;
};


#endif //DEFENCE_GAME_MONSTER_H
