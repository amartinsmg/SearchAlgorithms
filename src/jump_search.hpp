#include <algorithm>
#include <cassert>
#include <cmath>

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
