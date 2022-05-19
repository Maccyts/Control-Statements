import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int s=sc.nextInt();
	    int n=0,a=0;
	    if(s>250)
	    {
	        n=s-250;
	        a+=n*7;
	        s=s-n;
	    }
	    if(s>150)
	    {
	        n=s-150;
	        a+=n*5;
	        s=s-n;
	    }
	    if(s>50)
	    {
	        n=s-50;
	        a+=n*3;
	    }
		System.out.println(a+(a*20/100));
	}
}

