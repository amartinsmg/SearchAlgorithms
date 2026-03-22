#ifndef INTERPOLATION_SEARCH_HPP
#define INTERPOLATION_SEARCH_HPP

#include <vector>

namespace Search {
/**
 * @brief Performs a interpolation search on a sorted vector to find a target
 * value.
 * @tparam T The type of the elements in the vector.
 * @param target The target value to search for.
 * @param arr The sorted vector to search in.
 * @return The index of the target value in the vector if found, -1 otherwise.
 */

template <typename T>
static int interpolationSearch(std::vector<T> arr, T target) {
  int low = 0, high = arr.size() - 1, pos, result = -1;
  while (low <= high && arr[low] <= target && arr[high] >= target) {
    pos = arr[low] < arr[high]
              ? low + (high - low) *
                          (int)((target - arr[low]) / (arr[high] - arr[low]))
              : low;
    if (arr[pos] == target) {
      result = pos;
      break;
    } else if (arr[pos] > target)
      high = pos - 1;
    else
      low = pos + 1;
  }
  return result;
}

} // namespace Search

#endif /* INTERPOLATION_SEARCH_HPP */
