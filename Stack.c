#include<stack.h>
void main()
{
 int Choice, Size;
 printf("Enter the Stack size as you wish it to be: ");
 scanf("%d", &Size);
 stack Stack=CreateStack(Size);
 while(1)
      {
       printf("\nMenu of Stack operations:\n1) Capacity of the Stack\n2) Check the Status of the Stack\n3) Push an Element into Stack\n4) Pop an Element from Stack\n5) Peek of Stack\n6) Display the elements of the Stack\n7) Flush the elements of the Stack\n8) Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &Choice);
       switch(Choice)
             {
              case 1: {
                       printf("The Capacity of the Stack is: %d.\n", CapacityOfStack(Stack));
                       break;
                      }
              case 2: {
                       StatusOfStack(Stack);
                       break;
                      }
              case 3: {
                       Stack=Push(Stack);
                       break;
                      }
              case 4: {
                       Stack=Pop(Stack);
                       break;
                      }
              case 5: {
                       Peek(Stack);
                       break;
                      }
              case 6: {
                       DisplayStack(Stack);            
                       break;
                      }
              case 7: {
                       Stack=FlushStack(Stack);
                       break;
                      }
              case 8: {
                       FreeStack(Stack);
                       printf("GoodBye!\n");
                       exit (0);
                      }
              default: {
                        printf("Invalid Choice!\n");
                        break;
                       }
             }
      }
}