// Question Link: https://www.codechef.com/problems/CHFM

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
		    long[] arr = new long[n];
		    long sum=0;
		    for(int i=0;i<n;i++)
		    {
		        arr[i]=sc.nextLong();
		        sum=sum+arr[i];
		    }
		    int i, k=0;
		    double x=(double)sum/n;
            for(i=0;i<n;i++){
            if(arr[i]==x) 
            {
                k=i; 
                break;
                
            }
            }
            if(i==n)
            System.out.println("Impossible");
            else 
            System.out.println(k+1);
		}
		    
	}
}
