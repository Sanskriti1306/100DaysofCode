//Question Link:https://www.codechef.com/APRIL20B/problems/COVIDLQ

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
            int[] arr = new int[n];
            for(int i=0;i<n;i++)
                arr[i]= sc.nextInt();
            int pos=-1,flag=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==1)
                {
                    if(pos==-1)
                        pos=i;
                    else
                    {
                        int diff=i-pos;
                        if(diff<6)
                        {
                            flag=1;
                        }
                        pos=i;
                    }
                }
            }
            if(flag==1)
                System.out.println("NO");
            else
                System.out.println("YES");
        }
    }
}