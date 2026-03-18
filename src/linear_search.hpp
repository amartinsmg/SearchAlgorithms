#ifndef LINEAR_SEARCH_HPP
#define LINEAR_SEARCH_HPP

/**
  @brief Performs a linear search on a sorted array to find a target value.
  @tparam T The type of the elements in the array.
  @param target The target value to search for.
  @param arr The sorted array to search in.
  @param length The length of the array.
  @return The index of the target value in the array if found, -1 otherwise.
*/

template <typename T>
static int linearSearch(T target, T *arr, int length)
{
  if (length <= 0 || arr == nullptr)
    return -1;
  int i, result = -1;
  for (i = 0; i < length; i++)
    if (arr[i] == target)
    {
      result = i;
      break;
    }
  return result;
}

#endif /* LINEAR_SEARCH_HPP */
