 string com_prefix(string out1,string out2){
        string out="";
        for(int i=0;i<min(out1.length(),out2.length());i++){
            if(out1[i]!=out2[i]){
                break;
            }
            else{
                out.push_back(out1[i]);
            }
        }
        return out;
    }
string commonPrefix(vector<string> &arr, int n)
    {
        string prefix = arr[0];
        for(int i = 1;i<n;i++){
            prefix = com_prefix(prefix,arr[i]);
            if(prefix==""){
                return "-1";
            }
        }
        return prefix;
}

// EFFICIENT SOLUTION

string commonPrefix(vector<string> &arr, int n)
    {
       sort(arr.begin(),arr.end());
       string first = arr[0];
       string last = arr[n-1];

       string ans="";
       for(int i=0;i<first.length();i++){
           if(first[i]!=last[i]){
               break;
           }
           else{
               ans.push_back(first[i]);
           }
       }
       if(ans==""){
           return "-1";
       }
       return ans;
}