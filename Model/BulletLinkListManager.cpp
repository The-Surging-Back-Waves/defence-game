//
// Created by hw730 on 2020/6/12.
//

#include "BulletLinkListManager.h"
bool BulletLinkListManager::insertBulletLinkList(Bullet *bullet)
{
    BulletLinkList *bulletLinkList = new BulletLinkList(bullet);
    if(bulletLinkList == nullptr) return false;
    tail->setBulletLinkList(bulletLinkList);
    tail = bulletLinkList;
    return true;
}
