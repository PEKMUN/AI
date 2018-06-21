#include <malloc.h>
#include <string.h>
#include <stdio.h>
#include "unity.h"
#include "AI.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_stringCompare_Given_Hello_and_Hello_expect_1(void)
{
    TEST_ASSERT_EQUAL(stringCompare("Hello", "Hello"), 1);
}

/*void test_stringCompare_Given_mumbo_jumbo_and_mumbo_jumbo_expect_1(void)
{
    TEST_ASSERT_EQUAL(stringCompare("mumbo jumbo", "mumbo jumbo"), 1);
}

void test_stringCompare_Given_Rambo_and_Rambu_expect_0(void)
{
    TEST_ASSERT_EQUAL(stringCompare("Rambo", "Rambu"), 0);
}

void test_stringCompare_Given_Hell_and_Hello_expect_0(void)
{
    TEST_ASSERT_EQUAL(stringCompare("Hell", "Hello"), 0);
}

void test_stringCompare_Given_Hello_and_Hell_expect_0(void)
{
    TEST_ASSERT_EQUAL(stringCompare("Hello", "Hell"), 0);
}

void test_speakToAiMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_what_is_yours(void)
{
	char *expectedReply = "Hi there! My name is TheMachine. What is yours?";
	char *reply = speakToAiMachine("hi");
	TEST_ASSERT_NOT_NULL(reply);
	TEST_ASSERT_EQUAL(strlen(reply), strlen(expectedReply));
	TEST_ASSERT_EQUAL_STRING(reply, expectedReply);
	free(reply);
}*/

/*void test_AI_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement AI");
}*/
