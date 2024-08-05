#include<stdio.h>
int main()
{
	int i,j,s;

	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==0 || i==2 || i==4 ||(i==3 && j==4)|| (i==1 && j==0))
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		  }
		for(s=0; s<2; s++)
		{
			printf(" ");
		}
		for(j=0; j<5; j++)
		{
			if(j==0 || j==4 || i==0 || i==2)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
				for(s=0; s<2; s++)
		{
			printf(" ");
		}

		for(j=0; j<5; j++)
		{
			if(j==0 || i==4)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
				for(s=0; s<2; s++)
		{
			printf(" ");
		}

		for(j=0; j<5; j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
				for(s=0; s<2; s++)
		{
			printf(" ");
		}

		for(j=0; j<5; j++)
		{
			if(i==j || j==0 || j==4)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
				for(s=0; s<2; s++)
		{
			printf(" ");
		}

		for(j=0; j<5; j++)
		{
			if(i==0 || i==4 || j==2)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

return 0;

}