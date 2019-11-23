 int pop(void);

extern int top;
extern int buffer[10];

 int pop(void)
 {
	 if(top==-1)
	 {
		 printf("stack underflow");
		 return -1;
	 }
	 return buffer[top--];
 }
