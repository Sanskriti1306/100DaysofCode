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
            int [] arr= new int[6];
            for(int j=0;j<n;j++)
            {
                String s = sc.next();
                for(int i=0;i<s.length();i++)
                {
                    if(s.charAt(i)=='c')
                        arr[0]++;
                    if(s.charAt(i)=='o')
                        arr[1]++;
                    if(s.charAt(i)=='d')
                        arr[2]++;
                    if(s.charAt(i)=='e')
                        arr[3]++;
                    if(s.charAt(i)=='h')
                        arr[4]++;
                    if(s.charAt(i)=='f')
                        arr[5]++;
                }
            }
            arr[0]=arr[0]/2;
            arr[3]=arr[3]/2;
            int min = Integer.MAX_VALUE;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<min)
                    min=arr[i];
            }
            System.out.println(min);
        }

    }
}