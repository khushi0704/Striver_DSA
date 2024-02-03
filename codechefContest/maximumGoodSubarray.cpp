class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        // brute force 
        int n = nums.size();
        // find out the minimum element in the array
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<min){
                min=nums[i];
            }
        }
        int max = LLONG_MIN; 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // absolute differenece
                int sum=0;
                if(abs(nums[j])-abs(nums[i])!=k){
                    continue;
                }
                for(int m=i;m<=j;m++){
                    sum+=nums[m];
                }
                if(sum>max){
                    max=sum;
                }
            }
        }
        return max;
    }
};