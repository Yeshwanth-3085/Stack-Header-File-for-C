/*
  Author: Yeshwanth N
  E-Mail ID: yeshwanthngs1r@gmail.com
  GitHub UserName: Yeshwanth-3085
  Twitter UserName: Yeshwanth_3085
  LinkedIn Profile: Yeshwanth N
  Discord Profile: Yeshwanth N #4663

  This header file requires "stdio.h" & "stdlib.h" header files to be present in your compiler to work properly.

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
*/
#include <stdio.h>
#include <stdlib.h>
struct S
{
  int Capacity, Top, *Arr;
};
typedef struct S stack;
stack CreateStack(int Capacity)
{
  stack Stack;
  Stack.Capacity = Capacity;
  Stack.Top = -1;
  Stack.Arr = (int *)calloc(Capacity, sizeof(int));
  return Stack;
}
int CapacityOfStack(stack Stack)
{
  return Stack.Capacity;
}
void StatusOfStack(stack Stack)
{
  if (Stack.Top < 0)
     printf("The Stack is Empty.\n");
  else if (Stack.Top > Stack.Capacity - 2)
          printf("The Stack is Full.\n");
       else if (Stack.Top == 0)
               printf("There is 1 element & %d spaces are left in the Stack.\n", Stack.Capacity - 1);
            else if (Stack.Top == Stack.Capacity - 2)
                    printf("There are %d elements & 1 space is left in the Stack.\n", Stack.Top + 1);
                 else
                    printf("There are %d elements & %d spaces are left in the Stack.\n", Stack.Top + 1, Stack.Capacity - Stack.Top - 1);
}
stack Push(stack Stack)
{
  if (Stack.Top > Stack.Capacity - 2)
     printf("Stack OverFlow!\n");
  else
     {
      printf("Enter an element to push into the stack: ");
      scanf("%d", &Stack.Arr[++Stack.Top]);
      printf("%d pushed into the Stack.\n", Stack.Arr[Stack.Top]);
      return Stack;
     }
}
stack Pop(stack Stack)
{
  if (Stack.Top < 0)
     printf("Stack UnderFlow!\n");
  else
     {
      printf("%d poped from the Stack.\n", Stack.Arr[Stack.Top--]);
      return Stack;
     }
}
void Peek(stack Stack)
{
  if (Stack.Top < 0)
     printf("The Stack is Empty.\n");
  else
     printf("The Top most element of the Stack is: %d.\n", Stack.Arr[Stack.Top]);
}
void DisplayStack(stack Stack)
{
  int i;
  if (Stack.Top < 0)
     printf("The Stack is Empty.\n");
  else
     {
      printf("The Stack elements are:\n");
      for (i = Stack.Top; i > -1; i--)
      printf("%d\n", Stack.Arr[i]);
     }
}
stack FlushStack(stack Stack)
{
  if (Stack.Top < 0)
     printf("Stack UnderFlow!\n");
  else
     {
      Stack.Top = -1;
      printf("The Stack elements are Flushed.\n");
      return Stack;
     }
}
void FreeStack(stack Stack)
{
 free(Stack.Arr);
}
