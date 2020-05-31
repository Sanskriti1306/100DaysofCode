//Question Link: https://www.codechef.com/MARCH20B/problems/CHPINTU

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner (System.in);
        int t= sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int[] a= new int[n];
            int[] b = new int[n];
            for(int i =0;i<n;i++)
                a[i]= sc.nextInt();
            for(int i=0;i<n;i++)
                b[i]= sc.nextInt();

            int min=Integer.MAX_VALUE;
            for(int i=1;i<=m;i++)
            {
                boolean found=false;
                int sum =0;
                for(int j=0;j<n;j++)
                {
                    if(a[j]==i)
                    {
                        found = true;
                        sum = sum+ b[j];
                    }
                }
                if(found )
                    min = Math.min(sum,min);
            }
System.out.println(min);
        }
    }
}
