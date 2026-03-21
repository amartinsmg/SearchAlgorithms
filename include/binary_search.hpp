#ifndef BINARY_SEARCH_HPP
#define BINARY_SEARCH_HPP

#include <vector>

namespace Search
{
  /**
   * @brief Performs a binary search on a sorted vector to find a target value.
   * @tparam T The type of the elements in the vector.
   * @param target The target value to search for.
   * @param arr The sorted vector to search in.
   * @return The index of the target value in the vector if found, -1 otherwise.
   */

  template <typename T>
  static int binarySearch(T target, std::vector<T> arr)
  {
    if (arr.size() <= 0)
      return -1;
    int low = 0,
        high = arr.size() - 1,
        mid = high / 2,
        result = -1;
    while (low <= high)
    {
      if (arr[mid] == target)
      {
        result = mid;
        break;
      }
      else if (arr[mid] > target)
        high = mid - 1;
      else
        low = mid + 1;
      mid = (low + high) / 2;
    }
    return result;
  }

} // namespace Search

#endif /* BINARY_SEARCH_HPP */
