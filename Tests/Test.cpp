#include "Test.h"

//#define TEST_1
//#define TEST_2
//#define TEST_3
//#define TEST_4
#define TEST_5

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

#ifdef TEST_4
    test_4();
#endif // TEST_4

#ifdef TEST_5
    test_5();
#endif // TEST_5
}
