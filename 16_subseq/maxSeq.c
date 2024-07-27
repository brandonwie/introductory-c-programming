#include <stddef.h>

size_t maxSeq(int *array, size_t n)
{
  if (n == 0)
  {
    return 0;
  }

  int maxSeq = 1;
  int currentSeq = 1;

  for (size_t i = 1; i < n; i++)
  {
    if (array[i] > array[i - 1])
    {
      currentSeq++;
    }
    else
    {

      if (currentSeq > maxSeq)
      {
        // update maxSeq before resetting currentSeq
        maxSeq = currentSeq;
      }
      currentSeq = 1;
    }
  }

  // to handle the case where the last element is part of the longest sequence
  if (currentSeq > maxSeq)
  {
    maxSeq = currentSeq;
  }

  return maxSeq;
}
