#include "Test.h"

//#define TEST_1
//#define TEST_2
#define TEST_3

Test::Test() {

}

void Test::init() {
#ifdef TEST_1
    test_1();
#endif // TEST_1

#ifdef TEST_2
    test_2();
#endif // TEST_2

#ifdef TEST_3
    test_3();
#endif // TEST_3
}
