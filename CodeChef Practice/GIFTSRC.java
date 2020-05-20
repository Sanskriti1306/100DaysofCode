//Question Link: https://www.codechef.com/problems/GIFTSRC

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
		    int n= sc.nextInt();
		    String str= sc.next();
		    char[] s= new char[n];
		    for(int i=0;i<n;i++)
		    s[i]= str.charAt(i);
		    int x=0,y=0,l=0,r=0,u=0,d=0;
		   for(int i=0;i<n;i++)	
		   {
		       if(s[i]=='L'&&l==0){x--;l=1;r=1;u=0;d=0;}
            if(s[i]=='R'&&r==0){x++;l=1;r=1;u=0;d=0;}
            if(s[i]=='U'&&u==0){y++;l=0;r=0;u=1;d=1;}
            if(s[i]=='D'&&d==0){y--;l=0;r=0;u=1;d=1;}
        }
		    System.out.println(x+" "+y);
		}
	}
}