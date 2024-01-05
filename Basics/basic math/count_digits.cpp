int countDigits(int n){

	// find the digit 
	// check if it divides the number evenly or not 
	// if it does , then add it to total

	int total=0;
	int dummy =n;
        while (dummy) {
				int dig = dummy%10;
				if(dig!=0 && n%dig == 0){ // dump it if the digit is 0
					total+=1;
				}
				dummy=dummy/10;
        }
		return total;
}