import java.lang.*;
class FirstClass extends Thread
{
public void run()
{
System.out.println("Thread Name is "+Thread.currentThread().getName());
System.out.println("Thread Priority is "+Thread.currentThread().getPriority());
if(Thread.currentThread().isAlive())
{
System.out.println("Thread Alive");
}
}
}
class SecondClass extends Thread
{
public void run()
{

System.out.println("Thread Name is "+Thread.currentThread().getName());
System.out.println("Thread Priority is "+Thread.currentThread().getPriority());
if(Thread.currentThread().isAlive())
{
System.out.println("Thread Alive");
}
}
}
class ThreadMethodsDemo 
{
public static void main(String[] args)
{
FirstClass fc=new FirstClass();
SecondClass sc=new SecondClass();
fc.setPriority(Thread.MAX_PRIORITY);
sc.setPriority(Thread.MIN_PRIORITY);
fc.setName("First Thread");
sc.setName("Second Thread");
fc.start();
sc.start();
}
}