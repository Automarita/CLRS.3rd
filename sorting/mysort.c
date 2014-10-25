#include "include.h"

void quick_sort(int a[], int start, int end);
void insertion_sort(int a[], int len);
void binary_insertion_sort(int a[], int len);
void selection_sort(int a[], int len);
void bubble_sort(int a[], int len);
void merge_sort(int a[], int start, int end);
void heap_sort(int a[], int len);

int a[MAXN];
int main(int argc, char** argv) {
	const char PROMPT[120] = "mysort: no specified algorithm.\nUSAGE: mysort {quick|insertion|bi_insertion|selection|bubble|merge|heap}\n";

	if(2 != argc) {
		printf("%s",PROMPT);
		return -1;
	}

	int len = 0;
	int curNum;

	while(scanf("%d", &curNum) != EOF) {
		a[len] = curNum;
		len = len + 1;
	}
	
	/*****************TEST BEGIN**************************/

	if( 0 == strcmp("quick", argv[1]) ) {
		quick_sort(a, 0, len-1);
	}
	else if ( 0 == strcmp("selection", argv[1]) ) {
		selection_sort(a, len);
	}
	else if ( 0 == strcmp("insertion", argv[1]) ) {
		insertion_sort(a, len);
	}
	else if ( 0 == strcmp("bi_insertion", argv[1]) ) {
		binary_insertion_sort(a, len);
	}
	else if ( 0 == strcmp("bubble", argv[1]) ) {
		bubble_sort(a, len);
	}
	else if ( 0 == strcmp("merge", argv[1]) ) {
		merge_sort(a, 0, len-1);
	}
	else if ( 0 == strcmp("heap", argv[1]) ) {
		heap_sort(a, len);
	}

	else {
		printf("%s", PROMPT);
		return -1;
	}

	/****************TEST END****************************/

	int i;
	for(i=0; i<len; i++) {
		printf(0==i ? "%d" : " %d", a[i]);
	}
	return 0;
}
