//
// Created by hw730 on 2020/6/11.
//

#ifndef DEFENCE_GAME_MONSTERLINKLIST_H
#define DEFENCE_GAME_MONSTERLINKLIST_H
#include "Monster.h"

class MonsterLinkList {
public:
    MonsterLinkList(Monster *monster1){
        monster = monster1;
        next = nullptr;
        pre = nullptr;
    }
    Monster* getMonster(){return monster;}
    MonsterLinkList* getNextMonsterLinkList(){return next;}
    MonsterLinkList* getPreMonsterLinkList(){return pre;}
    void setMonsterLinkListNext(MonsterLinkList *monsterLinkList){next = monsterLinkList;}
    void setMonsterLinkListPre(MonsterLinkList *monsterLinkList){next = monsterLinkList;}
private:
Monster *monster;
MonsterLinkList *next;
MonsterLinkList *pre;
};


#endif //DEFENCE_GAME_MONSTERLINKLIST_H
