#include <cassert>

#ifndef INTERPOLATION_SEARCH_HPP
#define INTERPOLATION_SEARCH_HPP

/**
  @brief Performs a interpolation search on a sorted array to find a target value.
  @tparam T The type of the elements in the array.
  @param target The target value to search for.
  @param arr The sorted array to search in.
  @param length The length of the array.
  @return The index of the target value in the array if found, -1 otherwise.
*/

template <typename T>
int interpolationSearch(T target, T *arr, int length)
{
  int low = 0,
      high = length - 1,
      pos,
      result = -1;
  assert(length > 0);
  while (low <= high && arr[low] <= target && arr[high] >= target)
  {
    pos = arr[low] < arr[high] ? low + (high - low) * (int)((target - arr[low]) / (arr[high] - arr[low])) : low;
    if (arr[pos] == target)
    {
      result = pos;
      break;
    }
    else if (arr[pos] > target)
      high = pos - 1;
    else
      low = pos + 1;
  }
  return result;
}

#endif /* INTERPOLATION_SEARCH_HPP */
