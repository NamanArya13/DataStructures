#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
struct stack
{
  int top;
  int data[100];
}s1;
typedef struct stack STACK;
void push (STACK * p, int item)
{
  if (p->top == SIZE - 1)
    {
      printf ("stack overflow\n");
    }
  else
    {
      p->top = p->top + 1;
      p->data[p->top] = item;
    }
  return;
}

int pop (STACK * p)
{
  if (p->top == -1)
    {
      printf ("stack underflow\n");
      return (-1);
    }
  else
    {
      return (p->data[p->top--]);
    }
}

void display (STACK p)
{
  int i;
  if (p.top == -1)
    printf ("stack is empty\n");
  else
    {
      printf ("elements of the stack are\n");
      for (i = p.top; i >= 0; i--)
	printf ("\n%d\n", p.data[i]);
    }
}

void reverse (STACK * p)
{
  int count = 0;

  for (int i = p->top; i > -1; i--)
    {
      push (&s1, pop (p));
      count++;
    }
  display (s1);
  



}

int
main ()
{
  STACK s;
  s1.top=-1;

  int item, ch, n;
  s.top = -1;
  for (;;)
    {
      printf ("\n1 PUSH\t2 POP\t3 DISPLAY\t4 REVERSE\t5 EXIT\n ");

      scanf ("%d", &ch);
      switch (ch)
	{
	case 1:
	  printf ("enter element: ");
	  scanf ("%d", &item);
	  push (&s, item);
	  break;
	case 2:
	  printf ("poped element is %d", pop (&s));
	  break;

	case 3:
	  display (s);
	  break;

	case 4:
	  reverse (&s);
	  break;
	case 5:
	  exit (0);

	default:
	  exit (0);

	}

    }
}
