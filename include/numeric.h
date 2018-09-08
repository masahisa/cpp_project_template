#ifndef NUMERIC_H
#define NUMERIC_H

/**
 * @class numeric
 * @brief sum and diff class
 */
class numeric
{
private:
    int x_;     /**< @brief first value */
    int y_;     /**< @brief second value */
public:
    /**
     * @fn numeric()
     * @brief constructor
     */
    numeric();
    /**
     * @fn void set(int x, int y)
     * @brief set x to x_, y to y_
     * @param x first value
     * @param y second valiue
     */
    void set(int x, int y);
    /**
     * @fn int sum() const
     * @brief calculate sum of x_ and y_
     * @return sum of x_ and y_
     */
    int sum() const;
    /**
     * @fn int diff() const
     * @brief calculate diff of x_ and y_
     * @return diff of x_ and y_
     */
    int diff() const;
};

#endif // NUMERIC_H
