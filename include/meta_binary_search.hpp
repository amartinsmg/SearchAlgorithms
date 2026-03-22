#ifndef META_BINARY_SEARCH_HPP
#define META_BINARY_SEARCH_HPP

#include <algorithm>
#include <cmath>
#include <vector>

namespace Search {
/**
 * @brief Performs a meta binary search on a sorted vector to find a target
 * value.
 * @tparam T The type of the elements in the vector.
 * @param arr The sorted vector to search in.
 * @param target The target value to search for.
 * @return The index of the target value in the vector if found, -1 otherwise.
 */

template <typename T>
static int metaBinarySearch(std::vector<T> arr, T target) {
  if (arr.size() == 0)
    return -1;
  int i, high, mid, step, length = arr.size(), low = 0, result = -1;
  step = (int)round(sqrt((double)length));
  for (i = step; i < length && arr[i] < target; i += step)
    low = i;
  high = std::min(length - 1, i);
  mid = (low + high) / 2;
  while (low <= high) {
    if (arr[mid] == target) {
      result = mid;
      break;
    } else if (arr[mid] > target)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return result;
}

} // namespace Search

#endif /* META_BINARY_SEARCH_HPP */
