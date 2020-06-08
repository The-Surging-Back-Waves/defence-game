//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_BULLET_H
#define DEFENCE_GAME_BULLET_H
#include"Position.h"

class Bullet {
    static int geneId(){static int ID = 0;ID++;return ID;}

public:
    Bullet():id(geneId()){}

    virtual void move(){}
    virtual void attack(){}

    int getId(){return id;}
    int getDamage(){return damage;}
    int getSpeed(){return speed;}
    Position getPos(){return pos;}

    void setPos(int x,int y){pos = Position(x,y);}
    void setDamage(int val){damage = val;}
    void setSpeed(int val){speed = val;}


private:
    Position pos;
    int id;
    int damage;
    int speed;

};


#endif //DEFENCE_GAME_BULLET_H
