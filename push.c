void push(int);
extern int max;
extern int top;
extern int buffer[10];
void push(int val)
{
     if(top==max-1)
	 {
		 printf("stack overflow");
		 return;
	 }
	 buffer[++top]=val;

} 