/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
}

TEST(PasswordTest, three_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("HHH");
	ASSERT_EQ(3, actual);
}

TEST(PasswordTest, two_middle)
{
	Password my_password;
	int actual = my_password.count_leading_characters("HHjnfHHvfhHH");
	ASSERT_EQ(2, actual);
}

TEST(PasswordTest, five_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("JJJJJello");
	ASSERT_EQ(5, actual);
}

TEST(PasswordTest, empty_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("");
	ASSERT_EQ(0, actual);
}

TEST(PasswordTest, backslash_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("\\\\\\\\\\");
	ASSERT_EQ(10, actual);
}

TEST(PasswordTest, one_uppercase_onelowercase)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("heLlo");
	ASSERT_EQ(true, actual);
}

TEST(PasswordTest, all_lowercase)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("hello");
	ASSERT_EQ(false, actual);
}







