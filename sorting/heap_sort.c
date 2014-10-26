void heapify_iterative(int a[], int i, int heapsize)
{
	int largest;
	int l, r;
	int temp;

	while (1) {
		l = (i << 1) + 1;
		r = l + 1;
		largest = i;
		if (l < heapsize) {
			if (a[l] > a[largest]) {
				largest = l;
			}
		} else
			break;
		if (r < heapsize && a[r] > a[largest]) {
			largest = r;
		}
		if (largest == i)
			break;
		temp = a[i];
		a[i] = a[largest];
		a[largest] = temp;
		i = largest;
	}
}

void heap_sort(int a[], int len)
{
	/* Build the heap */
	int last_non_leaf = (len / 2) - 1;
	int i;
	int temp;
	for (i = last_non_leaf; i >= 0; i--) {
		heapify_iterative(a, i, len);
	}
	/* Heap Built */

	for (i = len - 1; i > 0; i--) {
		temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		/* exchange a[0] and the last element in heap */
		heapify_iterative(a, 0, i);
	}
}
