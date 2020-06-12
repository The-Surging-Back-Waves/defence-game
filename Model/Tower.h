//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_TOWER_H
#define DEFENCE_GAME_TOWER_H
#include"Position.h"
#include"BulletFactory.h"
#include "MonsterLinkListManager.h"
class MonsterLinkListManager;
class Tower {
    static int geneId(){static int ID = 0;ID++;return ID;}
    static int geneTimeId(){static int TIMEID = 0;TIMEID++;return TIMEID;}
public:
    Tower():id(geneId()){}
    int getRange(){return range;}
    Position getPosition(){return pos;}
    int getId(){return id;}
    int getRateOfFire(){return rateOfFire;}
    MonsterLinkListManager* getMonsterLinkListManager(){return monsterLinkListManager;}


    virtual Bullet * shot();
private:
    int range;
    Position pos;
    BulletFactory bulletFactory;
    MonsterLinkListManager *monsterLinkListManager;
    int rateOfFire;
    int id;

};


#endif //DEFENCE_GAME_TOWER_H
