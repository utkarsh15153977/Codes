import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

// don't change the name of this class
// you can add inner classes if needed
class Main {
    public static void main (String[] args) {
                      // Your code here
        try{
            Scanner sc = new Scanner (System.in);
            String s=sc.nextLine();
            for(int i=0;i<s.length();i=i+2){
                System.out.print(s.charAt(i)+" ");
            }
        }catch(Throwable e){
            return ;
        }
    }
}
