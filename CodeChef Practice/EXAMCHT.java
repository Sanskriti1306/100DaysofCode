/* package codechef; // don't place package name! */

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
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    int s=Math.abs(a-b);
		    if(s==0)
		    System.out.println("-1");
		    else
		    {
		        int c=0;
		        for(int i =1;i<=Math.sqrt(s);i++)
		        {
		            if(s%i==0)
		            {
		            c=c+2;
		            if(i==s/i)
		            c=c-1;
		            }
		            
		        }
		        System.out.println(c);
		    }
		}
	}
}
