// APPROACH 1 : USING MAPS / HASHING O(N) TAKES EXTRA SPACE

#include <unordered_map>
int majorityElement(vector<int> v) {
	// use hash map to store frequency
	int n = v.size();
	unordered_map <int,int> mpp;
	for(int i=0;i<n;i++){
		mpp[v[i]]++;
	}
    for(auto i:mpp){
		if(i.second > n/2){
			return i.first;
		}
	}
	return -1;
}

// APPROACH 2 : USING NESTED LOOPS 
// APPROACH 3 : MOOREY'S VOTING ALGORITHM : O)N) O(1)

#include <unordered_map>
int majorityElement(vector<int> v) {
	//MOOREY'S VOTING ALGORITHM
	int ele=0;
	int cnt=0;
	for(int i:v){
		if(cnt==0){
			ele=i;
		}
		if(i==ele){
			cnt++;
		}
		else{
			cnt--;
		}
	}
	return ele;
}
