// Question Link: https://www.codechef.com/problems/BRKBKS

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
		int  t= sc.nextInt();
		while(t-->0)
		{
		  int S = sc.nextInt();
		  int W1= sc.nextInt();
		  int W2= sc.nextInt();
		  int W3= sc.nextInt();
		    if(S>=W1+W2+W3)
        {
            System.out.println("1");
        }
        else
        {
             if((W1+W2)<=S||(W3+W2)<=S)
           {
                  System.out.println("2");
           }
           else
           {
                 System.out.println("3");
           }
		}
		}
	}
}
