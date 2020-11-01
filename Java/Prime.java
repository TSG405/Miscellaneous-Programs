import java.util.*;
import java.lang.*;
 
class GFG {
 
    // Check for number prime or not
    static boolean isPrime(int n)
    {
        if (n <= 1)
            return false;
 
 
        else if (n == 2)
            return true;
 
 
        else if (n % 2 == 0)
            return false;
 
    
        for (int i = 3; i <= Math.sqrt(n); i += 2) 
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
 
    // Driver code
    public static void main(String[] args)
    {
        if (isPrime(17))
            System.out.println("true");
 
        else
            System.out.println("false");
    }
}
