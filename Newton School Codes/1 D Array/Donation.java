import java.util.*;
class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int max=0,n,i;
        int[] money=new int[10000];
        n=sc.nextInt();
        for(i=0;i<n;i++)
        {
            money[i]=sc.nextInt();
        }
        max=money[0];
        int sum=0;
        for(i=0;i<n;i++)
        {
           if(money[i]>=max)
           {
               System.out.print(0+" ");
               max=money[i];
           }
           else
           {
               System.out.print(max-money[i]+" ");
               sum=sum+(max-money[i]);
           }
           sum+=money[i];

        }
        System.out.println();
        System.out.println(sum);
    }
}
