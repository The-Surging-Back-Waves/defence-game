//
// Created by hw730 on 2020/6/8.
//

#ifndef DEFENCE_GAME_MAPELEMENT_H
#define DEFENCE_GAME_MAPELEMENT_H


class MapElement {
public:
    int getposX();
    int getposY();
    int getid();
private:
    int posX;
    int posY;
    int id;
};


#endif //DEFENCE_GAME_MAPELEMENT_H
