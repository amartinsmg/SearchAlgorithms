#include <cassert>

/**
  @brief Performs a binary search on a sorted array to find a target value.
  @tparam T The type of the elements in the array.
  @param target The target value to search for.
  @param arr The sorted array to search in.
  @param length The length of the array.
  @return The index of the target value in the array if found, -1 otherwise.
*/

template <typename T>
int binarySearch(T target, T *arr, int length)
{
  int low = 0,
      high = length - 1,
      mid = high / 2,
      result = -1;
  assert(length > 0);
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
