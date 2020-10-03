#include<iostream>
#include<stdio.h>
#define max 10
using namespace std;

int main()
{
	
	int t;
	cin >> t;
	
	for(int i=0;i < t;i++)
	{
		int r,c;
		cin >> r;
		cin >> c;
		int grid[max][max];
		for(int j=0 ; j < r ; j++)
		{
			for(int k=0 ; k < c ; k++)
			{
				cin >> grid[j][k];
			}
		}
		for(int j=0 ; j < r ; j++)
		{
			for(int k=0 ; k < c ; k++)
			{
				if(grid[j][k]>3)
					goto US;
			}
		}
		
		
		for (int x=0 ; x<r ; x++)	
		{
			if(grid[x][0] > 2 || grid[x][c-1] > 2)
			{
				goto US;
			}
		}
		
		for (int y=0 ; y<c ; y++)
		{
			if(grid[0][y] > 2 || grid[r-1][y] > 2)
			{
				goto US;
			}
		}
		
		if(grid[0][0] > 1 || grid[0][c-1] > 1 || grid[r-1][0] > 1 || grid[r-1][c-1] > 1)
		{
			goto US;
		}

		cout << "Stable" << endl ; continue;
		 US : cout << "Unstable" << endl ;
	}
return 0;
} 		
