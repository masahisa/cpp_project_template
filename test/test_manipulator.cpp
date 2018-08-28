#include <CppUTest/TestHarness.h>
#include "manipulator.h"

TEST_GROUP(manipulator)
{
    manipulator m;
    
    void setup(){
        
    }

    void teardown(){

    }
};

TEST(manipulator, upper_test)
{
    m.set("manipulator");
    CHECK_EQUAL("MANIPULATOR", m.upper());
};

TEST(manipulator, lower_test)
{
    m.set("MANIPULATOR");
    CHECK_EQUAL("manipulator", m.lower());
};