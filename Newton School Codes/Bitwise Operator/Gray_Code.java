import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
                      // Your code here
        Scanner sc=new Scanner (System.in);
        int t=sc.nextInt();
        while(t>0){
            int n=sc.nextInt();
            System.out.println((n^(n>>1)));
            t--;
        }
    }
}
