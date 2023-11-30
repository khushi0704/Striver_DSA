double areaSwitchCase(int ch, vector<double> a) {
	switch(ch){
		case 1:{
			return 3.14159265359*a[0]*a[0];
		}
		case 2:{
			int area=1;
			for(int i=0;i<a.size();i++){
				area*=a[i];
			}
			return area;
		}
	}
}
