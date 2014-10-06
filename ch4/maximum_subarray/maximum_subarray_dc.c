/*
 * According the Definition 1 in "problem" specification
 */
#include <stdio.h>
#include <string.h>

#define MAXN 0xffffff
#define NEG_INF 0x80000000

int find_cross_mss(int a[], int p, int q)
{
	int cur_left_sum = 0;
	int cur_right_sum = 0;
	int max;
	int left_mss = 0;
	int right_mss = 0;
	int i;
	int mid = (p+q)/2; 

	max = NEG_INF;
	for(i=mid; i>=p; i--) {
		cur_left_sum += a[i];
		if (cur_left_sum > max) {
			max = cur_left_sum; 
		}
	}
	left_mss = max;
	
	max = NEG_INF;
	for(i=mid+1; i<=q; i++) {
		cur_right_sum += a[i];
		if (cur_right_sum > max) {
			max = cur_right_sum;
		}
	}
	right_mss = max;

	return left_mss + right_mss;
}

int find_mss(int a[], int p, int q) 
{
	int mid;
	int left_mss, right_mss, cross_mss;
	if (p==q) {
		return a[p];
	} else {
		mid = (p+q)/2;
		left_mss = find_mss(a, p, mid);
		right_mss = find_mss(a, mid+1, q);
		cross_mss = find_cross_mss(a, p, q);

		if (left_mss >= right_mss &&
			left_mss >= cross_mss)
			return left_mss;
		else if (right_mss >= left_mss &&
				 right_mss >= cross_mss)
			return right_mss;
		else 
			return cross_mss;
	}
}

int a[MAXN];

int main(void) {
    int N;
    int i;
	scanf("%d", &N);
    for(i=0; i<N; i++) {
		scanf("%d", &a[i]);
	}

	printf("%d", find_mss(a, 0, N-1));
	return 0;
}

