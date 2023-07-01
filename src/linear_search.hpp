#include <cassert>

/**
  @brief Performs a linear search on a sorted array to find a target value.
  @tparam T The type of the elements in the array.
  @param target The target value to search for.
  @param arr The sorted array to search in.
  @param length The length of the array.
  @return The index of the target value in the array if found, -1 otherwise.
*/

template <typename T>
int linearSearch(T target, T *arr, int length)
{
  int i, result = -1;
  assert(length > 0);
  for (i = 0; i < length; i++)
    if (arr[i] == target)
    {
      result = i;
      break;
    }
  return result;
}
