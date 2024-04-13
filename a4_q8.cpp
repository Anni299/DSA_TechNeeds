class Solution {
    public:
    int binary_search(vector<int>& nums, int low, int high, int target){
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int startingPosition = binary_search(nums, low, high, target);
        int endingPosition = binary_search(nums, low, high, target + 1) - 1;
        
        if(startingPosition < nums.size() && nums[startingPosition] == target){
            return {startingPosition, endingPosition};
        }
        
        return {-1, -1};
    }
};
