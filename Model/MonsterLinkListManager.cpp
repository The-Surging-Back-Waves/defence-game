//
// Created by hw730 on 2020/6/11.
//

#include "MonsterLinkListManager.h"

bool MonsterLinkListManager::insertMonsterLinkList(Monster *monster)
{
    MonsterLinkList *monsterLinkList = new MonsterLinkList(monster);
    if(monsterLinkList == nullptr) return false;
    if(head == nullptr){head = tail = monsterLinkList;return true;}
    tail->setMonsterLinkListNext(monsterLinkList);
    monsterLinkList->setMonsterLinkListPre(tail);
    tail = monsterLinkList;
    return true;
}
bool MonsterLinkListManager::deleteMonsterLinkList(MonsterLinkList *monsterLinkList) {
    if(monsterLinkList == head){head = monsterLinkList->getNextMonsterLinkList();delete monsterLinkList;return true;}
    if(monsterLinkList == tail){tail = monsterLinkList->getPreMonsterLinkList();delete monsterLinkList;return true;}
    monsterLinkList->getPreMonsterLinkList()->setMonsterLinkListNext(monsterLinkList->getNextMonsterLinkList());
    delete monsterLinkList;
    return true;
}
inline int MonsterLinkListManager::getDistance(Position position1,Position position2){
    return abs(position1.getX() - position2.getX()) + abs(position1.getY() - position2.getY());
}
Monster* MonsterLinkListManager::getNearestMonster(Position position,int range)
{
    if(head == nullptr) return nullptr;
    MonsterLinkList *p = head,*monster = nullptr;
    int minDistance = 0;
    while(p!= nullptr)
    {
        int nowDistance = getDistance(p->getMonster()->getPos(),position);
        if(monster == nullptr || nowDistance > minDistance ||
        (nowDistance == minDistance && p->getMonster()->getHP() > monster->getMonster()->getHP()))
        {
            minDistance = nowDistance;
            monster = p;
        }
        p = p->getNextMonsterLinkList();
    }
    if(minDistance > range) return nullptr;
    return (monster->getMonster());
}
bool MonsterLinkListManager::MoveMonster() {
    static int d[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
    MonsterLinkList *p = head;
    while(p != nullptr)
    {
        Position position = p->getMonster()->getPos();
        for(register int i = 0;i < 4;i++)
        {
            Position nextPosition = Position(position.getX() + d[i][0],position.getY() + d[i][1]);
            if(nextPosition.getX() >= game->getMap()->getHeight() || nextPosition.getY() >=game->getMap()->getWidth()) continue;
            if(game->getMap()->getMapelement(nextPosition).getDepth() == game->getMap()->getMapelement(position).getDepth() + 1)
            {
                p->getMonster()->setPos(nextPosition);
                break;
            }
        }
        p = p->getNextMonsterLinkList();
    }
    return true;
}
bool MonsterLinkListManager::MonsterInEnd(Position position) {
    return (position.getX() >= gameVariable::endposlefttop.getX())&&(position.getX() <= gameVariable::endposrightbottom.getX())
    &&(position.getY() >= gameVariable::endposlefttop.getY()) &&(position.getY() <= gameVariable::endposrightbottom.getY());
}
bool MonsterLinkListManager::checkMonsterToEnd() {
    MonsterLinkList *p = head,*tmp;
    while (p != nullptr)
    {
        if(MonsterInEnd(p->getMonster()->getPos()))
        {
            game->setHP(game->getHP() - p->getMonster()->getDamage());
            tmp = p;
            p = p->getNextMonsterLinkList();
            delete tmp;
        } else{
            p = p->getNextMonsterLinkList();
        }
    }
    return true;
}