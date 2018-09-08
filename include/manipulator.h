#ifndef MANIPULATOR_H
#define MANIPULATOR_H

#include <string>

/**
 * @class manipulator
 * @brief string manipulator class
 */
class manipulator
{
private:
    std::string str_;   /**< @brief the input string */
public:
    /**
     * @fn manipulator() 
     * @brief constructor
     */
    manipulator();
    /**
     * @fn void set(const std::string& str)
     * @brief set str to str_
     * @param str string to be set
     */
    void set(const std::string& str);
    /**
     * @fn std::string upper() const
     * @brief return the uppercase of str_
     * @return uppercase of str_
     */
    std::string upper() const;
    /**
     * @fn std::string lower() const
     * @brief return the lowercase of str_
     * @return lowercase of str_
     */
    std::string lower() const;
};

#endif // MANIPULATOR_H
