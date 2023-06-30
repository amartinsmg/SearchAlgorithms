#include <cassert>

template <typename T>
int linearSearch(T target, T *arr, int length)
{
  int i, result = -1;
  assert(length > 0);
  for (i = 0; i < length; i++)
    if (arr[i] == target)
    {
      result = i;
      break;
    }
  return result;
}
