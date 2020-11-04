import java.util.Scanner;

/**
 * Title: ASCII character codes viewer
 * Author: TSG405
 * Instruction: Enter a string.
 */ 
 
public class Program
{
	public static void main(String[] args) 
  {
		Scanner sc = new Scanner(System.in);
		String word = sc.nextLine();
		char[] chars = word.toCharArray();
		
		System.out.println("You entered: " + word);
		System.out.println("Here are ASCII character codes.");		
		for(char c : chars) 
    {
		    System.out.printf("%c: %d\n", c, (int) c);
		}
	}
}
