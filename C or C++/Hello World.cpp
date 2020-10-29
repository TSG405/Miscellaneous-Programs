/* ----- Print "Hello World" without using Semicolon -----  */

#include<stdio.h>  
 int main()    
{    
 if(printf("hello world"))
 {
 }    
return 0;  
}   

---------------------------  1

#include<stdio.h>
int main()
{
	while(!printf("Hello World"))
	{;}
	
	return 0;
}

--------------------------  2

int main()
{
	switch(printf("Hello World"))
	{
	}
	
	return 0;
}

--------------------------  3

/* ----- Print "Hello World" without using Printf() -----  */

#include <stdio.h> 
int write(int filedes, const char *buf,unsigned int nbyte); 
int main() 
{ 
   write(1,"Hello World!\n",12);
   return 0; 
}
