//Question link :https://www.codechef.com/problems/TABLET

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef3
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t= sc.nextInt();
		while(t-->0)
		{
		    int n = sc.nextInt();
		    int b = sc.nextInt();
		    int max=0,flag=0;;
		    for(int i=0;i<n;i++)
		    {
		        int w = sc.nextInt();
		        int h = sc.nextInt();
		        int p = sc.nextInt();
		        if(p<=b)
		        {
		            flag=1;
		            int area= w*h;
		            if(area>max)
		            max=area;
		        }
		    }
		    if(flag==1)
		    System.out.println(max);
		    else
		    System.out.println("no tablet");
		}
	}
}
