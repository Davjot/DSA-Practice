class Solution {
private:
    int lower_bound(vector <int>& nums, int start, int end, int target){
        while(start <= end){
            int mid = (start + end) >> 1; // generally means divide by 2
            if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return start;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // we use binary search to return the TC to O(logn)
        int start = 0;
        int end = nums.size() - 1;
        int startPosition = lower_bound(nums, start, end, target);
        int endPosition = lower_bound(nums, start, end, target + 1) - 1;
        
        if(startPosition < nums.size() && nums[startPosition] == target){
            return {startPosition, endPosition};
        }
        return {-1, -1};
    }
};
