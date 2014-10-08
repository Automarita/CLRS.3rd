#include <stdlib.h>

#define INF 0x7f7f7f7f

void merge (int a[], int start, int mid, int end);

void merge_sort (int a[], int start, int end)
{
	if (start < end) {
		int mid = (start + end)/2;
		merge_sort (a, start, mid);
		merge_sort (a, mid+1, end);
		merge(a, start, mid, end);
	}
}

void merge (int a[], int start, int mid, int end) 
{
	int* left = (int*) malloc ((mid-start+2)*sizeof(int));
	int* right = (int*) malloc ((end-mid+1)*sizeof(int));
	int i,j,k;

	for(i=start, k=0; i<=mid; i++) {
		left[k] = a[i];
		k++;
	}
	left[k] = INF;

	for(i=mid+1, k=0; i<=end; i++) {
		right[k] = a[i];
		k++;
	}
	right[k] = INF;

	i = 0;
	j = 0;
	for(k=start; k<=end; k++) {
		if(left[i] < right[j]) {
			a[k] = left[i];
			i++;
		} else {
			a[k] = right[j];
			j++;
		}
	}
	free(left);
	free(right);
}
/* Forget to check whether the memory allocation successed*/

