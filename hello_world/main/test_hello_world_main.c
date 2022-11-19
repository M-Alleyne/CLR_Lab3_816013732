#include "unity.h"
#include "hello_world_main.c"

void test_id(void)
{
    TEST_ASSERT_EQUAL_STRING( "816013732", id );
}

void test_name(void)
{
    TEST_ASSERT_EQUAL_STRING( "Michael Alleyne", name);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_id);
    RUN_TEST(test_name);
    return UNITY_END();
}
