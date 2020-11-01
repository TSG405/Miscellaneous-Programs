/*Take a postive number and replace the number by the sum of the squares of the digits. Repeat the process until the number equals 1(one).If the number ends with 1 then it is called a Happy number.*/
import java.util.*;
public class ProgramTSG
{
    public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int num,sum=0,d;
    System.out.println("Enter a number");
    num=in.nextInt();
    sum=num;
    do
    {
        num=sum;sum=0;
        do
        {
            d=num%10;
            sum=sum+d*d;
            num=num/10;
             }
             while(num>0);
               }
               while(sum>9);
               if(sum==1)
               System.out.println(" Yayy! it is a Happy Number ");
               else
               System.out.println(" Nope, Not a happy number! ");
     }
}
