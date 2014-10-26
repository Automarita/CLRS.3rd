void bubble_sort(int a[], int len)
{
	int i, j;
	int temp;
	for (i = 0; i < len; i++) {
		for (j = len - 1; j > i; j--) {
			if (a[j] < a[j - 1]) {
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}
