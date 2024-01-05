#include <math.h>
bool checkArmstrong(int n){
	// calculate no. of digits
	int k=0;
	int dummy=n;
	while(dummy){
		k=k+1;
		dummy=dummy/10;
	}
	dummy=n;
	int result=0;
	int ans;
	while(dummy){
		int rem = dummy%10;
		ans = pow(rem,k);
		result = result + ans;
		dummy=dummy/10;
	}
	if(result==n){
		return true;
	}
	return false;
}
