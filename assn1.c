// Brayden Prestwich
// CS 3060 - 001 Fall 2015
// Assignment 1
/* Promise of Originality
Ipromise that this source code file has in it's entirety, been
written by myself and by no other person or Persons. If at any time an
exact copy of this source code is found to be used by another person in
this term, I understand that both myself and the student that submitted
the copy will receive a zero on this assignment
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	printf("Assignment 1 by Brayden Prestwich\n");	
	int count;

	// loop exicutes and prints strings
	while (argc--){
		
		//%d is a place holder for int count, %s for  *argv,
		printf("Argument #%d is %s\n", count, *argv++);
		count++;	
	}
	
	printf ("number of Arguments %d\n", count);
	return 0;
}
