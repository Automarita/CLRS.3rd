int partitions(int a[], int start, int end) {
	//Specify the a[end] as the pivot element
	//And re-orgnize the array as {lesser, pivot, larger}, then return the index of pivot
	
	int pivot = a[end];
	int i;
	//int lessEnd = -1;
	int lessEnd = start-1;
	int temp;
	//for(i=0; i<end; i++) {
	//The essential of this iteration is how to make an in-place reorder
	for ( i=start; i<end; i++) {
		if(a[i] < pivot) {
			lessEnd ++;

			temp = a[lessEnd];
			a[lessEnd] = a[i];
			a[i] = temp;
		}
	}
	int pivotPos = lessEnd + 1;

	temp = a[pivotPos];
	a[pivotPos] = a[end];
	a[end] = temp;
	
	return pivotPos;
}

void quick_sort(int a[], int start, int end) {
	if(start < end) {
		int pivot = partitions(a, start, end);
		//partitions(a, start, pivot-1);
		//partitions(a, pivot+1, end);
		quick_sort (a, start, pivot-1);
		quick_sort (a, pivot+1, end);
	}
}
