//Question Link: https://www.codechef.com/problems/LIFELTD

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
		    int flag =0;
		    String a=sc.next(),b=sc.next(),c=sc.next();
		    for(int i=0;i<2;i++)
		    {
		        if(a.charAt(i)=='l' && b.charAt(i)=='l'&& b.charAt(i+1)=='l')
                {
                    flag=1;
                }
                if(b.charAt(i)=='l' && c.charAt(i)=='l'&& c.charAt(i+1)=='l')
                flag=1;
		    }
		    if(flag==1)
		    System.out.println("yes");
		    else
		    System.out.println("no");
		    
		}
	}
}
