// 49/50 testcases passed
vector<int> v;
vector<int> generateFibonacciNumbers(int n) {
    if(n==1){
        v.push_back(0);
        return v;
    }
    if(n==2){
        v.push_back(0);
        v.push_back(1);
        return v;
    }
    v=generateFibonacciNumbers(n-1); // reinitializing again and again
    int ele = v[n-3]+v[n-2];
    v.push_back(ele);
    return v;
}

// alternative (50/50 testcases passed)
void ans (int n, vector<int> &v){
    if(n==1){
        v.push_back(0);
        return;
    }
    if(n==2){
        v.push_back(0);
        v.push_back(1);
        return;
    }
    ans(n-1,v);
    v.push_back(v[n-3]+v[n-2]);
    return;
}

vector<int> generateFibonacciNumbers(int n) {

    vector<int> v;
    ans(n,v);
    return v;
}