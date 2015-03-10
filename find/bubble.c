#include <cs50.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap (int* a, int* b);

int main(void)
{
    int v[5] = {21, 20, 19, 18, 17};
for (int j = 0; j < 4;j++) {
    for (int i = 0; i < 4; i++) {
        if (v[i] > v[i + 1]) {
            swap (&v[i], &v[i + 1]);
        }
    }
    for (int k = 0; k<5; k++) {
        printf("%i\n", v[k]);
    }
}
}
void swap (int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
