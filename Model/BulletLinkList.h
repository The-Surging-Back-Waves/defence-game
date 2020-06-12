//
// Created by hw730 on 2020/6/12.
//

#ifndef DEFENCE_GAME_BULLETLINKLIST_H
#define DEFENCE_GAME_BULLETLINKLIST_H
#include "Bullet.h"

class BulletLinkList {
public:
    BulletLinkList(Bullet *bullet1){
        bullet = bullet1;
        next = nullptr;
    }
    Bullet getBullet(){return *bullet;}
    BulletLinkList* getNextBulletLinkList(){return next;}
    void setBulletLinkList(BulletLinkList *bulletLinkList){next = bulletLinkList;}
private:
    Bullet *bullet;
    BulletLinkList *next;
};


#endif //DEFENCE_GAME_BULLETLINKLIST_H
