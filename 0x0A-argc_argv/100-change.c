#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
       {
	       printf("Error\n");
	       return 1;
	}
	else
	{
		int cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("0\n");
			return 0;
		}
		else
		{
			int coins[] = {25, 10, 5, 2, 1};
			int num_coins = sizeof(coins) / sizeof(coins[0]);
			int min_coins = cents;
			int i;

			for (i = 0; i < num_coins; i++)
			{
				int temp_min_coins = cents / coins[i];

				if (temp_min_coins < min_coins)
				{
					min_coins = temp_min_coins;
				}
			}
			printf("%d\n", min_coins);
		}
	}
 
 

  }



  return 0;
}

