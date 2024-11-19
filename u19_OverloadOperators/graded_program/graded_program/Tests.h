#ifndef _TESTS
#define _TESTS

class Tester
{
  public:
  void Run();
  void Test_Constructors( int& total_tests, int& total_passing, int& total_failing );
  void Test_GetDecimal( int& total_tests, int& total_passing, int& total_failing );
  void Test_CommonDenominatorize( int& total_tests, int& total_passing, int& total_failing );
  void Test_AssignmentOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_MultiplyOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_DivideOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_AddOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_SubOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_IsEqualOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_IsNotEqualOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_IsLessThanOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_IsLessThanOrEqualToOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_IsGreaterThanOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_IsGreaterThanOrEqualToOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_OutputStreamOperator( int& total_tests, int& total_passing, int& total_failing );
  void Test_InputStreamOperator( int& total_tests, int& total_passing, int& total_failing );
};

#endif
