//Question Link:https://www.codechef.com/LRNDSA03/problems/DPAIRS

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
		int n= sc.nextInt();
		int m = sc.nextInt();
		int min=Integer.MAX_VALUE,a_i=0;
        int max=Integer.MIN_VALUE,b_i=0;
		//int min=0, max=0,a_i=0, b_i=0;
		for(int i=0;i<n;i++)
		{
		    int temp= sc.nextInt();
		    if(temp<min)
		    {
		        a_i=i;
		        min=temp;
		    }
		}
		for(int i=0;i<m;i++)
		{
		    int temp= sc.nextInt();
		    if(temp>max)
		    {
		        b_i=i;
		        max=temp;
		    }
		}
		for(int i=0;i<m;i++)
		{
		    System.out.println(a_i+" "+i);
		}
		for(int i=0;i<n;i++)
		{
		    if(i!=a_i)
		    System.out.println(i+" "+b_i);
		}
	}
}
