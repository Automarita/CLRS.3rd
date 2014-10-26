int partitions(int a[], int start, int end)
{

	int pivot = a[end];
	int i;
	int lessEnd = start - 1;
	int temp;
	int pivot_pos;

	for (i = start; i < end; i++) {
		if (a[i] < pivot) {
			lessEnd++;

			temp = a[lessEnd];
			a[lessEnd] = a[i];
			a[i] = temp;
		}
	}
	pivot_pos = lessEnd + 1;

	temp = a[pivot_pos];
	a[pivot_pos] = a[end];
	a[end] = temp;

	return pivot_pos;
}

void quick_sort(int a[], int start, int end)
{
	if (start < end) {
		int pivot = partitions(a, start, end);
		quick_sort(a, start, pivot - 1);
		quick_sort(a, pivot + 1, end);
	}
}
