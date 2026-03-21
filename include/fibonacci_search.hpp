#ifndef FIBONACCI_SEARCH_HPP
#define FIBONACCI_SEARCH_HPP

#include <algorithm>
#include <vector>

namespace Search
{
  /**
   * @brief Performs a Fibonacci search on a sorted vector to find a target value.
   * @tparam T The type of the elements in the vector.
   * @param target The target value to search for.
   * @param arr The sorted vector to search in.
   * @return The index of the target value in the vector if found, -1 otherwise.
   */

  template <typename T>
  static int fibonacciSearch(T target, std::vector<T> arr)
  {
    if (arr.size() <= 0)
      return -1;
    int i,
        length = arr.size(),
        low = 0,
        fibMMm2 = 0,
        fibMMm1 = 1,
        fibM = fibMMm2 + fibMMm1,
        result = -1;
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

} // namespace Search

#endif /* FIBONACCI_SEARCH_HPP */