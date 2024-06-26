class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int N = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        
        for(int first = 0; first < N-3; first++){
            if(first > 0 && nums[first] == nums[first-1]) continue;
            for(int second = first+1; second < N-2; second++){
                if(second > first+1 && nums[second] == nums[second-1]) continue;
                int left = second+1, right = N-1;
                int curTarget = target - nums[first] - nums[second];

                while(left < right){
                    if(nums[left] + nums[right] == curTarget){
                        ans.push_back({nums[first], nums[second], nums[left], nums[right]});
                        while(left < right && nums[left] == nums[left+1]) left++;
                        while(left < right && nums[right] == nums[right-1]) right--;
                        left++;
                        right--;
                    }else if(nums[left] + nums[right] < curTarget){
                        left++;
                    }else{
                        right--;
                    }
                }
            }
        }
        
        return ans;
    }
};
