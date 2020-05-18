//Question Link :https://www.codechef.com/problems/COUPSYS

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
		    int c1=0,c2=0,c3=0;
		    int max1=0, max2=0,max3=0;
		    for(int i=0;i<n;i++)
		    {
		        int c=sc.nextInt();
		        int l=sc.nextInt();
		        int d=sc.nextInt();
		        if(l==1 && d>max1 || d==max1 && l==1 && c<c1)
		        {
		            max1=d;
		            c1=c;
		        }
		        if(l==2 && d>max2 || d==max2 && l==2 && c<c2)
		        {
		            max2=d;
		            c2=c;
		        }
		        if(l==3 && d>max3 || d==max3 && l==3 && c<c3)
		        {
		            max3=d;
		            c3=c;
		        }
		    }
		    System.out.println(max1+" "+c1);
		    System.out.println(max2+" "+c2);
		    System.out.println(max3+" "+c3);
		    
		}
	}
}
