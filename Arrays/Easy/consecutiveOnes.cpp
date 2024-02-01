class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
        int max=INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                cnt=0;
            }
            if(cnt>max){
                max=cnt;
            }
        }
        return max;
    }
};

// CODING NINJAS 
// IF THERE IS A CORRUPT 
int traffic(int n, int m, vector<int> vehicle) {
	int i=0;
	int j=0;
	int cntzero=0;
	int ans=INT_MIN;
	while(j<n){
		if(vehicle[j]==0){
			cntzero++;
		}
		while(cntzero>m){
			if(vehicle[i]==0){
				cntzero--;
			}
			i++;
		}
		ans=max(ans,j-i+1);
		j++;
	}
	return ans;
}
