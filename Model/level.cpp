//
// Created by hw730 on 2020/6/8.
//

#include <malloc.h>
#include "level.h"
void level::start() {
    map = *new Map;
    monstertroop = (Troop*)malloc(sizeof(Troop) * round);

}