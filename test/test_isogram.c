#include "vendor/unity.h"
#include "../src/isogram.h"
#include "vendor/unity_internals.h"
#include <stdlib.h>

void test_empty_string(void)
{
   TEST_ASSERT_TRUE(is_isogram(""));
}

void test_short_isogram_word(){
    TEST_ASSERT_TRUE(is_isogram("auto"));
}

void butter_is_no_isogram(){
    TEST_ASSERT_FALSE(is_isogram("butter"));
}

void upperCase_and_lowerCase_should_count(){
    TEST_ASSERT_FALSE(is_isogram("Aal"));
}

void space_should_not_count(){
    TEST_ASSERT_TRUE(is_isogram(" Florian best "));
}



int main(void)
{
   UnityBegin("isIsogram");

   RUN_TEST(test_empty_string);
   RUN_TEST(test_short_isogram_word);
   RUN_TEST(butter_is_no_isogram);
   RUN_TEST(upperCase_and_lowerCase_should_count);
   RUN_TEST(space_should_not_count);

   UnityEnd();
   return 0;
}
