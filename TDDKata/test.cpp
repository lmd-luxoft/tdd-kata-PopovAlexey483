#include "pch.h"
#include "string.h"
#include "Calculator.h"

TEST(TDDKata, AddTestEmptyStr)
{
	// Arrange
	char str[] = "";
	int  exp = 0;

	Calculator myCalc;

	// Action
	int actual = myCalc.Add(str);

	// Assert
	ASSERT_EQ(exp, actual);
}
TEST(TDDKata, AddTestMinus)
{
	// Arrange
	char str[] = "-";
	int  exp = 0;

	Calculator myCalc;

	// Action
	int actual = myCalc.Add(str);

	// Assert
	ASSERT_EQ(exp, actual);
}

TEST(TDDKata, AddTesFormatOk)
{
	// Arrange
	char str[] = ",";
	int  exp = 0;

	Calculator myCalc;

	// Action
	int actual = myCalc.Add(str);

	// Assert
	ASSERT_EQ(exp, actual);
}
TEST(TDDKata, AddTestFirstParam)
{
	// Arrange
	char str[] = ",1";
	int  exp = 0;

	Calculator myCalc;

	// Action
	int actual = myCalc.Add(str);

	// Assert
	ASSERT_EQ(exp, actual);
}
TEST(TDDKata, AddTestSecondParam)
{
	// Arrange
	char str[] = "1,";
	int  exp = 0;

	Calculator myCalc;

	// Action
	int actual = myCalc.Add(str);

	// Assert
	ASSERT_EQ(exp, actual);
}
TEST(TDDKata, AddTestOneNumber)

{
	// Arrange
	char str[] = "1,1";
	int  exp = atoi(str + 0) + atoi(str + 2);

	Calculator myCalc;

	// Action
	int actual = myCalc.Add(str);

	// Assert
	ASSERT_EQ(exp, actual);
}
TEST(TDDKata, AddTestTwoNumber)
{
	// Arrange
	char str[] = "11,11";
	int  exp = atoi(str+0) + atoi(str+3);

	Calculator myCalc;

	// Action
	int actual = myCalc.Add(str);

	// Assert
	ASSERT_EQ(exp, actual);
}




