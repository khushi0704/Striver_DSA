class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        string ans="";
        
        for(int i=n-1;i>=0;i--){
            // odd number encounters
            if((int(num[i]))%2==1){
                ans+=num[i];
            }
            else{
                if(!ans.empty()){
                    ans+=num[i];
                }
                else{
                    continue;
                }
            }
            // not an odd number , skip to 
        }
        reverse(ans.begin(),ans.end());
    return ans;
    }  
};