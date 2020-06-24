// Author : Ashutosh Mishra

import java.util.*;
import java.lang.*;

class Factorial
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=s.nextInt();
        }
        int fact=1;
        for(int i=0;i<n;i++)
        {
            fact=1;
            for(int j=1;j<=a[i];j++)
            {
                fact=fact*j;
            }
            System.out.println(fact);
        }
    }
}
