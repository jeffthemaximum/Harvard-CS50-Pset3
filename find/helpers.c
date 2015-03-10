/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */

void swap (int* a, int* b);

bool search(int value, int values[], int n) { 
    int beginning = 0;
    int ending = n;
    
    // while length of list > 0    
    while (ending >= beginning) {
        
        // look at middle of list
        int middle = (beginning + ending) / 2;
        
        // if number found, return true
            if (values[middle] == value) {
                return true;
            }
            
        // else if middle higher, search left
            else if (values[middle] > value) {
                //beginning stays the same
                ending = middle - 1;
            }
            
        // else if middle lower, search right
            else
            {
                beginning = middle + 1;
            }
    }
    return false;
}
    //Linear Search
    //bool search(int value, int values[], int n) {
    //for (int i = 0; i < n; i++) { 
    //if (values[i] == value) { 
    //return true; 
    //}
    //}
    //return false;
    //}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
for (int j = 0; j < n; j++) {    
    for (int i = 0; i < n; i++) {
        if (values[i] > values[i+1]) {
            swap (&values[i], &values[i+1]);
        }
    }
    return;
}
}

void swap (int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
