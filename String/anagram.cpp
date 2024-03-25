// O(N+M)
bool isAnagram(string str1, string str2)
{
    // FREQUENCY ARRAY
    int freq[27]={0};
    for(int i=0;i<str1.length();i++){
        // increment by one
        char c1=str1[i];
        freq[c1-'a']+=1;
    }
    for(int i=0;i<str2.length();i++){
        //decrement by one
        char c2=str2[i];
        freq[c2-'a']-=1;
    }
    for(int i=0;i<27;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
// BRUTE FORCE : SORT , COUNT EACH CHARACTER ONE BY ONE 
// O(N*LOGN + (M*LOGM))