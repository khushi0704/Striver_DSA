class Solution {
public:
    string triangleType(vector<int>& nums) {
        
        if(nums[0]==nums[1] && nums[1]==nums[2]){
            return "equilateral";
        }
        else if(nums[0]==nums[1] || nums[1]==nums[2] || nums[0]==nums[2]){
                if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1]){
                return "isosceles";
            }
            else{
                return "none";
            }
        }
        else{
            // scalene 
            // check whether it can form a traingle or not
            if(nums[0]+nums[1]>nums[2] && nums[1]+nums[2]>nums[0] && nums[0]+nums[2]>nums[1]){
                return "scalene";
            }
            else{
                return "none";
            }
        }
        
    }
};