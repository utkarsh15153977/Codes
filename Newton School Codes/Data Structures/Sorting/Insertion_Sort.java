import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
                      // Your code here
        Scanner sc = new Scanner(System.in);
        try{
            int t=sc.nextInt();
            while(t>0){
                int n=sc.nextInt();
                int a[] = new int [n];
                for(int i=0;i<n;i++){
                    a[i]=sc.nextInt();
                }
                for(int i=0;i<n;i++){
                    int key=a[i];
                    int j=i-1;
                    while(j>=0&&a[j]>key){
                        a[j+1]=a[j];
                        j--;
                    }
                    a[j+1]=key;
                }
                for(int i=0;i<n;i++){
                    System.out.print(a[i]+" ");
                }
                System.out.println();                
                t--;
            }
        }
        catch(Exception e){
            return;
        }
    }
}
