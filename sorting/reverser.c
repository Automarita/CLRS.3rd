#include "include.h"

int a[MAXN];
int main (void) 
{
	int cur;
	int len;
	len = 0;
	while(scanf("%d", &cur) != EOF) {
		a[len] = cur;
		len++;
	}
	int i;
	for (i=len-1; i>=0; i--) {
		printf( i==0 ? "%d" : "%d ", a[i]);
	}
	return 0;
}



