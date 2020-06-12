//
// Created by hw730 on 2020/6/11.
//

#ifndef DEFENCE_GAME_BULLETBUILDERDIRECTOR_H
#define DEFENCE_GAME_BULLETBUILDERDIRECTOR_H
#include"BulletBuilder.h"
class BulletBuilderDirector {
private: BulletBuilder *mBuilder;
public:
    BulletBuilderDirector(BulletBuilder *builder)
    {
        mBuilder = builder;
    }
    void construct();
    BulletBuilder* getBulletBuilder(){return mBuilder;}
};


#endif //DEFENCE_GAME_BULLETBUILDERDIRECTOR_H
