//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_RANGEBULLET_H
#define DEFENCE_GAME_RANGEBULLET_H
#include"Position.h"
#include"velocity.h"

class RangeBullet {
public:
    ~RangeBullet(){}
    virtual void move();
    virtual void attack();

    Position getPosition(){return targetpos;}
    velocity getv(){return v;}

private:
    Position targetpos;
    velocity v;

};


#endif //DEFENCE_GAME_RANGEBULLET_H
