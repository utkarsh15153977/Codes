// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.*;

class HelloWorld {
    public static void main(String[] args) {
        
    int[] arr = {15,-15,0,0,0,0};

    Map<Integer, Integer> map = new HashMap<>();

    int prefixSum = 0;
    int maxLength = -1;

    // map.put(0,-1);
    
    for(int i =0; i< arr.length; i++){
        prefixSum += arr[i];
        
        if(prefixSum == 0){
            int len = i + 1;
            maxLength = Math.max(maxLength, len);
        }
        
        if(map.containsKey(prefixSum)){
            int len = i - map.get(prefixSum);
            maxLength = Math.max(maxLength, len);
        }else{
            map.put(prefixSum, i);
        }
    }

    System.out.println(maxLength);
    
        
    }
}
