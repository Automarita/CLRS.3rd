void selection_sort(int a[], int len) {
	int min;
	int min_index;
	int i,j;
	int temp;

	for(i=0; i<len-1; i++) {
		min = a[i];
		min_index = i;
		for(j=i; j<len; j++) { // Find the minimal number after current
			if(a[j] < min) {
				min = a[j];
				min_index = j;
			}
		}
		// swap the current number and selected minimal number
		if(min_index > i) {
			temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;
		}
	}
}

/*****************Debug log******************
 * Before finding the minimal number after current pos,
 * I forgot to initialize the min_index to the current index
 * it's a really stupid error
 */
