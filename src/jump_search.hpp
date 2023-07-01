#include <algorithm>
#include <cassert>
#include <cmath>

/**
  @brief Performs a jump search on a sorted array to find a target value.
  @tparam T The type of the elements in the array.
  @param target The target value to search for.
  @param arr The sorted array to search in.
  @param length The length of the array.
  @return The index of the target value in the array if found, -1 otherwise.
*/

template <typename T>
int jumpSearch(T target, T *arr, int length)
{
  int i, high, step,
      low = 0,
      result = -1;
  assert(length > 0);
  step = (int)round(sqrt((double)length));
  for (i = step; i < length && arr[i] < target; i += step)
    low = i;
  high = std::min(length, i);
  for (i = low; i < high; i++)
    if (arr[i] == target)
    {
      result = i;
      break;
    }
  return result;
}
