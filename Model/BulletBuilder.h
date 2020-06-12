//
// Created by hw730 on 2020/6/11.
//

#ifndef DEFENCE_GAME_BULLETBUILDER_H
#define DEFENCE_GAME_BULLETBUILDER_H
#include"Bullet.h"

class BulletBuilder {
public:
    virtual void setSpeed() = 0;
    virtual void setPosition() = 0;
    virtual void setDamage() = 0;
    virtual Bullet * getBullet() = 0;
};


#endif //DEFENCE_GAME_BULLETBUILDER_H
