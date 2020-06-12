//
// Created by hw730 on 2020/6/11.
//

#ifndef DEFENCE_GAME_ARROWTOWER_H
#define DEFENCE_GAME_ARROWTOWER_H
#include"Tower.h"
#include"Position.h"
#include"BulletBuilderDirector.h"
#include "TargetBulletBuilder.h"
#include "DefenceGameVariable.h"
class ArrowTower : public Tower {
public:
    Bullet* shot();

private:
    BulletBuilderDirector director = *new BulletBuilderDirector(new TargetBulletBuilder());
};


#endif //DEFENCE_GAME_ARROWTOWER_H
