//Question Link:https://www.codechef.com/problems/CHEFRECP

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
		    int n= sc.nextInt();
		    int[] arr = new int[n];
		    ArrayList<Integer> count =  new ArrayList<Integer>();
		    ArrayList<Integer> a = new ArrayList<Integer>();
		    for(int i=0;i<n;i++)
		    arr[i]=sc.nextInt();
		    int flag=0;
		    for(int i=0;i<n;i++)
		    {
		        
		        int temp=arr[i];
		        if(!a.contains(temp))
		        {
		            a.add(temp);
		            int c=1;
		            while(i<n && arr[i]==temp)
		            {
		                c++;i++;
		            }
		            i--;
		            if(!count.contains(c))
		            {
		                count.add(c);
		            }
		            else
		            {
		                flag=1;
		                System.out.println("NO");
		                break;
		            }
		        }
		        else
		        {
		            flag=1;
		                System.out.println("NO");
		                break;
		        }
		    }
		    if(flag==0)
		    System.out.println("YES");
		    
		    }
	}
}