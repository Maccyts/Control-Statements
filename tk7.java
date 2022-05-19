public class Main
{
    static Boolean check(int n)
    {
        boolean f=true;
        int t=n,a=0;
        while(n!=0)
        {
            a=n%10;
            n=n/10;
        if(t%10==3||a%10==3)
            f=false;
        }
            return f;
    }
	public static void main(String[] args)
	{
	  
	    for(int i=1;i<=200;i++)
	    {
	        if(check(i))
	        {
	            if(i>=1&&i<=99)
	            System.out.print(i+" ");
	            else if(i>=100&&i<=199)
	            System.out.print(i+",");
	            else
	            System.out.print(i+".");
	            
	        }
	    }
	}	
}




