#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "quick_sort.h"

#define _SIZE_ 5

void p_all(int *ary, int n) {
    int i;
    for (i=0; i<n; i++)
        printf("%d ", ary[i]);
    printf("\n\n");
}

int main(void) {
    int ary[_SIZE_], i;
    srand((unsigned int)time(NULL));
    
    for (i=0; i<_SIZE_; i++)
        ary[i] = rand()%(_SIZE_<<3);
    
    printf("排序前: ");
    p_all(ary, _SIZE_);
    
    quick_sort(ary, 0, _SIZE_-1);
    
    printf("排序後: ");
    p_all(ary, _SIZE_);
    
    return 0;
}
