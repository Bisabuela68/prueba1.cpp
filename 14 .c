#include <stdio.h>
int main(){

	int i=0, n=0;
	
	while(n<5)
	{	while(i<5)
		{
			printf("*    ");
			i++;
			if(i==5)
			{
				i=0;
				printf("\n");
				n++;
				if(n==5)
					{
						i=6;
					}	
			}
	
		}
		
	}
	 return 0;}
