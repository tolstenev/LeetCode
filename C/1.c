#include <stdio.h>
#include <stdlib.h>

// Given an array of integers nums and an integer target,
// return indices of the two numbers such that they add up to target.

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  int *returnArray = NULL;
  char stopFlag = 0;
  int tmp_i;
  for (int i = 0; i != numsSize && !stopFlag; ++i) {
    tmp_i = nums[i];
    for (int j = 1; j != numsSize && i != j; ++j) {
      if (tmp_i + nums[j] == target) {
        returnArray = (int *) malloc(2 * sizeof(int));
        if (NULL != returnArray) {
          returnArray[0] = i;
          returnArray[1] = j;
          *returnSize = 2;
        }
        stopFlag = 1;
        break;
      }
    }
  }
  return returnArray;
}

int main(void) {
//  int array1[] = {2, 7, 11, 15};
//  int returnSize1 = 0;
//
//  int *resultArray1 = twoSum(array1, 4, 9, &returnSize1);
//
//  printf("%d %d\n", resultArray1[0], resultArray1[1]);
//
//  free(resultArray1);

//  int array2[] = {3, 2, 4};
//  int returnSize2 = 0;
//
//  int *resultArray2 = twoSum(array2, 3, 6, &returnSize2);
//
//  printf("%d %d\n", resultArray2[0], resultArray2[1]);
//
//  free(resultArray2);

  int array3[] = {3, 3};
  int returnSize3 = 0;

  int *resultArray3 = twoSum(array3, 2, 6, &returnSize3);

  printf("%d %d\n", resultArray3[0], resultArray3[1]);

  free(resultArray3);
  return 0;
}