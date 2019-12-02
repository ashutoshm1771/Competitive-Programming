import java.lang.*;
class TwoTable implements Runnable
{
public void run()
{
for(int i=1;i<11;i++)
{
System.out.println("2 * "+i+"="+2*i);
}
}
}
class ThreeTable implements Runnable
{
public void run()
{
for(int i=1;i<11;i++)
{
System.out.println("3 * "+i+"="+3*i);
}
}
}
class FourTable implements Runnable
{
public void run()
{
for(int i=1;i<11;i++)
{
System.out.println("4 * "+i+"="+4*i);
}
}
}
class TablesOfTTFRunnable
{
public static void main(String[] args)
{
Thread t2=new Thread(new TwoTable());
Thread t3=new Thread(new ThreeTable());
Thread t4=new Thread(new FourTable());
t2.start();
t3.start();
t4.start();
}
}