#include "numeric.h"

numeric::numeric()
    : x_{0}
    , y_{0}
{

}

void numeric::set(int x, int y)
{
    x_ = x;
    y_ = y;
}

int numeric::sum() const
{
    return x_ + y_;
}

int numeric::diff() const
{
    return x_ - y_;
}
