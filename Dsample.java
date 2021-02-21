import java.util.Scanner;
public class Dsample
{
public static void main(String[] args)
{
Scanner sc=new Scanner(System.in);
String s1=sc.nextLine();
for(int i=48;i<=57;i++)
{
int count=0;
for(int j=0;j<s1.length();j++)
{
if(s1.charAt(j)==i)
{
count++;
}
}
if(count>0)
System.out.println(count+ " ");
else
System.out.println(0+ " ");
}
}
}
