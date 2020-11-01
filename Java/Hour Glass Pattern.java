import java.util.*;
public class ProgramTSG
{
    public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      int i,j;
      
      //upper part
      for(i=n;i>=1;i=i-2) 
      {
          for(j=1;j<=n-i;j++)
          {
              System.out.print(" ");
          }
          for(j=1;j<=i;j++)
          {
              System.out.print("* ");
          }
          System.out.println();
      }
      
      //lower part
      for(i=i+2;i<=n;i=i+2)
      {
          for(j=n-i;j>=1;j--)
          {
              System.out.print(" ");
          }
          for(j=1;j<=i;j++)
          {
              System.out.print("* ");
          }
          System.out.println();
      }
    }
}
