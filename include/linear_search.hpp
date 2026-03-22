#ifndef LINEAR_SEARCH_HPP
#define LINEAR_SEARCH_HPP

#include <vector>

namespace Search {
/**
 * @brief Performs a linear search on a sorted vector to find a target value.
 * @tparam T The type of the elements in the vector.
 * @param arr The sorted vector to search in.
 * @param target The target value to search for.
 * @return The index of the target value in the vector if found, -1 otherwise.
 */

template <typename T> static int linearSearch(std::vector<T> arr, T target) {
  int i, length = arr.size(), result = -1;
  for (i = 0; i < length; i++)
    if (arr[i] == target) {
      result = i;
      break;
    }
  return result;
}

} // namespace Search

#endif /* LINEAR_SEARCH_HPP */
