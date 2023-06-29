#include <iostream>
#include <cassert>
#include <cmath>

template <typename T>
int jump_search(T item, T *values, int length)
{
  int i = 0,
      step = (int)floor(sqrt((double)length)),
      prev = 0,
      result = -1;
  assert(length > 0);

  while (values[i] < item && i < length)
  {
    prev = i;
    i += step;
  }

  while (++prev < i)
    if (values[prev] == item)
      result = prev;

  return result;
}