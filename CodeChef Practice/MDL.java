//Question Link: https://www.codechef.com/problems/MDL

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
		    int n = sc.nextInt();
		    int[] a = new int[n];
		    int max=0,min=0,z=0,y=0;
		    for(int i =0;i<n;i++)
		    {
		        a[i]= sc.nextInt();
		        if(i==0)
		        {
		             max=min=a[i];
		        }
		        else
		        {
		            if(a[i]>max)
                    {
                    max=a[i];
                    z=i;
                    }
                    if(a[i]<min)
                    {
                    min=a[i];
                    y=i;
                    }
		        }
		    }
		    if(z<y)
		    System.out.println(max+" "+min);
		    else
		    System.out.println(min+" "+max);
		}
	}
}
