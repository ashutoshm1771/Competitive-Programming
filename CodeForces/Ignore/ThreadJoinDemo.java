import java.lang.*;
class FirstThread extends Thread
{ int n;
FirstThread(int n)
{ this.n=n;}
public void run()
{

for(int i=n;i<n+19;i++){
System.out.println(i);}
}
}
class ThreadJoinDemo 
{
public static void main(String[] args)
{
FirstThread t1=new FirstThread(1);
FirstThread t2=new FirstThread(20);
t1.start();
try{
t1.join();
}
catch(Exception e){System.out.println(e);}
t2.start();
try{
t2.join();
}
catch(Exception e){System.out.println(e);}
}
}