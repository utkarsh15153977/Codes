/*
Reversing a double linked list
easy
Problem Statement
Given a double linked list with consisting of N nodes, your task is to reverse the linked list and return the head of the modified list.
Input
User Task:
Since this will be a functional problem, you don't have to take input. You just have to complete the function Reverse() that takes head node of the linked list as a parameter.


Constraints:
1 <= N <= 10^3
1<=value<=100
Output
Return the head of the modified linked list.
Example
Input:
6
1 2 3 4 5 6

Output:
6 5 4 3 2 1

Explanation:
After reversing the list, elements are as 6 <-> 5 <-> 4 <-> 3 <-> 2 <-> 1.
Reversing a double linked list
easy
Problem Statement
Given a double linked list with consisting of N nodes, your task is to reverse the linked list and return the head of the modified list.
Input
User Task:
Since this will be a functional problem, you don't have to take input. You just have to complete the function Reverse() that takes head node of the linked list as a parameter.


Constraints:
1 <= N <= 10^3
1<=value<=100
Output
Return the head of the modified linked list.
Example
Input:
6
1 2 3 4 5 6

Output:
6 5 4 3 2 1

Explanation:
After reversing the list, elements are as 6 <-> 5 <-> 4 <-> 3 <-> 2 <-> 1.

*/

/*
class Node {
    Node next;
    Node prev;
    int val;

    Node(int val) {
        this.val = val;
        next = null;
        prev = null;
    }
}
*/

//No time limit exceed
public static Node Reverse(Node head) {
    Node temp = null;
    Node current = head;
    while (current != null) {
        temp = current.prev;
        current.prev = current.next;
        current.next = temp;
        current = current.prev;
      }
        if (temp != null) {
            head = temp.prev;
        }
        return head;
}

//Time limit exceed

 public static Node Reverse(Node head) {
    //complete this function
    Node p1 = head;
        Node p2 = head.next;

        p1.next = null;
        p1.prev = p2;

        while(p2 != null){
            p2.prev = p2.next;
            p2.next = p1;
            p1 = p2;
            p2 = p2.next;
        }
        head = p2;
        return head;

}
