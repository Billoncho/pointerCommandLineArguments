/*
Name:       Billy Gene Ridgeway
Purpose:   Learn about using pointers with arguments passed in from the command line.
Date:          June 26th. 2022
*/

#include <stdio.h>

// This program displays any arguments that were passed to it by the command line.


int main(int argc, char **argv) {
    int i;

    // (1) Iterate over array of args using the indexes of the elements.
    for (int i = 0; i < argc; i++) {
        printf("arg %d is %s\n", i, argv[i]);	// Prints arg at index i.
	}

    printf("\n\n");

	// (2) Dereference each string arg (*argv) via pointer to the pointer to the start of the array of args (**argv).
	for (i = 0; i < argc; i++) {
		printf("arg %d is %s\n", i, *argv);	// Prints arg pointed to by argv.
        argv += 1;                                          // Increments argv by one.
	}
 	return 0;
}
