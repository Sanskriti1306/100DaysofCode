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
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while(t-->0)
		{
		    int a=in.nextInt(),b=in.nextInt();
            int maxx=a+b;
            int a1=a%10;
            int a2=a/10;
            int b1=b%10;
            int b2=b/10;
            if(b2>0)maxx=(int)Math.max(maxx,a2*10+b2 + a1*10+b1);
            if(a2>0)maxx=(int)Math.max(maxx,b2*10+a2 + b1*10+a1);
            System.out.println(maxx);
		}
	}
}
