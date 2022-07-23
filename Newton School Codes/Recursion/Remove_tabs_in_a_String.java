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

	// Add the first character of str
	// and string from recursion
	return str.charAt(0) +
		removeCharRecursive(
		str.substring(1), X);
}

// Driver Code
public static void main(String[] args)
{
	Scanner sc=new Scanner(System.in);
	// Given String
	String str = sc.nextLine();

	// Given character
	char X = ' ';

	// Function call
	str = removeCharRecursive(str, X);
	
	System.out.println(str);
}
}

// This code is contributed by jrishabh99
