PUSH SWAP
Rank 2 project of 42 cursus at 42 Lisboa

The objective is to create a program which prints to STDOUT the instructions required to sort the stack A, which must be given as the program's argument, each followed by a line break.  
Stack A must be sorted in ascending order (lowest element at the top), using the lowest possible number of moves. WHen the program finishes executing, stack A must be sorted and stack B must be empty.

Moves allowed:
- sa : swap a - Swap the first 2 elements at the top of stack A. Do nothing if there is only one or no elements.
- sb : swap b - Swap the first 2 elements at the top of stack B. Do nothing if there is only one or no elements.
- ss : sa and sb at the same time.
- pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if B is empty.
- pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if A is empty.
- ra : rotate a - shift up all elements of stack A by 1. The first element becomes the last one.
- rb : rotate b - shift up all elements of stack B by 1. The first element becomes the last one.
- rr : ra and rb at the same time.
- rra : reverse rotate a - shift down all elements of stack A by 1. The last element becomes the first one.
- rrb : reverse rotate b - shift down all elements of stack B by 1. The last element becomes the first one.
- rrr : rra and rrb at the same time.


-------------
When using user input, argv must necessarily be a pointer to an array of chars. Use ATOI to transform each argv in an int.

