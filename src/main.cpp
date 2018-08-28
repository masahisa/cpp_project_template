#include <iostream>
#include "numeric.h"
#include "manipulator.h"

int main()
{
    std::cout << "Hello World!" << std::endl;

    numeric n;
    n.set(2, 5);
    std::cout << n.sum() << " " << n.diff() << std::endl;

    manipulator m;
    m.set("manipulator");
    std::cout << m.upper() << " " << m.lower() << std::endl;

    return 0;
}
