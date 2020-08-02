//Question Link:https://www.codechef.com/problems/NAICHEF

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner S = new Scanner(System.in);
		
		int t=0;
		if(S.hasNextInt())
		{
		    t= S.nextInt();
		}
		
		while(t-->0)
		{
		    int n = S.nextInt();
		    
		    int a = S.nextInt();
		    
		    int b = S.nextInt();
		    
		    int ar[] = new int[n];
		    
		    for(int i=0;i<n;i++)
		    {
		        ar[i] = S.nextInt();
		    }
		    
		    double count1=0;
		    double count2=0;
		    double probability=0;
		    for(int i=0;i<n;i++)
		    {
		        if(a==ar[i])count1++;
		        if(b==ar[i])count2++;
		    }
		    probability = (count1/n)*(count2/n);
		    System.out.println(probability);
		    
		    
		    
		}
		
	}
}
