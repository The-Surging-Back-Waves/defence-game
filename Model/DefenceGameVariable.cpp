//
// Created by hw730 on 2020/6/12.
//

#include "DefenceGameVariable.h"
namespace monsterVariable{
    int HP;
    int speed;
    int money;
    int damage;
    Position pos;
}
namespace arrowTowerVariable{
    int range = 5;
    int rateOfFire = 10;
}
namespace rangeBulletVariable{

}
namespace targetBulletVariable{
    int damage = 4;
    int speed = 5;
}
namespace gameVariable{

    Position endposlefttop = Position(5,5);
    Position endposrightbottom = Position(6,6);
}