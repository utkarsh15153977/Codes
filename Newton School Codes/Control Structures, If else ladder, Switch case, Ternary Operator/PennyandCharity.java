/*

Penny and Charity
Easy

Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
There is a charity which has N people. Penny wants to donate some of her clothes to the charity in such a way that all people receive equal clothes and each individual receives more than 1. If she has M clothes with her what is the maximum number of clothes one individual can get?
Input
User Task:
Since this will be a functional problem, you don't have to take input. You just have to complete the function Charity() that takes integers N, and M as arguments.

Constraints:-
1 <= M, N <= 1000
Output
Return the maximum number of clothes one individual can get if it is impossible to distribute clothes return -1.
Example
Sample Input
6 20

Sample Output
3

Sample Input
8 5

Sample Output
-1

*/


import java.util.Scanner;
import java.lang.*;


public class PannyAndCharity {
    public int Carity(int N, int M){
        /*if(N > 2*M){
            return -1;
        }
        return M/N;*/
        if(M/N>1)
            return M/N;
        else return -1;
    }
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        PannyAndCharity pc = new PannyAndCharity();
        int N = sc.nextInt();
        int M = sc.nextInt();
        int ans  = pc.Carity(N ,M);
        System.out.println(ans);
    }
}
