//
// Created by hw730 on 2020/6/11.
//

#ifndef DEFENCE_GAME_TARGETBULLETBUILDER_H
#define DEFENCE_GAME_TARGETBULLETBUILDER_H
#include"BulletBuilder.h"
#include"TargetBullet.h"
class TargetBulletBuilder : public BulletBuilder{
private:
    Bullet *bullet = new TargetBullet;
     void setSpeed(){
         bullet->setSpeed(1);
     }
     void setPosition(){
         bullet->setPos(1,1);
     }
     void setDamage()
     {
         bullet->setDamage(1);
     }
     Bullet* getBullet(){
         return bullet;
     }

};


#endif //DEFENCE_GAME_TARGETBULLETBUILDER_H
