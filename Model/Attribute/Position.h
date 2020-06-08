#ifndef POSITION_H
#define POSITION_H


class Position
{
public:
    Position(int xx,int yy):x(xx),y(yy){}
    Position(){x = y = 0;}
    virtual ~Position();

    int getX() { return x; }
    void setX(int val) { x = val; }
    int getY() { return y; }
    void setY(int val) { y = val; }


protected:

private:
    int x;
    int y;
};

#endif // POSITION_H
