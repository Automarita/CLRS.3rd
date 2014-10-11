#include <stdlib.h>
#include <stdio.h>

#define INF 0x7f7f7f7f

void merge (int a[], int start, int mid, int end, int* inv_num);

void merge_sort (int a[], int start, int end, int* inv_num)
{
	if (start < end) {
		int mid = (start + end)/2;
		merge_sort (a, start, mid, inv_num);
		merge_sort (a, mid+1, end, inv_num);
		merge(a, start, mid, end, inv_num);
	}
}

void merge (int a[], int start, int mid, int end, int* inv_num) 
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
			if ( left[i] != INF ) {
				(*inv_num) ++;
			}
			a[k] = right[j];
			j++;
		}
	}
	free(left);
	free(right);
}
/* Forget to check whether the memory allocation successed*/

#define MAXN 0xffffff
int a[MAXN];
int main (void) 
{
	int len, cur;
	int cnt = 0;
	int* inv_num = &cnt;
	len = 0;
	//You need give a file to redirect here
	while(scanf("%d", &cur) != EOF ) {
		a[len++] = cur;
	}
	merge_sort(a, 0, len-1, inv_num);
	printf("%d", cnt);
	return 0;
}
