#ifndef NUMERIC_H
#define NUMERIC_H

class numeric
{
private:
    int x_;
    int y_;
public:
    numeric();
    void set(int x, int y);
    int sum() const;
    int diff() const;
};

#endif // NUMERIC_H
