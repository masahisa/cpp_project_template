#ifndef MANIPULATOR_H
#define MANIPULATOR_H

#include <string>

class manipulator
{
private:
    std::string str_;
public:
    manipulator();
    void set(const std::string& str);
    std::string upper() const;
    std::string lower() const;
};

#endif // MANIPULATOR_H
