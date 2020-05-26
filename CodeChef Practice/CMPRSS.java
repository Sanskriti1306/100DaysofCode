/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static int find(int[] arr, int l)
    {
        int n = arr.length;
        for(int i=l;i<n-1;i++)
        {
            if((arr[i+1]-arr[i])!=1)
            return i;
        }
        return n-1;
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
		    int n = sc.nextInt();
            int[] arr= new int[n];
            for(int i =0;i<n;i++)
            arr[i]= sc.nextInt();
           
            for(int i=0;i<n;i++)
            {
               int j =find(arr,i);
               if(j>i+1)
               {
                   System.out.print(arr[i]+"..."+arr[j]);
                   i=j;
               }
               else 
               System.out.print(arr[i]);
		       if(i!=n-1)
		       System.out.print(",");
		    }
		    System.out.println();
		    
		}
	}
}
