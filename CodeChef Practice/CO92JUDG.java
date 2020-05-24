//Question Link: https://www.codechef.com/problems/CO92JUDG

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
		    int n = sc.nextInt();
		    int[] a = new int[n];
		    int[] b = new int[n];
		    int suma=0, sumb=0;
		    for(int i =0;i<n;i++)
		    {
		    a[i]= sc.nextInt();
		    suma = suma + a[i];
		    }
		    for(int i =0;i<n;i++)
		    {
		    b[i]= sc.nextInt();
		    sumb= sumb + b[i];
		    }
		    Arrays.sort(a);
		    Arrays.sort(b);
		    if(suma-a[n-1] < sumb - b[n-1])
		    System.out.println("Alice");
		    else if(suma-a[n-1] > sumb - b[n-1])
		    System.out.println("Bob");
		    else
		    System.out.println("Draw");
        }
	}
}
