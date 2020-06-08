//
// Created by hw730 on 2020/6/8.
//

#include "MonsterManager.h"
#include "Monster.h"

int MonsterManager::dead(Monster& monster){
    return 0;
}

int MonsterManager::rushIn(Monster& monster){
    return monster.getDamage();
}

bool MonsterManager::monsterMove(Monster& monster){
    return true;
}
