#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>

/**
  @brief Perform a test and assert the given condition.
  This function performs a test with the specified code and checks if the given condition is true.
  If the condition is true, the test is considered passed.
  @param code The code of the test.
  @param condition The condition to be tested.
  @return None.
*/

static void test(int code, bool condition)
{
  std::cout << "Test #" << code << ": ";
  if (condition)
    std::cout << "Passed!" << std::endl;
  else
    std::cout << "Failed!" << std::endl;
}

#endif /* TEST_HPP */
