int partitionArray(int input[], int start, int end) {
	int pivot = start;
	int i=start;
	int j=end;
	while(i<j){
		while(input[i]<=input[pivot]){
			i++;
		}
		while(input[j]>input[pivot]){
			j--;
		}
		// swap
		if(i<j){
		int temp=input[i];
		input[i]=input[j];
		input[j]=temp;
		}
	}
	// finally place the pivot in its correct position
	int temp = input[pivot];
	input[pivot]=input[j];
	input[j]=temp;
	return j;
}

void quickSort(int input[], int start, int end) {
	if(start<end){
	int pivotIdx = partitionArray(input,start,end);
	quickSort(input,start,pivotIdx-1);
	quickSort(input,pivotIdx+1,end);
	}
}