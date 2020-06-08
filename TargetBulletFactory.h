//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_TARGETBULLETFACTORY_H
#define DEFENCE_GAME_TARGETBULLETFACTORY_H
#include"BulletFactory.h"
#include"Position.h"
#include"TargetBullet.h"

class TargetBulletFactory : public BulletFactory{
public:
    virtual TargetBullet getBullet(Position pos);
};


#endif //DEFENCE_GAME_TARGETBULLETFACTORY_H
