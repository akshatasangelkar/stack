#include<stdio.h>
#include<stdlib.h>
int max=5;
 
 int top=-1;
 int buffer[10];

 void push(int val);
 int pop(void);
 int tos();
 void display();

 int main()
 {
	 int ch,value,res;
	 while(10)
	 {
		 printf(" 1.push\n 2.pop\n 3.top\n 4.display\n 5.exit\n");
		 printf("enter your choice\n");
		 scanf("%d",&ch);
		 switch(ch)
		 {
			 case 1:
					 printf("enter the value to push:\n");
					 scanf("%d",&value);
					 push(value);
					 break;
			 case 2:
				 	 value=pop();
				 	 if(value==-1)
				 	 continue;
				 	 printf("popped element %d\n",value);
				 	 break;
			 case 3:
					 res=tos();
					 printf("the top of the stack is %d\n",res);
					 break;
			 case 4:
				 	 display();
				 	 break;
			 case 5:
				 	 exit(1);
				 	 break;
			 default:
				 	 printf("enter correct choice");

		 }
	 }
	 return 0;
 }


 
 int tos()
 {
 	 return buffer[top];
 }

 