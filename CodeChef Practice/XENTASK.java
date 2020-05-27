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
		int t= sc.nextInt();
		while(t-->0)
		{
		    int n = sc.nextInt();
		    int[] x= new int[n];
		    int[] y= new int[n];
		    for(int i=0;i<n;i++)
		    x[i]= sc.nextInt();
		    for(int i=0;i<n;i++)
		    y[i]= sc.nextInt();
		    int suma=0, sumb =0;
		    for(int i =0;i<n;i++)
		    {
		        if(i%2==0)
		        {
		        suma=suma+x[i];
		        sumb=sumb+y[i];
		        }
		        else
		        {
		        suma=suma+y[i];
		        sumb=sumb+x[i];
		        }
		    }
		    if(suma<sumb)
		    System.out.println(suma);
		    else
		    System.out.println(sumb);
		}
	}
}
