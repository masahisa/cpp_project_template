#include <CppUTest/CommandLineTestRunner.h>

IMPORT_TEST_GROUP(numeric);
IMPORT_TEST_GROUP(manipulator);

int main(int argc, char** argv)
{
    return CommandLineTestRunner::RunAllTests(argc, argv);
}