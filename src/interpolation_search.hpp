#include <cassert>

template <typename T>
int interpolationSearch(T target, T *arr, int length)
{
  int low = 0,
      high = length - 1,
      pos,
      result = -1;
  assert(length > 0);
  while (low <= high && arr[low] <= target && arr[high] >= target)
  {
    pos = arr[low] < arr[high] ? low + (high - low) * (int)((target - arr[low]) / (arr[high] - arr[low])) : low;
    if (arr[pos] == target)
    {
      result = pos;
      break;
    }
    else if (arr[pos] > target)
      high = pos - 1;
    else
      low = pos + 1;
  }
  return result;
}
