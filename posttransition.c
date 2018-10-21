#include<stdio.h>
#include<string.h>
void main()
{
	int a,i,j,k=12;
	char city[50],d;
	
	printf("Which city post office's= ");
	gets(city);
	
	printf("%s offices are:",city);
	
	for(i=1;i<=3;i++)
	{
		printf("\n%d",i);
		for(j=1;j<=4;j++)
		{
			printf("\n     id-%d",j);
		}
	}
	
	printf("\n4");
	printf("\n     id-1");
	printf("\n     id-2");
	printf("\n     id-3");
	printf("\n     id-4");
	printf("\n     id-5");
	
	printf("\nWhich office information you want to see= ");
	scanf("%d",&a);
	
	if(a>=1 && a<=3)
	{
		printf("%d offices have four pacakages.",a);
	
		printf("\n     id-1");
		printf("\n          weight: %d kg.",k*2);
		printf("\n                    min weight: %d          max weight:%d",k*2,k*5);
	
		printf("\n     id-2");
		printf("\n          weight: %d kg.",k*4);
		printf("\n                    min weight: %d          max weight:%d",k*3,k*6);
	
		printf("\n     id-3");
		printf("\n          weight: %d kg.",k);
		printf("\n                    min weight: %d          max weight:%d",k-1,k*7);
	
		printf("\n     id-4");
		printf("\n          weight: %d kg.",k*3);
		printf("\n                    min weight: %d          max weight:%d",k*2,k*5);
	}
	
	else if(a==4)
	{
		printf("\n     id-1");
		printf("\n          weight: 10 kg.");
		printf("\n                    min weight: 10Kg          max weight:34Kg");
		
		printf("\n     id-2");
		printf("\n          weight: 18 kg.");
		printf("\n                    min weight: 10Kg          max weight:34Kg");
		
		printf("\n     id-3");
		printf("\n          weight: 17 kg.");
		printf("\n                    min weight: 10Kg          max weight:55Kg");
		
		printf("\n     id-4");
		printf("\n          weight: 12 kg.");
		printf("\n                    min weight: 10Kg          max weight:35Kg");
		
		printf("\n     id-5");
		printf("\n          weight: 14kg.");
		printf("\n                    min weight: 10Kg          max weight:34Kg");
	}
	
	else
	{
		printf("\n%s city has not %d office",city,a);
	}
	printf("\nDo you have query(y/n): ");
	scanf("%c",&d);
	
	if(d=='y')
	{
		printf("1 or 2");
		scanf("%d",&a);
		
		if(a==1)
		{
			fflush(stdin);
			printf("Town name: ");
			gets(city);
			
			for(i=1;i<=3;i++)
			{
			printf("\n%d",i);
			for(j=1;j<=4;j++)
			{
				printf("\n     id-%d",j);
			}
			}
		}
		
		else if(a==2)
		{
			printf("4 office have more packages.");
		}
		
		else
		{
			printf("You entered wrong option");
		}
	}
	else
	{
		printf("\nTHANK YOU");
	}
}
