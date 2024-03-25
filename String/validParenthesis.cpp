int maxDepth(string s) {
	int count = 0;
	int n = s.length();
	int maxi = 0;
	for(int i=0;i<n;i++){
		if(s[i]=='('){
			count++;
			maxi = max(maxi,count);
		}
		if(s[i]==')'){
			count--;
		}
	}
	return maxi;
}
