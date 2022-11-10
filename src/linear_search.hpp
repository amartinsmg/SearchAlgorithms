#include <iostream>

template <typename T>
int linearSearch(T item, T *values, int lenght)
{
  int i, result = -1;
  for (i = 0; i < lenght; i++)
    if (values[i] == item)
    {
      result = i;
      break;
    }
  return result;
}
