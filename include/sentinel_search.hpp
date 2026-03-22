#ifndef SENTINEL_SEARCH_HPP
#define SENTINEL_SEARCH_HPP

#include <vector>

namespace Search {
/**
 * @brief Performs a sentinel linear search on a sorted vector to find a target
 * value.
 * @tparam T The type of the elements in the vector.
 * @param arr The sorted vector to search in.
 * @param target The target value to search for.
 * @return The index of the target value in the vector if found, -1 otherwise.
 */

template <typename T> static int sentinelSearch(std::vector<T> arr, T target) {
  if (arr.size() == 0)
    return -1;
  int i, length = arr.size(), result = -1;
  T last;
  last = arr[length - 1];
  arr[length - 1] = target;
  i = 0;
  while (arr[i] != target)
    i++;
  if (i < length - 1 || last == target)
    result = i;
  arr[length - 1] = last;
  return result;
}

} // namespace Search

#endif /* SENTINEL_SEARCH_HPP */
