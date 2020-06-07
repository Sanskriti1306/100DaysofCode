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
        Scanner sc= new Scanner(System.in);
        int t= sc.nextInt();
        int mod = 1000000007;
        while(t-->0)
        {
            int n = sc.nextInt();
            long [] arr =new long[n];
            for(int i=0;i<n;i++)
                arr[i]= sc.nextLong();
            Arrays.sort(arr);
            long sum =0;
            int count=0;
            for(int i=n-1;i>=0;i--)
            {
                if(arr[i]-count>0) {
                    sum += arr[i] - count;
                    count++;
                }
            }
            System.out.println(sum%mod);
        }

    }
}
