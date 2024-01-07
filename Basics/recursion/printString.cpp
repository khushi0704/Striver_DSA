vector<string> printNTimes(int n) {
	if(n==0){
		return {};
	}
	vector<string> s=printNTimes(n-1);
	s.push_back("Coding Ninjas ");
	return s;
}