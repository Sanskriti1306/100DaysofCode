//Question Link:https://www.codechef.com/LRNDSA04/problems/LOWSUM
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		try {
		Scanner sc = new Scanner(System.in);
		int t= sc.nextInt();
		while(t-->0)
		{
		    int k = sc.nextInt();
		    int q= sc.nextInt();
		    
		    long[] m= new long[k];
		    long[] s= new long[k];
		    
		    for(int i=0;i<k;i++)
		    m[i]= sc.nextLong();
		    
		    for(int i=0;i<k;i++)
		    s[i]= sc.nextLong();
		    
		    Arrays.sort(m);
		    Arrays.sort(s);
			
		    
		    ArrayList<Long> res=new ArrayList<Long>();
		    int a=0;
		    for(int i=0;i<k;i++)
		    {
		        int s1 =k/(i+1);
		        for(int j=0;j<s1;j++)
		        {
		            res.add(m[i]+s[j]);
		        }
		    }
		    Collections.sort(res);
		    
		    for(int i=0;i<q;i++)
		    {
		        System.out.println(res.get(sc.nextInt()-1));
		    }
		}
		} catch(Exception e) {
		    System.out.print(e);}
	}
}
