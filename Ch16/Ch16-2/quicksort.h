#ifndef QUICKSORT_H
#define QUICKSORT_H

/**************************************************************
 * quicksort.c: Semi-efficient algorithm for sorting an       *
 *              array. It is being used to sort for the       *
 *              print functionality.                          *
 **************************************************************/

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

#endif