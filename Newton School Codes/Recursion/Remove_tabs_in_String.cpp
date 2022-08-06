/*

Remove tabs in a String
Problem Statement
Write a recursive program to remove all tabs or spaces from a string.
Input
The first line contains the string s.

Constraints:
0
Output
Prints the string after removing all the tabs and spaces.
Example
Sample Input:
Hello World

Sample Output:
HelloWorld

Explanation:
The string "Hello World" after removing spaces is "HelloWorld".

*/


// Java program for the above approach
import java.util.Scanner;
class Main{
	
// Function to remove all occurrences
// of a character in the string
static String removeCharRecursive(String str,
								char X)
{
	
	// Base Case
	if (str.length() == 0)
	{
		return "";
	}

	// Check the first character
	// of the given string
	if (str.charAt(0) == X)
	{

		// Pass the rest of the string
		// to recursion Function call
		return removeCharRecursive(
			str.substring(1), X);
	}
	return str.charAt(0) +
		removeCharRecursive(
		str.substring(1), X);
}
public static void main(String[] args)
{
	Scanner sc=new Scanner(System.in);
	String str = sc.nextLine();
	char X = ' ';
	str = removeCharRecursive(str, X);
	
	System.out.println(str);
}
}
