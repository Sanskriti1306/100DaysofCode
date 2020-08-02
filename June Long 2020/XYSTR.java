//Question Link:https://www.codechef.com/JUNE20B/problems/XYSTR

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
        int  t= sc.nextInt();
        while(t-->0)
        {
            String s = sc.next();
            int c=0;
            for(int i=0;i<s.length()-1;i++)
            {
                if(s.charAt(i)=='x'&& s.charAt(i+1)=='y'|| s.charAt(i)=='y'&& s.charAt(i+1)=='x' )
                {
                    i++;
                    c++;
                }

            }
            System.out.println(c);
        }
    }
}
