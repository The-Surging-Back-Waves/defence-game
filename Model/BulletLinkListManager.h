//
// Created by hw730 on 2020/6/12.
//

#ifndef DEFENCE_GAME_BULLETLINKLISTMANAGER_H
#define DEFENCE_GAME_BULLETLINKLISTMANAGER_H
#include "Bullet.h"
#include "BulletLinkList.h"

class BulletLinkListManager {
public:
    BulletLinkListManager(){head = tail = nullptr;}
    BulletLinkList* getHead(){return head;}
    BulletLinkList* getTail(){return tail;}
    bool insertBulletLinkList(Bullet *bullet);
    void shotmanage();
private:
    BulletLinkList *head;
    BulletLinkList *tail;
};


#endif //DEFENCE_GAME_BULLETLINKLISTMANAGER_H
