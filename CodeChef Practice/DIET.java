//Question Link: https://www.codechef.com/problems/DIET

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
		    int n=sc.nextInt(),k=sc.nextInt();
            int sum=0;
            boolean flag=true;
            for(int i=0;i<n;i++)
            {
                int x=sc.nextInt();
                sum+=x;
                if(sum<k&&flag)
                {
                    System.out.println("NO "+(i+1));
                    flag=false;
                }
                else
                sum-=k;
            }
            if(flag)
            System.out.println("YES");
		}
	}
}