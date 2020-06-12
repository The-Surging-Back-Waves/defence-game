//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_BULLET_H
#define DEFENCE_GAME_BULLET_H
#include"Position.h"
#include "Monster.h"
class Bullet {
    static int geneId(){static int ID = 0;ID++;return ID;}

public:
    Bullet():id(geneId()){monster = nullptr;}

    virtual void move(){}
    virtual void attack(){}

    int getId(){return id;}
    int getDamage(){return damage;}
    int getSpeed(){return speed;}
    Position getPos(){return pos;}
    Monster* getTargetMonster(){return monster;}
    Position getTargetPosition(){return targetPosition;}

    void setPos(int x,int y){pos = Position(x,y);}
    void setPos(Position position){pos = position;}
    void setDamage(int val){damage = val;}
    void setSpeed(int val){speed = val;}
    void setTarget(Monster *monster1){monster = monster1;}
    void setTarget(Position position){targetPosition = position;}


private:
    Position pos;
    int id;
    int damage;
    int speed;
    Monster *monster;
    Position targetPosition;

};


#endif //DEFENCE_GAME_BULLET_H
