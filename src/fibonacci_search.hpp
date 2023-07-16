#include <algorithm>
#include <cassert>

#ifndef FIBONACCI_SEARCH_HPP
#define FIBONACCI_SEARCH_HPP

/**
  @brief Performs a Fibonacci search on a sorted array to find a target value.
  @tparam T The type of the elements in the array.
  @param target The target value to search for.
  @param arr The sorted array to search in.
  @param length The length of the array.
  @return The index of the target value in the array if found, -1 otherwise.
*/

template <typename T>
int fibonacciSearch(T target, T *arr, int length)
{
  int i,
      low = 0,
      fibMMm2 = 0,
      fibMMm1 = 1,
      fibM = fibMMm2 + fibMMm1,
      result = -1;
  assert(length > 0);
  while (fibM < length)
  {
    fibMMm2 = fibMMm1;
    fibMMm1 = fibM;
    fibM = fibMMm1 + fibMMm2;
  }
  while (fibM > 0 && fibMMm1 > 0)
  {
    i = std::min(low + fibMMm2, length - 1);
    if (arr[i] == target)
    {
      result = i;
      break;
    }
    else if (arr[i] < target)
    {
      low += fibMMm2;
      fibM = fibMMm1;
      fibMMm1 = fibMMm2;
      fibMMm2 = fibM - fibMMm1;
    }
    else
    {
      fibM = fibMMm2;
      fibMMm1 = fibMMm1 - fibMMm2;
      fibMMm2 = fibM - fibMMm1;
    }
  }

  return result;
}

#endif /* FIBONACCI_SEARCH_HPP */