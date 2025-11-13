int binarySearch(int* nums, int numsSize, int target, int findFirst) {
    int left = 0, right = numsSize - 1;
    int index = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            index = mid;
            // keep searching left or right depending on which position we want
            if (findFirst)
                right = mid - 1;   // move left for first occurrence
            else
                left = mid + 1;    // move right for last occurrence
        }
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return index;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    result[0] = binarySearch(nums, numsSize, target, 1);  // find first
    result[1] = binarySearch(nums, numsSize, target, 0);  // find last
    
    return result;
}
