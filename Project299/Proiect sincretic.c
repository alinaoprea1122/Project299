#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int matrice[10][20];

void citire(int n, int m)
{
	int i, j, r;

	srand(time(NULL));

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			r = rand() % 20;
			matrice[i][j] = r;
		}
	}
}
void afisare(int n, int m)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%3d ", matrice[i][j]);
		}printf("\n");
	}
}
void suma(int n, int m)
{
	int i, j, sumaDP = 0, sumaDS = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				sumaDP += matrice[i][j];
			}
			if (i + j == n - 1)
			{
				sumaDS += matrice[i][j];
			}
		}
	}
	printf("Suma elementelor matricei de pe DP: %d \n", sumaDP);
	printf("Suma elementelor matricei de pe DS: %d \n", sumaDS);

}
void minMax(int n, int m)
{
	int i, j, min, max;

	min = 32768;
	max = -32768;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{

			if (i > j)
			{
				if (matrice[i][j] < min)
				{
					min = matrice[i][j];
				}

			}
			if (i + j > n - 1)
			{
				if (matrice[i][j] > max)
				{
					max = matrice[i][j];
				}
			}
		}
	}
	printf("Min de sub DP: %d \n", min);
	printf("Max de sub DS: %d \n", max);

}
void meniu()
{

	int op, n, m;
	do {
		printf("\n1. Matrice aleatoare\n");
		printf("2. Afisare matrice\n");
		printf("3. Suma\n");
		printf("4. Minim si maxim\n");
		printf("0.Iesire\n");
		printf("optiune: "); scanf("%d", &op);
		switch (op)
		{
		case 1:
			do {
				printf("Introduceti numarul de linii:\n");
				scanf("%d", &n);
				printf("Introduceti numarul de coloane:\n");
				scanf("%d", &m);
				if (m != n)
					printf("n trebuie =m\n");
			} while (m != n);
			citire(n, m);
			break;
		case 2:
			afisare(n, m);
			break;
		case 3:
			suma(n, m);
			break;
		case 4:
			minMax(n, m);
			break;

		default:
			break;
		}

	} while (op != 0);
}
int main()
{
	meniu();
}