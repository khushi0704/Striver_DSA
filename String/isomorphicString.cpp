//BRUTE FORCE 
bool areIsomorphic(string &str1, string &str2)
{
    map <char,char> mpp;
    int n = str1.length();
    for( int i=0;i<n;i++){
        if (mpp.find(str1[i]) == mpp.end()) {
            // not found
            // insert it
            // also check if the mapping value is already mapped 
             for (const auto &pair : mpp) {
                if (pair.second == str2[i]) // If char2 is already mapped, return false
                    return false;
            }
            mpp.insert({str1[i],str2[i]});       
        } 
        else {
            // found
            // check if the value is same
            if(mpp[str1[i]]==str2[i]){
                continue;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

// EFFICIENT 
#include <string>
#include <map>

bool areIsomorphic(std::string &str1, std::string &str2) {
    if (str1.length() != str2.length()) // If lengths are different, they can't be isomorphic
        return false;
    
    std::map<char, char> mapping; // Use map for ordered traversal
    
    for (int i = 0; i < str1.length(); ++i) {
        char char1 = str1[i];
        char char2 = str2[i];
        
        auto it = mapping.find(char1);
        if (it == mapping.end()) {
            // If char1 is not mapped, check if char2 is already mapped to another character
            for (const auto &pair : mapping) {
                if (pair.second == char2) // If char2 is already mapped, return false
                    return false;
            }
            // If char1 is not mapped yet, map it to char2
            mapping[char1] = char2;
        } else {
            // If char1 is already mapped, check if it's mapped to char2
            if (it->second != char2)
                return false;
        }
    }
    
    return true;
}
