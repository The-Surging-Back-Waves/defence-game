//
// Created by hw730 on 2020/6/11.
//

#include "ArrowTower.h"
Bullet* ArrowTower::shot(){
    Monster *targetMonster = getMonsterLinkListManager()->getNearestMonster(getPosition(),getRange());
    director.construct();
    Bullet *bullet = director.getBulletBuilder()->getBullet();
    bullet->setPos(getPosition());
    bullet->setTarget(targetMonster);
    return bullet;
}
