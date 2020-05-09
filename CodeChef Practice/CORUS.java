//Question Link:https://www.codechef.com/MAY20B/problems/CORUS

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef3
{
    public static int check (char[] ch, long n, long c)
    {
        int pen=0;
        int [] arr = new int[26];
        for(int i=0;i<n;i++)
        {
            int a= ch[i]- 'a';
            if(arr[a]<c)
            arr[a]=arr[a]+1;
            else
            pen++;
        }
        return pen;
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{		// your code goes here
		Scanner sc = new Scanner(System.in);
		long t= sc.nextLong();
		while(t-->0)
		{
		    long n= sc.nextLong();
		    long q = sc.nextLong();
		    String str= sc.next();
		    char[] ch = new char[str.length()]; 
  
        for (int i = 0; i < str.length(); i++) 
        { 
            ch[i] = str.charAt(i); 
        } 
        
        
        for(int i=0;i<q;i++)
        {
            long c=sc.nextLong();
            System.out.println(check(ch,n,c));
        }
		}
	}
}
