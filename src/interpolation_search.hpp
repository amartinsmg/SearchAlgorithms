#include <cassert>

template <typename T>
int interpolationSearch(T target, T *values, int length)
{
  int low = 0,
      high = length - 1,
      pos,
      result = -1;
  assert(length > 0);
  while (low <= high && values[low] <= target && values[high] >= target)
  {
    pos = values[low] < values[high] ? low + (high - low) * (int)((target - values[low]) / (values[high] - values[low])) : low;
    if (values[pos] == target)
    {
      result = pos;
      break;
    }
    else if (values[pos] > target)
      high = pos - 1;
    else
      low = pos + 1;
  }
  return result;
}
