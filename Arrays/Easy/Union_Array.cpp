// USING SET SINCE SET STORES UNIQUE ELEMENTS IN A SORTED MANNER
#include <set>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    set<int> s;
    int n = a.size();
    int m = b.size();
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int j=0;j<m;j++){
        s.insert(b[j]);
    }
    vector<int> v;
    for (auto& it : s) {
        v.push_back(it);
    }
    return v;
}

// TWO POINTERS
