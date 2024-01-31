//BRUTE FORCE
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n = nums.size();
        for(int k=1;k<=n;k++){
            if(nums[k-1]!=i){
                return i;
            }
            i++;
        }
        return i;
    } 
};

// HASH VECTOR TO STORE FREQ OF ELEMENTS 
// IF ANY OF THE NUMBER FREQ IS 0 WE KNOW THAT IT IS MISSING NUMBER 
// AND WE WILL RETURN THAT INDEX
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N=nums.size();
        vector<int> hash(N + 1, 0);  
        for(int i=0;i<N;i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<=N;i++){
            if(hash[i]==0){
                return i;
            }
        }
        return -1;
    }
};

//SUMMATION OF N NATURAL NUMBERS S1 (N(N-1)/2)
// SUMMATION OF ARRAY ELEMENTS S2
// MISSING NUMBER = S1-S2