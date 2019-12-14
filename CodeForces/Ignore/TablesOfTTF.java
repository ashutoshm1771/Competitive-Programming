import java.lang.*;
class ThreeTable extends Thread
{
public void run()
{
for(int i=1;i<11;i++)
{
System.out.println("3 * "+i+"="+3*i);
}
}
}
class TwoTable extends Thread
{
public void run()
{
for(int i=1;i<11;i++)
{
System.out.println("2 * "+i+"="+2*i);
}
}
}
class FourTable extends Thread
{
public void run()
{
for(int i=1;i<11;i++)
{
System.out.println("4 * "+i+"="+4*i);
}
}
}
class TablesOfTTF
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
