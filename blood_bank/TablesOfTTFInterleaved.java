import java.lang.*;
class ThreeTable extends Thread
{
public void run()
{

for(int i=1;i<11;i++)
{try{
System.out.println("3 * "+i+"="+3*i);
Thread.sleep(1000);
}
catch(InterruptedException e)
{
System.out.println(e);
}
}

}
}
class TwoTable extends Thread
{
public void run()
{

for(int i=1;i<11;i++)
{try{
System.out.println("2 * "+i+"="+2*i);
Thread.sleep(1000);
}

catch(InterruptedException e)
{
System.out.println(e);
}}
}
}
class FourTable extends Thread
{
public void run()
{

for(int i=1;i<11;i++)
{try{
System.out.println("4 * "+i+"="+4*i);
Thread.sleep(1000);
}

catch(InterruptedException e)
{
System.out.println(e);
}}
}
}
class TablesOfTTFInterleaved
{
public static void main(String[] args)
{
TwoTable t2=new TwoTable();
ThreeTable t3=new ThreeTable();
FourTable t4=new FourTable();
t2.start();
t3.start();
t4.start();
}
}
