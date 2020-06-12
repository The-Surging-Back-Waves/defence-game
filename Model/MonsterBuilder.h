//
// Created by hw730 on 2020/6/11.
//

#ifndef DEFENCE_GAME_MONSTERBUILDER_H
#define DEFENCE_GAME_MONSTERBUILDER_H
#include"Monster.h"

class MonsterBuilder {
public:
    virtual void setHP();
    virtual void setSpeed();
    virtual void setMoney();
    virtual void setDamage();
    virtual void setPosition();
    virtual Monster getMonster();
};


#endif //DEFENCE_GAME_MONSTERBUILDER_H
