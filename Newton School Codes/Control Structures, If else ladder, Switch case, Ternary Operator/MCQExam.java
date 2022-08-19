/*

MCQ Exam
easy
Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Sara has an MCQ exam containing 100 questions this sunday but she isn't prepared. She came to know that in her exam
- >P number of Questions will have A as the correct option
- >Q number of Questions will have B as the correct option
- >R number of Questions will have C as the correct option
- >S number of Questions will have D as the correct option
Sara doesn't know the order of the questions. If Sara filled the MCQs optimally using the above information what will be the maximum of minimum marks she can get.
Input
The input contains 4 integers P, Q, R, and S.

Constraints:-
0 <= P, Q, R, S <= 100

Note:- P + Q + R + S will always be 100
Output
Print the maximum marks Sara can get.
Example
Sample Input:-
8 10 20 62

Sample Output:-
62

*/


import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework


class Main {
    
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int p = sc.nextInt();
        int q = sc.nextInt();
        int r = sc.nextInt();
        int s = sc.nextInt();
        if(p + q + r + s != 100){
            return;
        }

        int a[] = new int[4];
        a[0] = p;
        a[1] = q;
        a[2] = r;
        a[3] = s;

        Arrays.sort(a);
        System.out.println(a[3]);
    }
}
