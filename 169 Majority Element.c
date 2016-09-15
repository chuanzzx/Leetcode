int majorityElement(int* nums, int numsSize) {
    int cnt = 1, major = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == major)
            cnt++;
        else if (--cnt < 0) {
                major = nums[i];
                cnt = 1;
        }
    }
    return major;
}