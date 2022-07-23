static void printPattern(int n,int curr, boolean flag)
{
     System.out.print(curr + " ");
 
        // If we are moving back toward the n and
        // we have reached there, then we are done
        if (flag == false && n == curr)
            return;
 
        // If we are moving toward 0 or negative.
        if (flag) {
 
            // If m is greater, then 5, recur with
            // true flag
            if (curr - 5 > 0)
                printPattern(n, curr - 5, true);
 
            else // recur with false flag
                printPattern(n, curr - 5, false);
        }
 
        else // If flag is false.
            printPattern(n, curr + 5, false);
        
    
}
