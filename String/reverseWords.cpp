// BY USING STACKS : BRUTE FORCE 
#include<bits/stdc++.h>
using namespace std;
string reverseString(string &str){

	// using stacks 
	stack<string> st;
	str+=" ";
	// answer variable 
	string ans="";
	int n = str.length();
	for(int i=0;i<n;i++){
		if(str[i] != ' '){
			ans+=str[i];
		}
		else if(!ans.empty()){
			st.push(ans);
			ans="";
		}
	}
	string s="";
	while(!st.empty()){
		s+= st.top() + " ";
		st.pop();
	}
	return s;
}
// WITHOUT USING STACKS : OPTIMAL APPROACH
#include<bits/stdc++.h>
using namespace std;
string result(string s)
{
    int left = 0;
    int right = s.length()-1;
    
    string temp="";
    string ans="";
    
    //Iterate the string and keep on adding to form a word
    //If empty space is encountered then add the current word to the result
    while (left <= right) {
        char ch= s[left];
        if (ch != ' ') {
            temp += ch;
        } else if (ch == ' ') {
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
            temp = "";
        }
        left++;
    }
    
    //If not empty string then add to the result(Last word is added)
    if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }
    
    return ans;    
}
