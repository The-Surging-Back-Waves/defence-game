//
// Created by hw730 on 2020/6/11.
//

#ifndef DEFENCE_GAME_MONSTERLINKLISTMANAGER_H
#define DEFENCE_GAME_MONSTERLINKLISTMANAGER_H
#include <math.h>
#include "MonsterLinkList.h"
#include "DefenceGameVariable.h"
#include "level.h"
class level;
class MonsterLinkListManager {
public:
    MonsterLinkList* getHead(){return head;}
    MonsterLinkList* getTail(){return tail;}
    bool insertMonsterLinkList(Monster *monster);
    bool deleteMonsterLinkList(MonsterLinkList *monsterLinkList);
    Monster* getNearestMonster(Position position,int range);
    bool MoveMonster();
    bool checkMonsterToEnd();
    bool MonsterInEnd(Position position);
    void setLevel(level * level){game = level;}
    MonsterLinkListManager* getMonsterLinkListManager(){
        static MonsterLinkListManager monsterLinkListManager = *new MonsterLinkListManager;
        return &monsterLinkListManager;
    }
private:
    MonsterLinkListManager(){head = tail = nullptr;}
    MonsterLinkListManager(MonsterLinkList&) = delete;
    MonsterLinkListManager& operator=(const MonsterLinkListManager &) = delete;
    inline int getDistance(Position position1,Position position2);
    level *game;
    MonsterLinkList *head;
    MonsterLinkList *tail;
};


#endif //DEFENCE_GAME_MONSTERLINKLISTMANAGER_H
