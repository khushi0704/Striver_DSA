vector<int> reverseArray(int n, vector<int> &nums)
{
    if(n==0){
        return {};
    }
    int ele = nums.back();
    nums.pop_back();
    vector<int>v=reverseArray(n-1,nums);
    v.insert(v.begin(),ele);
    return v;
}
