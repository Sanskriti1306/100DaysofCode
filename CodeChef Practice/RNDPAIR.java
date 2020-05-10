// Question link :https://www.codechef.com/problems/RNDPAIR

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
		int t= sc.nextInt();
		while(t-->0)
		{
		    int n = sc.nextInt();
		    int arr[]= new int[n];
		    for(int i=0;i<n;i++)
		    arr[i]=sc.nextInt();
		    int max=0,c=0;
		    for(int i=0;i<n;i++)
		    {
		        for(int j=i+1;j<n;j++)
		        {
		            if(arr[i]+arr[j]>max)
	            {
	                max=arr[i]+arr[j];
	                c=1;
	            }
	            else if((arr[i]+arr[j])==max)
	                c++;
		        }
		    }
            int z=(n*(n-1))/2;
		        double p=0;
		        p=((double)c/z);
		        System.out.println(p);
		}
	}
}
