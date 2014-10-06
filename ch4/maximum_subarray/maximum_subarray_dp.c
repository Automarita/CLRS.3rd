/*
 * This version obey the Definition 1 in file "problem"
 */
#include <stdio.h>
#include <string.h>

#define MAXN 0xffffff
#define NEG_INF 0x80000000
int a[MAXN];
int mss[MAXN];

int main() 
{
	int N;
	int i,j;
	int sum, max;

	scanf("%d", &N);
	for(i=0; i<N; i++) {
		scanf("%d", &a[i]);
	}

	mss[0] = a[0];
	for(i=1; i<N; i++) {
		sum = 0;
		max = NEG_INF;
		for(j=i; j>=0; j--) {
			sum += a[j];
			if(sum > max) {
				max = sum;
			}
		}
		if (max > mss[i-1]) 
			mss[i] = max;
		else 
			mss[i] = mss[i-1];
	}
	printf("%d", mss[N-1]);
	return 0;
}
