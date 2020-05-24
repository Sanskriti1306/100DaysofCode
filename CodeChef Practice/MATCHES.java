//Question Link: https://www.codechef.com/problems/MATCHES

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void check(int n)
    {
        int c=0;
    while(n!=0)
    {
        int x= n%10;
        if(x==1)
        c=c+2;
        if(x==2 || x==3 || x==5)
        c=c+5;
        if(x==4)
        c=c+4;
        if(x==6 ||x==9 ||x==0)
        c=c+6;
        if(x==7)
        c=c+3;
        if(x==8)
        c=c+7;
        n=n/10;
    }
    System.out.println(c);
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t= sc.nextInt();
		while(t-->0)
		{
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    int sum = a+b;
		    check(sum);
		}
	}
}
