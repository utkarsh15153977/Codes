import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {

    public static int minxor(int a[],int n){
        int minxor=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                minxor=Math.min(minxor,a[i]^a[j]);
            }
        }
        return minxor;
    }

    public static void main (String[] args) {
                      // Your code here
        Scanner sc =  new Scanner (System.in);
        int n=sc.nextInt();
        int a[] = new int [n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int ans= minxor(a, n);
        System.out.println(ans);
    }
}
