//Question Link:https://www.codechef.com/problems/CATFEED

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static boolean check(int[] freq, int x)
    {
        for(int j : freq )
		    {
		        if(Math.abs(j-x)>1 )
		        {
		            return true;
		        }
		    }
		    return false;
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t= sc.nextInt();
		while(t-->0)
		{
		    int n= sc.nextInt();
		    int m= sc.nextInt();
		    int[] arr= new int[m];
		    int[] freq = new int[n];
		    
		    for(int i=0;i<m;i++)
		    arr[i]= sc.nextInt();
		    
		    boolean flag =false;
		    for(int i=0;i<m;i++)
		    {
		        int p= arr[i];
		        freq[p-1]+=1;
		        if(check(freq, freq[p-1]))
		        flag=true;
		    }
		    System.out.println(flag ? "NO" : "YES");
		}
	}
}
