#include "unity.h"
#include "triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_triangle_validtriangle_2_3_5_expect_valid(void)
{
  char *result;
  int s1,s2,l1 ;
  result = validtriangle(2,4,5,&s1,&s2,&l1);
  printf("short1:%d\n",s1);
  printf("short2:%d\n",s2);
  printf("long1:%d\n",l1);
  TEST_ASSERT_EQUAL_STRING("valid",result);
  
}

void test_triangle_validtriangle_2_3_10_expect_invalid(void)
{
  char *result;
  int s1,s2,l1 ;
  result = validtriangle(1,5,10,&s1,&s2,&l1);
  printf("short1:%d\n",s1);
  printf("short2:%d\n",s2);
  printf("long1:%d\n",l1);
  TEST_ASSERT_EQUAL_STRING("invalid",result);
  
}

void test_triangle_checktype_2_3_5_expect_accute(void)
{
  char *result;
  int s1,s2,l1 ;
  result = checktype(2,3,5);

  TEST_ASSERT_EQUAL_STRING("accute",result);
}
void test_triangle_checktype_9_11_14_expect_accute(void)
{
  char *result;
  int s1,s2,l1 ;
  result = checktype(9,11,14);

  TEST_ASSERT_EQUAL_STRING("obtuse",result);
}
void test_triangle_checktype_3_4_5_expect_accute(void)
{
  char *result;
  int s1,s2,l1 ;
  result = checktype(12,13,5);

  TEST_ASSERT_EQUAL_STRING("rightangle",result);
}

