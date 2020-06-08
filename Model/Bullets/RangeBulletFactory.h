//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_RANGEBULLETFACTORY_H
#define DEFENCE_GAME_RANGEBULLETFACTORY_H
#include"BulletFactory.h"
#include"RangeBullet.h"
#include"Position.h"

class RangeBulletFactory : public BulletFactory{
public:
    virtual RangeBullet getBullet(Position pos);
};


#endif //DEFENCE_GAME_RANGEBULLETFACTORY_H
