#include<stdio.h>
void red () {
  printf("\033[1;31m");
}

void yellow() {
  printf("\033[1;33m");
}

void reset () {
  printf("\033[0m");
}
void main()
{
	int i,j,n=10;

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		
			printf("  ");
			for(j=1;j<=2*(n-i)+1;j++)
			{
				if(i==1 && j==1 || i==1 && j==2 || i==1 && j==9 || i==1 && j==10 || i==1 && j==11||i==1&&j==19)
				{
					printf("  ");
				}
				else if(i==1 && j==18 || i==2 && j== 9||i==2&&j==1||i==2&&j==18)
				{
					printf("  ");
				}
				else if(i==1 && j==17||i==1&&j==2||i==2&&j==17||i==1&&j==3)
				{
					printf("  ");
				}
				else if(i==5&&j==8||i==5&&j==9||i==5&&j==10||i==5&&j==11||i==5&&j==12)
				{
					printf(" ");
				}
				else if((i==5&&j==3))
				{ 
				    yellow();
					printf("I LOVE YOU");
				}
				else
				{
				    red();
				    printf("* ");
				}
			}
		printf("\n");
	}
}
