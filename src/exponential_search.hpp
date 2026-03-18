#ifndef EXPONENTIAL_SEARCH_HPP
#define EXPONENTIAL_SEARCH_HPP

#include <algorithm>

/**
 * @brief Performs a exponential search on a sorted array to find a target value.
 * @tparam T The type of the elements in the array.
 * @param target The target value to search for.
 * @param arr The sorted array to search in.
 * @param length The length of the array.
 * @return The index of the target value in the array if found, -1 otherwise.
 */

template <typename T>
static int exponentialSearch(T target, T *arr, int length)
{
  if (length <= 0 || arr == nullptr)
    return -1;
  int high, i, mid,
      low = 0,
      result = -1;
  for (i = 1; i < length && arr[i - 1] < target; i *= 2)
    low = i - 1;
  high = std::min(i, length) - 1;
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

#endif /* EXPONENTIAL_SEARCH_HPP */
