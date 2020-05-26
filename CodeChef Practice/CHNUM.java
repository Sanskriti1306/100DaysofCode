import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner (System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int pos=0, neg=0;
            for(int i =0;i<n;i++)
            {
                int a = sc.nextInt();
                if(a>0)
                    pos++;
                else
                    neg++;
            }
            if(pos !=0 && neg!=0)
            {
                if(pos<=neg)
                    System.out.println(pos +" "+neg);
                else
                    System.out.println(neg +" "+pos);
            }
            if(pos!=0 && neg==0 )
                System.out.println(pos +" "+pos);
            if(pos==0 && neg!=0)
                System.out.println(neg +" "+neg);
        }
    }
}