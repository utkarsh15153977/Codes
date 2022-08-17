/*

Pokemon Master
Easy

Time Limit: 2 sec
Memory Limit: 128000 kB
Problem Statement
Sara has A Pokeball with her and there are B pokemon in front of Sara. Considering each pokemon takes one Pokeball, your task is to tell Sara if she can catch all the pokemon or not.
Input
User Task:
Since this will be a functional problem, you don't have to take input. You just have to complete the function PokemonMaster() that takes integers A and B as arguments.

Constraints:-
1 <= A, B <= 8
Output
Return 1 if Sara can catch all the pokemon else return 0.
Example
Sample Input:-
4 3

Sample Output:-
1

Sample Input:-
4 6

Sample Output:-
0

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
