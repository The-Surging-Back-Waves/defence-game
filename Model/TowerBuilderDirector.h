//
// Created by hw730 on 2020/6/11.
//

#ifndef DEFENCE_GAME_TOWERBUILDERDIRECTOR_H
#define DEFENCE_GAME_TOWERBUILDERDIRECTOR_H
#include"Tower.h"
#include"TowerBuilder.h"

class TowerBuilderDirector {
private: TowerBuilder towerBuilder;
public:
    TowerBuilderDirector(TowerBuilder builder)
    {
        towerBuilder = builder;
    }
    Tower construct()
    {
        towerBuilder.setPosition();
        towerBuilder.setRange();
        towerBuilder.setRateOfFire();
        return towerBuilder.getTower();
    }
};


#endif //DEFENCE_GAME_TOWERBUILDERDIRECTOR_H
