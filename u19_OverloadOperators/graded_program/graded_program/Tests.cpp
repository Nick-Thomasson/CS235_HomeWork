#include "Tests.h"
#include "Fraction.h"

#include <string>
#include <iostream>
#include <sstream>

const std::string GRN = "\033[0;32m";  const std::string RED = "\033[0;31m";
const std::string CYN = "\033[0;36m";  const std::string WHT = "\033[0;37m";
const std::string YEL = "\033[0;33m";  const std::string BLU = "\034[0;37m";
const std::string BOLD = "\033[0;35m"; const std::string CLR = "\033[0m";

void Tester::Run()
{
  int total_tests = 0, total_passing = 0, total_failing = 0;

  Test_Constructors( total_tests, total_passing, total_failing );
  Test_GetDecimal( total_tests, total_passing, total_failing );
  Test_CommonDenominatorize( total_tests, total_passing, total_failing );
  Test_AssignmentOperator( total_tests, total_passing, total_failing );
  Test_MultiplyOperator( total_tests, total_passing, total_failing );
  Test_DivideOperator( total_tests, total_passing, total_failing );
  Test_AddOperator( total_tests, total_passing, total_failing );
  Test_SubOperator( total_tests, total_passing, total_failing );
  Test_IsEqualOperator( total_tests, total_passing, total_failing );
  Test_IsNotEqualOperator( total_tests, total_passing, total_failing );
  Test_IsLessThanOperator( total_tests, total_passing, total_failing );
  Test_IsLessThanOrEqualToOperator( total_tests, total_passing, total_failing );
  Test_IsGreaterThanOperator( total_tests, total_passing, total_failing );
  Test_IsGreaterThanOrEqualToOperator( total_tests, total_passing, total_failing );
  Test_OutputStreamOperator( total_tests, total_passing, total_failing );
  Test_InputStreamOperator( total_tests, total_passing, total_failing );

  std::cout << CLR << std::endl << std::string( 60, '-' ) << std::endl;
  std::cout << "\t TOTAL TESTS: " << total_tests << ", PASSING: " << total_passing << ", FAILING: " << total_failing << std::endl;
  std::cout << std::string( 60, '-' ) << std::endl;
}

void Tester::Test_Constructors( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_Constructors";
  { total_tests++;
    std::string description = "[" + testName + "]: Default constructor, defaults to 1/1";

    Fraction expectedOut;
    expectedOut.num = 1;
    expectedOut.denom = 1;
    Fraction actualOut;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " Fraction frac...";
      std::cout << " frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " Fraction created: Fraction frac;" << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: Parameterized constructor, correct num/denom";

    Fraction expectedOut;
    expectedOut.num = 2;
    expectedOut.denom = 3;
    Fraction actualOut( expectedOut.num, expectedOut.denom );

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " Fraction frac( otherFrac )";
      std::cout << " frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " Fraction created: Fraction frac( otherFrac );" << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: Parameterized constructor, correct num/denom";

    Fraction expectedOut;
    expectedOut.num = 4;
    expectedOut.denom = 5;
    Fraction actualOut( expectedOut.num, expectedOut.denom );

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " Fraction frac( otherFrac )";
      std::cout << " frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " Fraction created: Fraction frac( otherFrac );" << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_GetDecimal( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_GetDecimal";
  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 becomes 0.5";

    Fraction frac;
    frac.num = 1;
    frac.denom = 2;
    float expectedOut = 0.5;
    float actualOut = frac.GetDecimal();

    if ( expectedOut == actualOut )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " Fraction 1/2, GetDecimal() = " << actualOut << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " Fraction: 1/2" << std::endl;
      std::cout << " EXPECTED frac.GetDecimal = " << actualOut << std::endl;
      std::cout << " ACTUAL   frac.GetDecimal = " << expectedOut << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Make sure you're casting num or denom to a float," << std::endl
                << "        otherwise remainder is truncated!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 3/4 becomes 0.75";

    Fraction frac;
    frac.num = 3;
    frac.denom = 4;
    float expectedOut = 0.75;
    float actualOut = frac.GetDecimal();

    if ( expectedOut == actualOut )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " Fraction 3/4, GetDecimal() = " << actualOut << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " Fraction: 3/4" << std::endl;
      std::cout << " EXPECTED frac.GetDecimal = " << actualOut << std::endl;
      std::cout << " ACTUAL   frac.GetDecimal = " << expectedOut << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Make sure you're casting num or denom to a float," << std::endl
                << "        otherwise remainder is truncated!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_CommonDenominatorize( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_CommonDenominatorize";

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 and 1/3, 1/2 becomes 3/6";

    Fraction other;
    other.num = 1;
    other.denom = 3;
    Fraction original;
    original.num = 1;
    original.denom = 2;
    Fraction expectedOut;
    expectedOut.num = 3;
    expectedOut.denom = 6;
    Fraction actualOut = original.CommonDenominatorize( other );

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " Fraction 1/2, CommonDenominatorize(1/3) = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " Fraction 1/2, CommonDenominatorize(1/3) = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  The NUM and DENOM should both be multiplied by other.m_denom!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 2/3 and 1/5, 2/3 becomes 10/15";

    Fraction other;
    other.num = 1;
    other.denom = 5;
    Fraction original;
    original.num = 2;
    original.denom = 3;
    Fraction expectedOut;
    expectedOut.num = 10;
    expectedOut.denom = 15;
    Fraction actualOut = original.CommonDenominatorize( other );

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " Fraction 2/3, CommonDenominatorize(1/5) = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " Fraction 2/3, CommonDenominatorize(1/5) = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  The NUM and DENOM should both be multiplied by other.m_denom!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 2/4 and 1/4, leave fraction same";

    Fraction other;
    other.num = 1;
    other.denom = 4;
    Fraction expectedOut;
    expectedOut.num = 2;
    expectedOut.denom = 4;
    Fraction actualOut;
    actualOut.num = 2;
    actualOut.denom = 4;
    actualOut.CommonDenominatorize( other );

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " Fraction 2/4, CommonDenominatorize(1/4) = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " Fraction 2/4, CommonDenominatorize(1/4) = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  If m_denom and other.m_denom match, don't change the fraction!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_AssignmentOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_AssignmentOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: Fraction frac = other, check values";

    Fraction expectedOut;
    expectedOut.num = 2;
    expectedOut.denom = 3;
    Fraction actualOut;
    actualOut = expectedOut;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " Fraction frac = other ... ";
      std::cout << " frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " Fraction frac = other ... ";
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Copy the num/denom from OTHER to this fraction" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: Fraction frac = other, check values";

    Fraction expectedOut;
    expectedOut.num = 3;
    expectedOut.denom = 4;
    Fraction actualOut;
    actualOut = expectedOut;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " Fraction frac = other ... ";
      std::cout << " frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " Fraction frac = other ... ";
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Copy the num/denom from OTHER to this fraction" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_MultiplyOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_MultiplyOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 * 2/3 = 2/6";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    Fraction expectedOut;
    expectedOut.num = 2;
    expectedOut.denom = 6;

    Fraction actualOut = a * b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " * " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " * " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  PRODUCT = ( a.num * b.num ) / ( a.denom * b.denom )" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 5/7 * 3/11 = 15/77";

    Fraction a;
    a.num = 5;
    a.denom = 7;

    Fraction b;
    b.num = 3;
    b.denom = 11;

    Fraction expectedOut;
    expectedOut.num = 15;
    expectedOut.denom = 77;

    Fraction actualOut = a * b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " * " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " * " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  PRODUCT = ( a.num * b.num ) / ( a.denom * b.denom )" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_DivideOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_DivideOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 / 2/3 = ";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    Fraction expectedOut;
    expectedOut.num = 3;
    expectedOut.denom = 4;

    Fraction actualOut = a / b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " / " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " / " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  QUOTIENT = ( a.num * b.denom ) / ( a.denom * b.num )" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 5/7 / 3/11 = 15/77";

    Fraction a;
    a.num = 5;
    a.denom = 7;

    Fraction b;
    b.num = 3;
    b.denom = 11;

    Fraction expectedOut;
    expectedOut.num = 55;
    expectedOut.denom = 21;

    Fraction actualOut = a / b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " / " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " / " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  QUOTIENT = ( a.num * b.denom ) / ( a.denom * b.num )" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_AddOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_AddOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 + 1/2 = 2/2";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 1;
    b.denom = 2;

    Fraction expectedOut;
    expectedOut.num = 2;
    expectedOut.denom = 2;

    Fraction actualOut = a + b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " + " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " + " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Don't \"common denominatorize\" if denominators are the same!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 1/5 + 2/5 = 3/5";

    Fraction a;
    a.num = 1;
    a.denom = 5;

    Fraction b;
    b.num = 2;
    b.denom = 5;

    Fraction expectedOut;
    expectedOut.num = 3;
    expectedOut.denom = 5;

    Fraction actualOut = a + b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " + " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " + " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Don't \"common denominatorize\" if denominators are the same!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 + 1/3 = 3/6 + 2/6 = 5/6";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 1;
    b.denom = 3;

    Fraction expectedOut;
    expectedOut.num = 5;
    expectedOut.denom = 6;

    Fraction actualOut = a + b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " + " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " + " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  If denominators are different, use \"common denominatorize\"!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 2/3 + 5/7 = 14/21 + 15/21 = 29/21";

    Fraction a;
    a.num = 2;
    a.denom = 3;

    Fraction b;
    b.num = 5;
    b.denom = 7;

    Fraction expectedOut;
    expectedOut.num = 29;
    expectedOut.denom = 21;

    Fraction actualOut = a + b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " + " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " + " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  If denominators are different, use \"common denominatorize\"!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_SubOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_SubOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 - 1/2 = 0/2";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 1;
    b.denom = 2;

    Fraction expectedOut;
    expectedOut.num = 0;
    expectedOut.denom = 2;

    Fraction actualOut = a - b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " - " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " - " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Don't \"common denominatorize\" if denominators are the same!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 3/5 - 2/5 = 1/5";

    Fraction a;
    a.num = 3;
    a.denom = 5;

    Fraction b;
    b.num = 2;
    b.denom = 5;

    Fraction expectedOut;
    expectedOut.num = 1;
    expectedOut.denom = 5;

    Fraction actualOut = a - b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " - " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " - " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Don't \"common denominatorize\" if denominators are the same!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 - 1/3 = 3/6 - 2/6 = 1/6";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 1;
    b.denom = 3;

    Fraction expectedOut;
    expectedOut.num = 1;
    expectedOut.denom = 6;

    Fraction actualOut = a - b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " - " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " - " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  If denominators are different, use \"common denominatorize\"!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 2/3 + 5/7 = 14/21 - 15/21 = -1/21";

    Fraction a;
    a.num = 2;
    a.denom = 3;

    Fraction b;
    b.num = 5;
    b.denom = 7;

    Fraction expectedOut;
    expectedOut.num = -1;
    expectedOut.denom = 21;

    Fraction actualOut = a - b;

    if ( expectedOut.num == actualOut.num && expectedOut.denom == actualOut.denom )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " - " << b.num << "/" << b.denom << " = ";
      std::cout << actualOut.num << "/" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " - " << b.num << "/" << b.denom << " = " << std::endl;
      std::cout << " EXPECTED frac.m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   frac.m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  If denominators are different, use \"common denominatorize\"!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_IsEqualOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_IsEqualOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 == 1/2 evaluates to TRUE";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 1;
    b.denom = 2;

    bool expectedOut = true;
    bool actualOut = ( a == b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " == " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " == " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Compare both NUM and DENOM of both fractions!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 == 2/3 evaluates to FALSE";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    bool expectedOut = false;
    bool actualOut = ( a == b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " == " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " == " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Compare both NUM and DENOM of both fractions!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 == 2/4 evaluates to TRUE";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 2;
    b.denom = 4;

    bool expectedOut = true;
    bool actualOut = ( a == b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " == " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " == " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Make sure to \"common denominatorize\" fractions before compare!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 == 3/4 evaluates to FALSE";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 3;
    b.denom = 4;

    bool expectedOut = false;
    bool actualOut = ( a == b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " == " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " == " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Make sure to \"common denominatorize\" fractions before compare!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_IsNotEqualOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_IsNotEqualOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 != 1/2 evaluates to FALSE";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 1;
    b.denom = 2;

    bool expectedOut = false;
    bool actualOut = ( a != b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " != " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " != " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Compare both NUM and DENOM of both fractions!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 != 2/3 evaluates to TRUE";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    bool expectedOut = true;
    bool actualOut = ( a != b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " != " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " != " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Compare both NUM and DENOM of both fractions!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 != 2/4 evaluates to FALSE";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 2;
    b.denom = 4;

    bool expectedOut = false;
    bool actualOut = ( a != b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " != " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " != " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Make sure to \"common denominatorize\" fractions before compare!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 1/2 != 3/4 evaluates to TRUE";

    Fraction a;
    a.num = 1;
    a.denom = 2;

    Fraction b;
    b.num = 3;
    b.denom = 4;

    bool expectedOut = true;
    bool actualOut = ( a != b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " != " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " != " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Make sure to \"common denominatorize\" fractions before compare!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_IsLessThanOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_IsLessThanOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: 2/6 < 1/3 evaluates to FALSE";

    Fraction a;
    a.num = 2;
    a.denom = 6;

    Fraction b;
    b.num = 1;
    b.denom = 3;

    bool expectedOut = false;
    bool actualOut = ( a < b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " < " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " < " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 2/6 < 2/3 evaluates to TRUE";

    Fraction a;
    a.num = 2;
    a.denom = 6;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    bool expectedOut = true;
    bool actualOut = ( a < b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " < " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " < " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 6/6 < 2/3 evaluates to FALSE";

    Fraction a;
    a.num = 6;
    a.denom = 6;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    bool expectedOut = false;
    bool actualOut = ( a < b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " < " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " < " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_IsLessThanOrEqualToOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_IsLessThanOrEqualToOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: 2/6 <= 1/3 evaluates to TRUE";

    Fraction a;
    a.num = 2;
    a.denom = 6;

    Fraction b;
    b.num = 1;
    b.denom = 2;

    bool expectedOut = true;
    bool actualOut = ( a <= b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " <= " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " <= " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 2/6 <= 2/3 evaluates to TRUE";

    Fraction a;
    a.num = 2;
    a.denom = 6;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    bool expectedOut = true;
    bool actualOut = ( a <= b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " <= " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " <= " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 6/6 <= 2/3 evaluates to FALSE";

    Fraction a;
    a.num = 6;
    a.denom = 6;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    bool expectedOut = false;
    bool actualOut = ( a <= b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " <= " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " <= " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_IsGreaterThanOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_IsGreaterThanOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: 2/6 > 1/3 evaluates to FALSE";

    Fraction a;
    a.num = 2;
    a.denom = 6;

    Fraction b;
    b.num = 1;
    b.denom = 3;

    bool expectedOut = false;
    bool actualOut = ( a > b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " > " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " > " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 2/6 > 2/3 evaluates to FALSE";

    Fraction a;
    a.num = 2;
    a.denom = 6;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    bool expectedOut = false;
    bool actualOut = ( a > b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " > " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " > " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 6/6 > 2/3 evaluates to TRUE";

    Fraction a;
    a.num = 6;
    a.denom = 6;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    bool expectedOut = true;
    bool actualOut = ( a > b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " > " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " > " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_IsGreaterThanOrEqualToOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_IsGreaterThanOrEqualToOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: 2/6 >= 1/3 evaluates to TRUE";

    Fraction a;
    a.num = 2;
    a.denom = 6;

    Fraction b;
    b.num = 1;
    b.denom = 3;

    bool expectedOut = true;
    bool actualOut = ( a >= b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " >= " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " >= " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 2/6 >= 2/3 evaluates to FALSE";

    Fraction a;
    a.num = 2;
    a.denom = 6;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    bool expectedOut = false;
    bool actualOut = ( a >= b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " >= " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " >= " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: 6/6 >= 2/3 evaluates to TRUE";

    Fraction a;
    a.num = 6;
    a.denom = 6;

    Fraction b;
    b.num = 2;
    b.denom = 3;

    bool expectedOut = true;
    bool actualOut = ( a >= b );

    if ( expectedOut == actualOut )
    {
      std::string boolstr = (actualOut) ? "true" : "false";
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " " << a.num << "/" << a.denom << " >= " << b.num << "/" << b.denom << "? ";
      std::cout << boolstr << std::endl;
      total_passing++;
    }
    else
    {
      std::string boolstrA = (actualOut) ? "true" : "false";
      std::string boolstrE = (expectedOut) ? "true" : "false";
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " " << a.num << "/" << a.denom << " >= " << b.num << "/" << b.denom << "? ";
      std::cout << " EXPECTED: " << boolstrA << std::endl;
      std::cout << " ACTUAL:   " << boolstrE << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  \"Common denominatorize\" fractions before compare, then look at NUMs!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_OutputStreamOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_OutputStreamOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: out << frac should display n/d";

    Fraction frac;
    frac.num = 1;
    frac.denom = 2;

    std::ostringstream stream;
    stream << frac;

    std::string expectedOut = "1/2";
    std::string actualOut = stream.str();

    if ( expectedOut == actualOut )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " frac.m_num=" << frac.num << ", frac.m_denom=" << frac.denom;
      std::cout << " out << ... \"" << actualOut << "\"" << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " frac.m_num=" << frac.num << ", frac.m_denom=" << frac.denom << std::endl;
      std::cout << " EXPECTED OUT: \"" << expectedOut << "\"" << std::endl;
      std::cout << " ACTUAL OUT:   \"" << actualOut << "\"" << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Make sure to return out at the end of the function!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: out << frac should display n/d";

    Fraction frac;
    frac.num = 3;
    frac.denom = 4;

    std::ostringstream stream;
    stream << frac;

    std::string expectedOut = "3/4";
    std::string actualOut = stream.str();

    if ( expectedOut == actualOut )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " frac.m_num=" << frac.num << ", frac.m_denom=" << frac.denom;
      std::cout << " out << ... \"" << actualOut << "\"" << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " frac.m_num=" << frac.num << ", frac.m_denom=" << frac.denom << std::endl;
      std::cout << " EXPECTED OUT: \"" << expectedOut << "\"" << std::endl;
      std::cout << " ACTUAL OUT:   \"" << actualOut << "\"" << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Make sure to return out at the end of the function!" << std::endl;
      total_failing++;
    }
  }
}

void Tester::Test_InputStreamOperator( int& total_tests, int& total_passing, int& total_failing )
{
  std::string testName = "Test_InputStreamOperator";

  { total_tests++;
    std::string description = "[" + testName + "]: in >> to frac, should store num/denom";

    Fraction expectedOut;
    expectedOut.num = 1;
    expectedOut.denom = 2;
    Fraction actualOut;

    std::istringstream stream( "1 2" );
    stream >> actualOut;

    if ( expectedOut == actualOut )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " 1 and 2, in >> frac ...";
      std::cout << " now m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " 1 and 2, in >> frac ... " << std::endl;
      std::cout << " EXPECTED m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Make sure to return in at the end of the function!" << std::endl;
      total_failing++;
    }
  }

  { total_tests++;
    std::string description = "[" + testName + "]: in >> to frac, should store num/denom";

    Fraction expectedOut;
    expectedOut.num = 3;
    expectedOut.denom = 4;
    Fraction actualOut;

    std::istringstream stream( "3 4" );
    stream >> actualOut;

    if ( expectedOut == actualOut )
    {
      std::cout << GRN << "[PASS] Test " << total_tests << ",";
      std::cout << " 3 and 4, in >> frac ...";
      std::cout << " now m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      total_passing++;
    }
    else
    {
      std::cout << RED << "[FAIL] Test " << total_tests << ": " << description << std::endl;
      std::cout << " 3 and 4, in >> frac ... " << std::endl;
      std::cout << " EXPECTED m_num=" << expectedOut.num << ", frac.m_denom=" << expectedOut.denom << std::endl;
      std::cout << " ACTUAL   m_num=" << actualOut.num << ", frac.m_denom=" << actualOut.denom << std::endl;
      std::cout << YEL;
      std::cout << " HINT:  Make sure to return in at the end of the function!" << std::endl;
      total_failing++;
    }
  }
}


