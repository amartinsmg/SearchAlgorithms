#include <cassert>
#include <cmath>

template <typename T>
int jump_search(T item, T *values, int length)
{
  int i,
      step = (int)floor(sqrt((double)length)),
      prev = 0,
      result = -1;
  assert(length > 0);
  for (i = step; i < length && values[i] < item; i += step)
  {
    prev = i;
  }
  while (prev <= i && prev < length)
  {
    if (values[prev] == item)
    {
      result = prev;
      break;
    }
    prev++;
  }
  return result;
}