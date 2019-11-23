 void display();
 extern int top;
extern int buffer[10];

void display()
 {
	 if(top==-1)
	 return;
	 int i;
	 for(i=top;i>=0;i--)
     {
     printf("%d\n",buffer[i]);
	 printf("\n");
     }
 }
