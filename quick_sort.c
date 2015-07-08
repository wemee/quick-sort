//
//  quick_sort.c
//  HightSchool
//
//  Created by Tsai Jr-Yung on 2015/7/8.
//  Copyright (c) 2015年 Wemee. All rights reserved.
//

#include "quick_sort.h"

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void quick_sort(int *ary, int left, int right) {
    int pivot, i, store_idx;
    if (left>=right) return;
    
    pivot = ary[right];
    store_idx=left;
    for (i=left; i<right; i++)
        if (ary[i]<pivot)
            swap(ary+i, ary+store_idx++);
    
    swap(ary+right, ary+store_idx);
    
    quick_sort(ary, left, store_idx-1);
    quick_sort(ary, store_idx+1, right);
}
