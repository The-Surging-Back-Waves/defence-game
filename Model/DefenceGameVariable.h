//
// Created by hw730 on 2020/6/12.
//

#ifndef DEFENCE_GAME_DEFENCEGAMEVARIABLE_H
#define DEFENCE_GAME_DEFENCEGAMEVARIABLE_H
#include"Position.h"

class DefenceGameVariable {

};
namespace monsterVariable{
    extern int HP;
    extern int speed;
    extern int money;
    extern int damage;
    extern Position pos;
}
namespace arrowTowerVariable{
    extern int range;
    extern int rateOfFire;
}
namespace rangeBulletVariable{

}
namespace targetBulletVariable{
    extern int damage;
    extern int speed;
}
namespace gameVariable{

    extern Position endposlefttop;
    extern Position endposrightbottom;
}


#endif //DEFENCE_GAME_DEFENCEGAMEVARIABLE_H
