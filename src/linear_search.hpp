#include <iostream>
#include <cassert>

template <typename T>
int linearSearch(T item, T *values, int length)
{
  int i, result = -1;
  assert(length > 0);
  for (i = 0; i < length; i++)
    if (values[i] == item)
    {
      result = i;
      break;
    }
  return result;
}
