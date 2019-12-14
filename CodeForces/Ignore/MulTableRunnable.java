//Flow of control of a program - Thread
//One of the Thread - Main Thread
import java.lang.*;
import java.util.*;
class Multiply implements Runnable 
{
int a; 
Multiply(int a)
{
this.a=a;
}
    public void run() 
    { 
        try
        {  
	for(int i=1;i<11;i++)
            System.out.println (a + 
                                "*"+i+"="+i*a); 
                                                                 
        } 
        catch (Exception e) 
        { 
            
            System.out.println ("Exception is caught"); 
        }
    } 
} 
  
 
class MulTableRunnable 
{ 
    public static void main(String[] args) 
    { 
Scanner sc=new Scanner(System.in);
int a=sc.nextInt();
          
        
            Thread object = new Thread(new Multiply(a)); 
            object.start(); 
         
    } 
}                                            