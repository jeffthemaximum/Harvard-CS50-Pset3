/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
       
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 65536

int main(int argc, string argv[]) //argc is the number of things you write after the program's name on the command line, argv is the words you write after the program's name. An array of strings. The locker analogy
{
    // TODO: checks to see if user correctly entered command line argument.
    if (argc != 2 && argc != 3)
    {
        printf("Usage: ./generate n [s]\n");
        return 1;
    }

    // TODO: converts first command line argument (after./generate) to an integer and assigns it to n
    int n = atoi(argv[1]);

    // TODO: seeds the random number generator with the 3rd command line arguement
    if (argc == 3)
    {
        srand((unsigned int) atoi(argv[2]));
    }
    else
    {
        srand((unsigned int) time(NULL));
    }

    // TODO: prints out n number of random integers using the rand() function.
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", rand() % LIMIT);
    }

    // that's all folks
    return 0;
}
