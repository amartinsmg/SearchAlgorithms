#include <cassert>

#ifndef SENTINEL_LINEAR_SEARCH_HPP
#define SENTINEL_LINEAR_SEARCH_HPP

/**
  @brief Performs a sentinel linear search on a sorted array to find a target value.
  @tparam T The type of the elements in the array.
  @param target The target value to search for.
  @param arr The sorted array to search in.
  @param length The length of the array.
  @return The index of the target value in the array if found, -1 otherwise.
*/

template <typename T>
int sentinelLinearSearch(T target, T *arr, int length)
{
  int i, result = -1;
  T last;
  assert(length > 0);
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

#endif /* SENTINEL_LINEAR_SEARCH_HPP */
