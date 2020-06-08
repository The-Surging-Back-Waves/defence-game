//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_TOWER_H
#define DEFENCE_GAME_TOWER_H
#include"Position.h"
#include"BulletFactory.h"
class Tower {
    static int geneId(){static int ID = 0;ID++;return ID;}
public:
    Tower():id(geneId()){}
    int getRange(){return range;}
    Position getPosition(){return pos;}
    int getId(){return id;}
    int getRateOfFire(){return rateOfFire;}

    void setRange(int val){range = val;}
    void setPosition(int x,int y){pos = Position(x,y);}
    void setRateOfFire(int val){rateOfFire = val;}

    Bullet shot(){return bulletFactory.getBullet();}
private:
    int range;
    Position pos;
    BulletFactory bulletFactory;
    int rateOfFire;
    int id;

};


#endif //DEFENCE_GAME_TOWER_H
