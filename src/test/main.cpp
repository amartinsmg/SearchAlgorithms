#include <iostream>
#include <cassert>
#include <binary_search.hpp>
#include <exponential_search.hpp>
#include <interpolation_search.hpp>
#include <jump_search.hpp>
#include <linear_search.hpp>

#define NUM 127

int main()
{
  int arr1[NUM] = {2, 2, 2, 2, 4, 5, 6, 6, 6, 7, 7, 8, 8, 8, 9,
                   10, 10, 11, 12, 13, 15, 18, 20, 22, 24, 24,
                   25, 25, 26, 27, 28, 28, 30, 31, 32, 32, 33,
                   34, 34, 35, 35, 36, 36, 37, 38, 38, 38, 41,
                   42, 42, 43, 44, 45, 46, 46, 48, 49, 49, 50,
                   50, 51, 52, 52, 54, 54, 55, 55, 56, 56, 57,
                   57, 59, 59, 62, 62, 65, 66, 68, 68, 71, 72,
                   72, 73, 74, 74, 74, 75, 75, 75, 75, 77, 78,
                   78, 79, 80, 80, 80, 81, 83, 84, 84, 85, 85,
                   86, 87, 87, 87, 89, 90, 90, 92, 92, 93, 93,
                   93, 94, 95, 95, 95, 96, 97, 97, 98, 99, 99,
                   99, 100};
  double arr2[NUM] = {2.14, 2.39, 5.31, 7.09, 8.3, 8.9, 9.47, 9.85, 9.87,
                      10, 10.48, 11.36, 12.62, 12.74, 12.78, 14.15, 14.48,
                      14.79, 16.03, 16.32, 16.54, 16.73, 16.84, 17.36,
                      17.52, 17.93, 19.73, 19.94, 19.98, 20.75, 22.64,
                      22.94, 23.72, 25.36, 25.75, 26.35, 26.66, 27.79,
                      28.33, 30.14, 30.42, 30.93, 31.01, 31.14, 32.56,
                      32.63, 33.73, 34.21, 34.67, 35, 35.26, 35.27, 35.71,
                      39.45, 40.6, 43.56, 43.86, 44.11, 45.05, 47.16,
                      47.78, 48.3, 49.54, 49.99, 50.63, 50.64, 51.79,
                      52.23, 53.23, 53.49, 53.79, 54.21, 56.26, 57.3,
                      57.56, 57.98, 58.23, 61.53, 62.19, 63.68, 64.6,
                      65.44, 66.92, 66.95, 66.96, 68.33, 70.14, 70.19,
                      70.94, 71.14, 71.22, 71.47, 71.57, 71.68, 71.68,
                      71.92, 72.22, 74.32, 74.38, 75.24, 76.11, 76.39,
                      78.2, 78.67, 80.01, 80.57, 81.09, 83.35, 83.77,
                      86.32, 89.49, 89.65, 90.52, 91.8, 92.51, 92.54,
                      92.7, 94.77, 95.92, 96.99, 97, 97.49, 97.84, 97.9,
                      98.02, 99.35, 99.47};
  long long arr3[NUM] = {1, 1, 16, 16, 16, 16, 16, 25, 25, 64, 81, 81, 81,
                         100, 121, 144, 144, 144, 169, 169, 169, 169, 225,
                         289, 324, 361, 361, 400, 441, 441, 441, 441, 576,
                         625, 676, 729, 729, 841, 841, 900, 900, 1024, 1024,
                         1156, 1296, 1296, 1296, 1296, 1369, 1600, 1600,
                         1681, 1681, 1764, 1936, 1936, 1936, 1936, 2025,
                         2025, 2025, 2025, 2025, 2116, 2209, 2304, 2304,
                         2401, 2401, 2401, 2500, 2601, 2809, 3025, 3249,
                         3249, 3364, 3481, 3481, 3481, 3600, 3969, 3969,
                         3969, 4096, 4761, 4900, 5041, 5041, 5041, 5184,
                         5329, 5329, 5476, 5476, 5476, 5476, 5625, 5776,
                         5929, 6084, 6241, 6241, 6400, 6561, 6724, 6724,
                         6889, 6889, 7396, 7569, 7569, 7569, 7921, 8100,
                         8281, 8649, 8836, 8836, 9025, 9025, 9216, 9216,
                         9216, 9604, 10000, 10000};

  assert(linearSearch<int>(37, arr1, NUM) == 43);
  assert(linearSearch<int>(100, arr1, NUM) == 126);
  assert(linearSearch<double>(34.21, arr2, NUM) == 47);
  assert(linearSearch<double>(2.14, arr2, NUM) == 0);
  assert(linearSearch<long long>(4900, arr3, NUM) == 86);
  assert(linearSearch<long long>(2600, arr3, NUM) == -1);

  assert(binary_search<int>(37, arr1, NUM) == 43);
  assert(binary_search<int>(100, arr1, NUM) == 126);
  assert(binary_search<double>(34.21, arr2, NUM) == 47);
  assert(binary_search<double>(2.14, arr2, NUM) == 0);
  assert(binary_search<long long>(4900, arr3, NUM) == 86);
  assert(binary_search<long long>(2600, arr3, NUM) == -1);

  assert(jump_search<int>(37, arr1, NUM) == 43);
  assert(jump_search<int>(100, arr1, NUM) == 126);
  assert(jump_search<double>(34.21, arr2, NUM) == 47);
  assert(jump_search<double>(2.14, arr2, NUM) == 0);
  assert(jump_search<long long>(4900, arr3, NUM) == 86);
  assert(jump_search<long long>(2600, arr3, NUM) == -1);

  assert(exponential_search<int>(37, arr1, NUM) == 43);
  assert(exponential_search<int>(100, arr1, NUM) == 126);
  assert(exponential_search<double>(34.21, arr2, NUM) == 47);
  assert(exponential_search<double>(2.14, arr2, NUM) == 0);
  assert(exponential_search<long long>(4900, arr3, NUM) == 86);
  assert(exponential_search<long long>(2600, arr3, NUM) == -1);

  assert(interpolation_search<int>(37, arr1, NUM) == 43);
  assert(interpolation_search<int>(100, arr1, NUM) == 126);
  assert(interpolation_search<double>(34.21, arr2, NUM) == 47);
  assert(interpolation_search<double>(2.14, arr2, NUM) == 0);
  assert(interpolation_search<long long>(4900, arr3, NUM) == 86);
  assert(interpolation_search<long long>(2600, arr3, NUM) == -1);

  std::cout << "Passed all tests successfully!\n";

  return 0;
}
