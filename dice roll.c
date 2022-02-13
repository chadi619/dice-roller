#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>


main()
{
	int n,random;
	char deci;
	
	
	again:
	printf("Number of dice:");
	scanf("%d",&n);
	srand (time(0));
	if(n<1 || n>10)
	{
		printf("\n\nlimits are 1 and 10\nClick 'k' to try again or press any key to exit:");
		deci=getch();
		printf("%c",deci);
		
		if( deci == 'k')
		{
		Sleep(1000);
		system("cls");
		goto again;
		}
	}
	
	else
	{
		int i;
		for(i=1;i<=n;i++)
		{
			random=(rand()%6)+1;
			
			switch(random)
			{
			
			
				case 1:
					printf("---------\n");
					printf("|        |\n");
					printf("|    *   |\n");
					printf("|________|\n");
				break;
				
				case 2:
					printf("---------\n");
					printf("|      * |\n");
					printf("|        |\n");
					printf("|_*______|\n");
				break;
								
				case 3:
					printf("---------\n");
					printf("|  *     |\n");
					printf("|    *   |\n");
					printf("|______*_|\n");
				break;
								
				case 4:
					printf("---------\n");
					printf("| *    * |\n");
					printf("|        |\n");
					printf("|_*____*_|\n");
				break;
								
				case 5:
					printf("---------\n");
					printf("| *    * |\n");
					printf("|    *   |\n");
					printf("|_*____*_|\n");
				break;
								
				case 6:
					printf("---------\n");
					printf("| *    * |\n");
					printf("| *    * |\n");
					printf("|_*____*_|\n");
				break;
		
			}
		
		}
	}


	
}
