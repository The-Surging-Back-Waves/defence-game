//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_MONSTERMANAGER_H
#define DEFENCE_GAME_MONSTERMANAGER_H

class Monster;
class MonsterManager {
public:
    int dead(Monster& monster);
    bool monsterMove(Monster& monster);
    int rushIn(Monster& monster);
};


#endif //DEFENCE_GAME_MONSTERMANAGER_H
