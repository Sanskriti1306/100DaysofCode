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
		    String s= sc.next();
		    char[] arr= new char[s.length()];
		    for(int i=0;i<s.length();i++)
            arr[i]= s.charAt(i);
            Arrays.sort(arr);
            for(int i=s.length()-1;i>=0;i--)
            System.out.print(arr[i]);
            System.out.println();
        }
	}
}
