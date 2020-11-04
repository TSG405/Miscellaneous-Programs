/*
                                       NEON NUMBER

A Neon number is a number where the sum of digits of square of the number is equal to the number itself.

 for example : 
 9 is a neon number 
 9*9=81 and (8+1)=9 
 
*/

import java.util.*;
public class Program
{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println("You entered: "+n);
        int s=n*n;
        int sum=0;
        while(s>0)
        {
           sum=sum+s%10;
           s=s/10; 
        }
        if(n==sum)
        System.out.println("\nCongratulations!! This is a Neon number ");
        else
System.out.println("\nSorry!! This is not a Neon number");
    }
}
