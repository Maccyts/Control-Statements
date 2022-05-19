import java.util.*;
public class Main
{
    static int teq(int n)
    {
        int i=1,b=1;
        while(n!=0)
        {
            int a=n%2;
            if(a==1)
                i=i*2;
                n=n/2;
        }
        return(i-1);
    }
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
	    
		System.out.print(teq(n));
	}
}


