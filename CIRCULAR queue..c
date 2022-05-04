#include <stdio.h>
#define MAX 5
int queue[MAX], front = -1, rear = -1;
int insert();
int delete ();
int display();
int main(void) {
  int ch;
  do {
    printf("MAIN MENU");
    printf("\n INSERT");
    printf("\n DELETE");
    printf("\n DISPLAY");
    printf("\n EXIT");
    printf("\nEnter your choice");
    scanf("%d", &ch);
    switch (ch) {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    }
  } while (ch != 4);
  return 0;
}
int insert() {
  int item;
  if (front == 0 && rear == MAX - 1) {
    printf("OVERFLOW");
  } else {
    printf("Enter the element to insert");
    scanf("%d", &item);
  }
  if (front == -1 && rear == -1) {
    front = 0;
    rear = 0;
  } else if (front != 0 && rear == MAX - 1) {
    rear = 0;
  } else {
    rear = rear + 1;
  }
  queue[rear] = item;
  return 0;
}
int delete () {
  int val;
  if (front == -1)
    printf("UNDERFLOW");
  else {
    val = queue[front];
    if (front == rear)
      front = rear = -1;
    else if (front == MAX - 1)
      front = 0;
    else
      front = front + 1;
    printf("deleted element is %d", val);
  }
  return 0;
}
int display()
{
  int i;
  if (front == -1 && rear == -1)
    printf("queue is empty");
  else
  {
    printf("QUEUE\n");
    if (front < rear) 
    {
      for (i = front; i <= rear; i++) {
        printf("%d\t", queue[i]);
      }
    }
  
  else {
    for (i = front; i <= MAX - 1; i++)
      printf("%d\t", queue[i]);
    for (i = 0; i <= rear; i++)
      printf("%d\t", queue[i]);
  }
    }
  return 0;
}