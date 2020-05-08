//Question Link:https://www.codechef.com/LRNDSA01/problems/FCTRL

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
		int n= sc.nextInt();
		int arr[]= new int[n];
		for(int i=0;i<n;i++)
		{
		    arr[i] = sc.nextInt();
		}
		for(int j=0;j<n;j++)
		{
        int count = 0;
        for (int i = 5; arr[j] / i >= 1; i *= 5) 
        count += arr[j] / i;
        
        System.out.println(count);
		}
	}
}
