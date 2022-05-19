import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
	    for(int i=1;i<=n*2;i++)
	    {
	        for(int j=1;j<=n*2;j++)
	        if((j<=n-i+1||j<=i-n)||((2*n-j+1)<=n-i+1)||((2*n-j+1)<=i-n))
	            System.out.print("*");
	        else
	            System.out.print(" ");
	    System.out.println(" ");
	    }
		
	}
}


