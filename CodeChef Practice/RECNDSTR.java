//Question Link:https://www.codechef.com/problems/RECNDSTR

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
		    String str = sc.next();
		    
		    String r = str.substring(str.length()-1)+ str.substring(0, str.length()-1);
		    String l = str.substring(1)+str.substring(0,1);
		    if(r.compareTo(l)==0)
            System.out.println("YES");
            else
            System.out.println("NO");
		 
		}
	}
}
