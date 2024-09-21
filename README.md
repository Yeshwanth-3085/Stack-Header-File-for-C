# Stack-Header-File-for-C

This header file requires stdio.h & stdlib.h header files to be present in your compiler to work properly.

This header file can perform 9 Operations:

1) Creating a Stack { stack CreateStack(int Capacity); }, 

2) Query of Capacity of the Stack { int CapacityOfStack(stack Stack); },

3) Status of the Stack { void StatusOfStack(stack Stack); }, 

4) Push an element into the Stack { stack Push(stack Stack); }, 

5) Pop an element from the Stack { stack pop(stack Stack); }, 

6) Peek of the Stack { void Peek(stack Stack); }, 

7) Displaying all the elements of the Stack { void DisplayStack(stack Stack); }, 

8) Flushing all the elements of the Stack { stack FlushStack(stack Stack); }, 

9) Freeing the Stack { void FreeStack(stack Stack); }.

  WARNING: Don't forget use the FreeStack() function at the end of your program, 
           as this header file uses DMA (calloc()) method to allocate memory dynamically 
           which needs to be freed after the execution to prevent memory leak.
