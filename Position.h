#ifndef POSITION_H
#define POSITION_H


class Position
{
public:
    Position();
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
