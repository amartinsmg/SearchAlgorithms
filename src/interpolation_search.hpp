#include <cassert>

template <typename T>
int interpolation_search(T item, T *values, int length)
{
  int low = 0,
      high = length - 1,
      pos,
      result = -1;
  assert(length > 0);
  while (result == -1 && low <= high)
  {
    pos = low + (high - low) * (int)((item - values[low]) / (values[high] - values[low]));
    if (values[pos] == item)
      result = pos;
    else if (values[pos] > item)
      high = pos - 1;
    else
      low = pos + 1;
  }
  return result;
}
