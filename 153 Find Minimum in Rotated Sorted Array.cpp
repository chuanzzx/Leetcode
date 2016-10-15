class Solution {
public:
    int findMin(vector<int>& n) {
        if (n.size() == 1)
            return n[0];
       
        int left = 0, right = n.size() - 1;
        int mid = (left + right) / 2;
        while (left < right) {
            if (n[mid] < n[mid - 1])
                return n[mid];
            
            if (n[left] > n[right]) 
                left++; // if we set "left = mid", the case [5,1,2,3,4] will be failed.
            else //n[left]~n[right] is sorted.
                right = mid;
            
            if (left + 1 == right)
                return (n[left] < n[right]) ? n[left] : n[right];
            else
                mid = (left + right) / 2;
        }
        return n[left];
    }
};