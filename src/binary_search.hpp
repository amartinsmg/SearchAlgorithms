#ifndef BINARY_SEARCH_HPP
#define BINARY_SEARCH_HPP

/**
 * @brief Performs a binary search on a sorted array to find a target value.
 * @tparam T The type of the elements in the array.
 * @param target The target value to search for.
 * @param arr The sorted array to search in.
 * @param length The length of the array.
 * @return The index of the target value in the array if found, -1 otherwise.
 */

template <typename T>
static int binarySearch(T target, T *arr, int length)
{
  if (length <= 0 || arr == nullptr)
    return -1;
  int low = 0,
      high = length - 1,
      mid = high / 2,
      result = -1;
  while (low <= high)
  {
    if (arr[mid] == target)
    {
      result = mid;
      break;
    }
    else if (arr[mid] > target)
      high = mid - 1;
    else
      low = mid + 1;
    mid = (low + high) / 2;
  }
  return result;
}

#endif /* BINARY_SEARCH_HPP */
