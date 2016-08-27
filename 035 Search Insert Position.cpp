class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        NumVec = nums;
        return BinarySearchPos (0, nums.size() - 1, target);
    }
    
private:
    int BinarySearchPos (int low, int high, int target) { //return insertion position (index)
        int mid = (high + low) / 2;
        if (high < low)
            return low;
        else if (NumVec[mid] >= target)
            return BinarySearchPos (low, mid - 1, target);
        else //if (NumVec[mid] < target) 
            return BinarySearchPos (mid + 1, high, target);
    }
    
    vector<int> NumVec;
};