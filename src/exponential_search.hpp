#include <algorithm>
#include <cassert>

template <typename T>
int exponentialSearch(T target, T *values, int length)
{
  int high, i, mid,
      low = 0,
      result = -1;
  assert(length > 0);
  for (i = 1; i < length && values[i - 1] < target; i *= 2)
    low = i - 1;
  high = std::min(i, length) - 1;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (values[mid] == target)
    {
      result = mid;
      break;
    }
    else if (values[mid] > target)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return result;
}