/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;



class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int[] a = new int[n];
            int[] b= new int [n];
            for(int i=0;i<n;i++)
                a[i] = sc.nextInt();
            for(int i=0;i<n;i++)
                b[i] = sc.nextInt();
            int f=0, ba=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]>b[i])
                {
                    f =1;
                    break;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(a[i]>b[n-1-i])
                {
                    ba=1;
                    break;
                }
            }
            if(f==1 && ba==1)
                System.out.println("none");
            if(f==0 && ba==0)
                System.out.println("both");
            if(f==0 && ba==1)
                System.out.println("front");
            if(f==1 && ba==0)
                System.out.println("back");
        }
    }
}