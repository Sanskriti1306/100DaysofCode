//Question Link: https://www.codechef.com/problems/CHEALG

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef3
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		String str = sc.next();
		char [] ch = new char[str.length()];
		for(int i=0;i<str.length();i++)
		ch[i]= str.charAt(i);
		String f="";
		int sum=0; char p=ch[0];
		for(int i=0;i<str.length();i++)
		{
		    if(ch[i]==p)
		    {
		        sum++;
		    }
		    else{
		        p=ch[i];
		        f = f+ch[i-1]+sum;
		        sum=1;
		    }
		}
		f = f+ch[str.length()-1]+sum;
		
		if(str.length()>f.length())
		System.out.println("YES");
		else
		System.out.println("NO");
	}
}
}