#include <cassert>

template <typename T>
int exponential_search(T item, T *values, int length)
{
  int low = 0, high, mid, result = -1;
  assert(length > 0);
  for (high = 1; high < length && values[high - 1] < item; high *= 2)
    low = high - 1;
  if (high > length)
    high = length - 1;
  else
    high--;
  while (result == -1 && low <= high)
  {
    mid = (low + high) / 2;
    if (values[mid] == item)
      result = mid;
    else if (values[mid] > item)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return result;
}