#ifndef EXPONENTIAL_SEARCH_HPP
#define EXPONENTIAL_SEARCH_HPP

#include <algorithm>
#include <vector>

namespace Search {
/**
 * @brief Performs a exponential on a sorted vector to find a target value.
 * @tparam T The type of the elements in the vector.
 * @param arr The sorted vector to search in.
 * @param target The target value to search for.
 * @return The index of the target value in the vector if found, -1 otherwise.
 */

template <typename T>
static int exponentialSearch(std::vector<T> arr, T target) {
  int high, i, mid, length = arr.size(), low = 0, result = -1;
  for (i = 1; i < length && arr[i - 1] < target; i *= 2)
    low = i - 1;
  high = std::min(i, length) - 1;
  while (low <= high) {
    mid = (low + high) / 2;
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

#endif /* EXPONENTIAL_SEARCH_HPP */
