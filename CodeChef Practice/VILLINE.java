// Question Link: https://www.codechef.com/problems/VILLINE

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
		int m = sc.nextInt();
		int c = sc.nextInt();
		int g1=0, g2=0;
		while(t-->0)
		{
		    int x= sc.nextInt();
		    int y= sc.nextInt();
		    int p = sc.nextInt();
		    int Y= m*x +c;
		        if(y>Y)
		        g1 = g1+p;
		        else
		        g2 = g2+p;
		    
		}
		if(g1>g2)
		System.out.println(g1);
		else
		System.out.println(g2);
	    
	}
}
