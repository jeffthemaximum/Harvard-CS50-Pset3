#include <stdbool.h>
#include <stdio.h>
#include <cs50.h>

bool search(int value, int values[], int n) { 
    int beginning = 0;
    int ending = n-1;
    
    // while length of list > 0    
    while ((ending - beginning) > 0) {
        
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
