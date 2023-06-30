#include <cassert>

template <typename T>
int binarySearch(T target, T *values, int length)
{
  int low = 0,
      high = length - 1,
      mid = high / 2,
      result = -1;
  assert(length > 0);
  while (low <= high)
  {
    if (values[mid] == target)
    {
      result = mid;
      break;
    }
    else if (values[mid] > target)
      high = mid - 1;
    else
      low = mid + 1;
    mid = (low + high) / 2;
  }
  return result;
}
