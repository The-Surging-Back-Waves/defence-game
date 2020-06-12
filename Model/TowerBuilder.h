//
// Created by hw730 on 2020/6/11.
//

#ifndef DEFENCE_GAME_TOWERBUILDER_H
#define DEFENCE_GAME_TOWERBUILDER_H
#include"Tower.h"

class TowerBuilder {
public:
    virtual void setRange();
    virtual void setPosition();
    virtual void setRateOfFire();
    virtual Tower getTower();
};


#endif //DEFENCE_GAME_TOWERBUILDER_H
