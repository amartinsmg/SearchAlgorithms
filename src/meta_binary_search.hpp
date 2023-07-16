#include <algorithm>
#include <cassert>
#include <cmath>

#ifndef META_BINARY_SEARCH_HPP
#define META_BINARY_SEARCH_HPP

/**
  @brief Performs a meta binary search on a sorted array to find a target value.
  @tparam T The type of the elements in the array.
  @param target The target value to search for.
  @param arr The sorted array to search in.
  @param length The length of the array.
  @return The index of the target value in the array if found, -1 otherwise.
*/

template <typename T>
int metaBinarySearch(T target, T *arr, int length)
{
  int i, high, mid, step,
      low = 0,
      result = -1;
  assert(length > 0);
  step = (int)round(sqrt((double)length));
  for (i = step; i < length && arr[i] < target; i += step)
    low = i;
  high = std::min(length, i);
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

#endif /* META_BINARY_SEARCH_HPP */