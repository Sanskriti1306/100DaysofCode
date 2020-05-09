// Question Link: https://www.codechef.com/problems/RECNDNOS

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
		    int[] arr= new int[n];
		    int max=0;
		    for(int i=0;i<n;i++)
		    {
		    arr[i]= sc.nextInt();
		    if(arr[i]>max)
		    max=arr[i];
		    }
		    int[] freq= new int[max+1];
		    for(int i=0;i<n;i++)
		    {
		        int p = arr[i];
		        freq[p]=freq[p]+1;
		        if(i!=n-1&&arr[i]==arr[i+1])
               {
                   i=i+1;
               }
		    }
		    int mx=0,num=0;
		    for(int i=0;i<max+1;i++)
		    {
		        if(freq[i]>mx)
		        {
		            mx=freq[i];
		            num=i;
		        }
		    }
		    System.out.println(num);
		}
	}
}