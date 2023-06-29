#include <cassert>

template <typename T>
int binary_search(T item, T *values, int length)
{
  int low = 0,
      high = length - 1,
      mid = high / 2,
      result = -1;
  assert(length > 0);
  while (result == -1 && low <= high)
  {
    if (values[mid] == item)
      result = mid;
    else if (values[mid] > item)
      high = mid - 1;
    else
      low = mid + 1;
    mid = (low + high) / 2;
  }

  return result;
}
