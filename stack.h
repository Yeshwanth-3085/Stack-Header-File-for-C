/*
  Author: Yeshwanth N
  E-Mail ID: yeshwanthngs1r@gmail.com
  GitHub UserName: Yeshwanth-3085
  Twitter UserName: Yeshwanth_3085
  LinkedIn Profile: Yeshwanth N
  Discord Profile: Yeshwanth N #4663
  Features of this header file:
  It can perform 8 Operations:
  Creating a Stack,
  Query of Capacity of the Stack,
  Status of the Stack,
  Push,
  Pop,
  Peek of the Stack,
  Displaying all the elements of the Stack,
  Flushing all the elements of the Stack.
*/
#include <stdio.h>
#include <stdlib.h>
struct S
{
  int Capacity, Top, *Arr;
};
struct S CreateStack(int Capacity)
{
  struct S Stack;
  Stack.Capacity = Capacity;
  Stack.Top = -1;
  Stack.Arr = (int *)calloc(Capacity, sizeof(int));
  return Stack;
}
int Capacity(struct S Stack)
{
  return Stack.Capacity;
}
void Status(struct S Stack)
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
struct S Push(struct S Stack)
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
struct S Pop(struct S Stack)
{
  if (Stack.Top < 0)
    printf("Stack UnderFlow!\n");
  else
  {
    printf("%d poped from the Stack.\n", Stack.Arr[Stack.Top--]);
    return Stack;
  }
}
void Peek(struct S Stack)
{
  if (Stack.Top < 0)
    printf("The Stack is Empty.\n");
  else
    printf("The Top most element of the Stack is: %d.\n", Stack.Arr[Stack.Top]);
}
void Display(struct S Stack)
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
struct S Flush(struct S Stack)
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