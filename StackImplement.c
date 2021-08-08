#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct stack{
int arr[MAX];
int top;
}s;


void push(int ele){               //PUSH OPERATION
if(s.top==MAX)
printf("STACK FULL\n");
else
s.arr[s.top]=ele;
s.top+=1;
}


void display(){                   //DISPLAY FUNCTION
    if(s.top==-1)
    printf("STACK IS EMPTY\n");
    else
    printf("\nSTACK CONTENTS:\n");
    for(int i=0;i<s.top;i++){
        printf(" %d  ",s.arr[i]);
    }
}


int pop(){                        //POP OPERATION
int k;
if(s.top==0){
printf("STACK EMPTY\n");
return;
}
else{
s.top--;
k=s.arr[s.top];
return k;
}}


int main(){
s.top=0;
int element,m,q;
while(1){
printf("1.ADD ELEMENT TO STACK\t   2.REMOVE ELEMENT FROM STACK\t   3.DISPLAY STACK\t   4.EXIT\n");
scanf("%d",&m);
switch(m){
case 1:printf("Enter element to be added:\n");
      scanf("%d",&element);
      push(element);
      break;
case 2:q=pop();
      printf("ELEMENT POPPED=%d\n",q);
      printf("%d",s.top);
      break;
case 3:display();
       break;
default:return 0;
}}}




