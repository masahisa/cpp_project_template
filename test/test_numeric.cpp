#include <CppUTest/TestHarness.h>
#include "numeric.h"

TEST_GROUP(numeric)
{
    numeric n;
    
    void setup(){
        n.set(2, 3);
    }

    void teardown(){

    }
};

TEST(numeric, sum_test)
{
    CHECK_EQUAL(5, n.sum());
}

TEST(numeric, diff_test)
{
    CHECK_EQUAL(-1, n.diff());
}