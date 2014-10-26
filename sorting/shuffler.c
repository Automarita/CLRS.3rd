#include "include.h"

int fetch_list[MAXN];
int a[MAXN];

int main(void)
{
	int start_of_rand, cur_select;
	int i;
	int cur, len;
	len = 0;
	while (scanf("%d", &cur) != EOF) {
		a[len] = cur;
		len++;
	}

	/* Initialization */
	for (i = 0; i < len; i++) {
		fetch_list[i] = i;
	}
	srand(time(NULL));
	start_of_rand = len;
	i = 0;
	int temp;

	/* shuffle begin */
	while (start_of_rand > 0) {
		cur_select = rand() % start_of_rand;
		start_of_rand--;

		temp = fetch_list[cur_select];
		fetch_list[cur_select] = fetch_list[start_of_rand];
		fetch_list[start_of_rand] = temp;

		/*
		   for(i=0; i<start_of_rand; i++) { 
		   if ( cur_select == i)
		   printf(REVERSE "%d " NONE, fetch_list[i]);
		   else printf("%d ", fetch_list[i]);
		   }
		   for(i=start_of_rand; i<len; i++)
		   printf( BLUE "%d " NONE, fetch_list[i]);
		   printf("\n");
		 */

	}

	/*
	   int j;
	   for(i=0; i<len; i++) {
	   for(j=0; j<fetch_list[i]; j++)
	   printf("#");
	   printf("\n");
	   } */

	for (i = 0; i < len; i++) {
		printf(0 == i ? "%d" : " %d", a[fetch_list[i]]);
	}
	return 0;
}
