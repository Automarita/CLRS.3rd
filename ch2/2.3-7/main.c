#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOT_FOUND -2
#define MAXN 0xffffff

int a[MAXN];
int check[MAXN];

int cmp(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

//int binary_search(int a[], int right, int left, int key)  WOOOOW...fuck... - -#
int binary_search(int a[], int left , int right, int key) 

{
	int mid;
	//while(right <= left) {  FFFFUUUUUUCKKKK - -#
	  while(left <= right) {
		mid = (right + left) / 2;
		if(a[mid] == key) return mid;
		else if(a[mid] > key) 
			right = mid - 1;
		else if(a[mid] < key)
			left = mid + 1;
	}
	return NOT_FOUND;
}

int main(void) 
{
	int N,x;
	int i;
	int key,pos;
	int no_way_count = 0;
	
	scanf("%d", &N);       // Read the input
	for(i=0; i<N; i++) {   
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);

	qsort(a, N, sizeof(a[0]), cmp);
	memset(check, 0, sizeof(check));

	for(i=0; i<N; i++) {	//Search the x-a[i]
		if(1 == check[i]) continue; // Avoid the repeat combination, see 55:check[pos]=1.

		key = x - a[i];
		pos = binary_search(a, 0, N-1, key);
		if(NOT_FOUND != pos && i != pos) {
			printf("x=%d+%d\n", a[i], key);
			check[pos] = 1;
		} else {
			no_way_count++;
		}
	}
	if ( no_way_count == N ) {
		printf("NO WAY");
	}
	return 0;
}
