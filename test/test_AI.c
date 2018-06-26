#include <malloc.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "unity.h"
#include "AI.h"


void setUp(void)
{
}

void tearDown(void)
{
}

/*void test_stringCompare_Given_Hello_and_Hello_expect_1(void)
{
    TEST_ASSERT_EQUAL(1, stringCompare("Hello", "Hello"));
}

void test_stringCompare_Given_MAMbo_juMbo_and_maMbo_Jumbo_expect_1(void)
{
    TEST_ASSERT_EQUAL(1, stringCompare("MAMbo juMbo", "maMbo Jumbo"));
}

void test_stringCompare_Given_Rambo_and_Rambu_expect_0(void)
{
    TEST_ASSERT_EQUAL(0, stringCompare("Rambo", "Rambu"));
}

void test_stringCompare_Given_Hell_and_Hello_expect_0(void)
{
    TEST_ASSERT_EQUAL(0, stringCompare("Hell", "Hello"));
}

void test_stringCompare_Given_Hello_and_Hell_expect_0(void)
{
    TEST_ASSERT_EQUAL(0, stringCompare("Hello", "Hell"));
}

void test_speakToAiMachine_Given_Hello_Hi_Hey_Greeting_expect_Hi_there_my_name_is_themachine_what_is_yours(void)
{
	char *expectedReply = "Hi there! My name is TheMachine. What is yours?";
	char *reply = speakToAiMachine("hi");
	TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}*/

void test_speakToAiMachine_Given_My_name_is_OPM_expect_Nice_to_meet_you_OPM(void)
{
	char *expectedReply = "Nice to meet you, OPM";
	char *reply = speakToAiMachine("My name is OPM");
	TEST_ASSERT_EQUAL_STRING(expectedReply, reply);
}

/*void test_AI_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement AI");
}*/
