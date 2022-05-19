
import java.util.*;
import java.lang.*;
public class Main
{
    public static void main(String[] args) {

    Scanner sc=new Scanner(System.in);
    String s=sc.nextLine();
    char a[]=s.toCharArray();
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(a[i]<a[j])
            {
                char t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
        //s=" ";
        for(int i=0;i<l;i++)
            //s=s+a[i];
            	System.out.print(a[i]);
    }
}
		
	




