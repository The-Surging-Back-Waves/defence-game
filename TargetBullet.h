//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_TARGETBULLET_H
#define DEFENCE_GAME_TARGETBULLET_H
#include"Bullet.h"
#include"Monster.h"
class TargetBullet : public Bullet{
public:
    ~TargetBullet(){}
    virtual void move();
    virtual void attack();

private:
    Monster *target;

};


#endif //DEFENCE_GAME_TARGETBULLET_H
