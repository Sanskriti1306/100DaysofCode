//Question Link: https://www.codechef.com/problems/GVAWAY

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
		    int l=sc.nextInt();
		    int r= sc.nextInt();
		    int k= sc.nextInt();
		    if(r==l)
		    System.out.println("1");
		    else
		    System.out.println(k);
		}
	}
}
