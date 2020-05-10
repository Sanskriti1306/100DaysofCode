//Question Link: https://www.codechef.com/problems/EXAM1

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
		for(int i=0;i<t;i++){
            int count=0;
            int n = sc.nextInt();
            String s1=sc.next();
            String s2=sc.next();
            for(int j =0;j<n;j++){
                if(s1.charAt(j)==s2.charAt(j)){
                    count++;
                }
                else if(s2.charAt(j)=='N'){
                }
                else{
                    j++;
                }
            }
            System.out.println(count);
        
        }
        
	}
}
