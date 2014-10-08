/*Using linear search to find the apropriate position for new elements*/
void insertion_sort(int a[], int len) 
{
	int i,j;
	int key, ins_pos;
	for(i=1; i<len; i++) {
		key = a[i];
		j = i-1;
		while(j >= 0 && a[j] > key) {
			a[j+1] = a[j];
			j--;
		}
		ins_pos = j+1;
		a[ins_pos] = key;
	}
}

/*Using binary search to find the position to insert new element*/
void binary_insertion_sort(int a[], int len) 
{
	int i,j;
	int key, ins_pos;
	int left, right, mid; 

	for(i=1; i<len; i++) {
		key = a[i];
		left = 0;
		right = i-1;
		while(left <= right) {
			mid = (left + right) / 2;
			if ( a[mid] > key) {
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		}
		ins_pos = left; 
		for(j = i; j > ins_pos; j--) {
			a[j] = a[j-1];
		}
		a[ins_pos] = key;
	}
}
/*
 * How to proof that ins_pos = left !
 */
