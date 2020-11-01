public class GFG 
{ 
    static boolean isPalindrome(String str) 
    { 
        int i = 0, j = str.length() - 1; 
  
        while (i < j) 
        { 
            if (str.charAt(i) != str.charAt(j)) 
                return false; 
            i++; 
            j--; 
        } 
        return true; 
    } 
  
    // Driver code 
    public static void main(String[] args) 
    { 
        String str = "geeks"; 
  
        if (isPalindrome(str)) 
            System.out.print("Yes!!"); 
        else
            System.out.print("No!!"); 
    } 
} 
