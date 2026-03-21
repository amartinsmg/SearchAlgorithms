#ifndef META_BINARY_SEARCH_HPP
#define META_BINARY_SEARCH_HPP

#include <algorithm>
#include <vector>
#include <cmath>

namespace Search
{
  /**
   * @brief Performs a meta binary search on a sorted vector to find a target value.
   * @tparam T The type of the elements in the vector.
   * @param target The target value to search for.
   * @param arr The sorted vector to search in.
   * @return The index of the target value in the vector if found, -1 otherwise.
   */

  template <typename T>
  static int metaBinarySearch(T target, std::vector<T> arr)
  {
    if (arr.size() <= 0)
      return -1;
    int i, high, mid, step,
        length = arr.size(),
        low = 0,
        result = -1;
    step = (int)round(sqrt((double)length));
    for (i = step; i < length && arr[i] < target; i += step)
      low = i;
    high = std::min(length - 1, i);
    while (low <= high)
    {
      mid = (low + high) / 2;
      if (arr[mid] == target)
      {
        result = mid;
        break;
      }
      else if (arr[mid] > target)
        high = mid - 1;
      else
        low = mid + 1;
    }
    return result;
  }

} // namespace Search

#endif /* META_BINARY_SEARCH_HPP */
