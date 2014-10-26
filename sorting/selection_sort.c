void selection_sort(int a[], int len)
{
	int min_index;
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++) {
		min_index = i;
		for (j = i; j < len; j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}
		if (min_index > i) {
			temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;
		}
	}
}
