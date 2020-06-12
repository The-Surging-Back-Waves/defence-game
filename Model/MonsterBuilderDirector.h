//
// Created by hw730 on 2020/6/11.
//

#ifndef DEFENCE_GAME_MONSTERBUILDERDIRECTOR_H
#define DEFENCE_GAME_MONSTERBUILDERDIRECTOR_H
#include"Monster.h"
#include"MonsterBuilder.h"

class MonsterBuilderDirector {
private: MonsterBuilder monsterBuilder;
public:
    MonsterBuilderDirector(MonsterBuilder builder)
    {
        monsterBuilder = builder;
    }
    Monster construct()
    {
        monsterBuilder.setSpeed();
        monsterBuilder.setPosition();
        monsterBuilder.setDamage();
        monsterBuilder.setHP();
        monsterBuilder.setMoney();
        return monsterBuilder.getMonster();
    }

};


#endif //DEFENCE_GAME_MONSTERBUILDERDIRECTOR_H
