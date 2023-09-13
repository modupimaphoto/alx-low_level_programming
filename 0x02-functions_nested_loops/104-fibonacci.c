#include <stdio.h>

int main(void)
{
	int i, overflow, len;
	int f1[100] = {0};
	int f2[100] = {0};
	int f3[100] = {0};

	f1[0] = 1;
	f2[0] = 2;

	printf("%d, %d", f1[0], f2[0]);

	for (i = 0; i < 96; i++)
	{
		overflow = 0;
		len = 0;


		for (len = 0; f1[len] != 0 || f2[len] != 0; len++)
		{
			f3[len] = f1[len] + f2[len] + overflow;
			overflow = f3[len] / 10;
			f3[len] = f3[len] % 10;
		}

		if (overflow > 0)
		{
			f3[len] = overflow;
			len++;
		}

		for (len = len - 1; len >= 0; len--)
		{
			printf(", %d", f3[len]);
		}
		for (len = 0; len < 100; len++)
		{
			f1[len] = f2[len];
			f2[len] = f3[len];
			f3[len] = 0;
		}
	}
	printf("\n");
	return (0);
}

