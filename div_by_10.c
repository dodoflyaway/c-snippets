// peice of code used to find the length of a number 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	printf("enter a number to find the lenght of \n");
	scanf("%d",&x);
	int len = 0;// to store the leght of the number
	int loop_flag =  0; //flag to stop the exuction of the loop 
	while(loop_flag!=1)
	{
		
	    x = x/10;  
	    if(x==0)
	    {
	    	
	    	loop_flag = 1;
	    	
	    }
		
	    len++;
		
		
	} 
	
      printf("len is %d\n",len);
      return 0;
	
	
}
