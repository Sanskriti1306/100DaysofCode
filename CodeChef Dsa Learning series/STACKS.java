//Question Link :https://www.codechef.com/LRNDSA04/problems/STACKS

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
			Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		    int n=sc.nextInt();
		    long arr[]=new long[n];
		    for(int i=0;i<n;i++)
		    arr[i]=sc.nextLong();
		    long res[]=new long[n];
		    int count=1;
		    res[0]=arr[0];
		    
		    for(int i=1;i<n;i++)
		    {
		        int low=0;
		        int high=count-1;
		        
		        int ans=-1;
		        while(low<=high)
		        {
		            int mid=(high+low)/2;
		            if(res[mid]>arr[i])
		            {
		              ans=mid;
		              high=mid-1;
		            }
		            else
		            low=mid+1;
		        }
		        if(ans==-1)
		        {res[count]=arr[i];count++;}
		        else
		        {
		            res[ans]=arr[i];
		           
		        }
		    }
		    System.out.print(count+" ");
		    
		    for(int i=0;i<count;i++)
		    System.out.print(res[i]+" ");
		    
		    System.out.println();
		    
		}
	}
}
