#include "manipulator.h"
#include <iostream>
#include <algorithm>

manipulator::manipulator()
: str_{""}
{

}

void manipulator::set(const std::string& str)
{
    str_ = str;
}

std::string manipulator::upper() const
{
    std::string tmp = str_;
    std::transform(tmp.begin(), tmp.end(), tmp.begin(), toupper);
    return tmp;
}

std::string manipulator::lower() const{
    std::string tmp = str_;
    std::transform(tmp.begin(), tmp.end(), tmp.begin(), tolower);
    return tmp;
}