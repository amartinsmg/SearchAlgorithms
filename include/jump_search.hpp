#ifndef JUMP_SEARCH_HPP
#define JUMP_SEARCH_HPP

#include <algorithm>
#include <cmath>
#include <vector>

namespace Search {
/**
 * @brief Performs a jump search on a sorted vector to find a target value.
 * @tparam T The type of the elements in the vector.
 * @param arr The sorted vector to search in.
 * @param target The target value to search for.
 * @return The index of the target value in the vector if found, -1 otherwise.
 */

template <typename T> static int jumpSearch(std::vector<T> arr, T target) {
  if (arr.size() == 0)
    return -1;
  int i, high, step, length = arr.size(), low = 0, result = -1;
  step = (int)round(sqrt((double)length));
  for (i = step; i < length && arr[i] < target; i += step)
    low = i;
  high = std::min(length, i);
  for (i = low; i < high; i++)
    if (arr[i] == target) {
      result = i;
      break;
    }
  return result;
}

} // namespace Search

#endif /* JUMP_SEARCH_HPP */
