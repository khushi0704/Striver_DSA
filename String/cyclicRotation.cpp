int isCyclicRotation(string &p, string &q) 
{
    // BRUTE FORCE 
    // TRY ALL POSSIBLE COMBINATIONS
    int n = p.length();
    for(int i = 0 ; i<n;i++){
        // NUMBER OF CYCLIC ROTATIONS 
        if(p==q){
            return true;
        }
        // rotation 
        // last character to first and then shift all forward one step 
        char last = p[n-1];
        for(int j=n-2;j>=0;j--){
            p[j+1]=p[j];
        }
        p[0]=last;
    }
    return false;
}

// OPTIMISED SOLUTION 
int isCyclicRotation(string &p, string &q) 
{
    // Concatenate p with itself
    string concatenated = p + p;
    // Check if q is a substring of the concatenated string
    if (concatenated.find(q) != string::npos) {
        return true;
    }
    return false;
}