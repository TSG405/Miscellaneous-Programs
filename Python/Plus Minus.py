'''
This coding question was provided in a test (by Codility) -- C#,Python.



Question :---

Write a function 'Solution' that, given a string S of length N, replaces all occurrences of "plus" with "+" and all occurrences of "minus" with "-".

Examples:

1. Given S = "minusplusminus", the function should return "-+-".
2. Given S = "plusminusminusplus", the function should return "+--+".


Assume that:

> 'N' is an integer within the range [4 .. 1,000];
> 'S' is created by concatenating only strings "plus" and "minus".

In your solution, focus on correctness. The performance of your solution will not be the focus of the assessment. 
(No inbuilt string functions/methods are allowed to use for logic.  Eg - String.replace())

'''




>>

'''
In C# : -->

using System;
class TSG 
{

  static string Solution(String S)
  {
      char[] st = S.ToCharArray();
      string sf = "";
      
      for (int i = 0; i < st.Length; i++)
          {
              if (st[i] == 's')
              {
                  if (st[i - 2] == 'l')
                      sf = sf + "+";
                  else
                      sf = sf + "-";
              }
          }
      return sf;
  }

  public static void Main()
  {
      Console.WriteLine("Enter String:  ");
      Console.Write(Solution(S));
  }
  
}
'''

'''
In Python --->
'''

def Solution(S):
  
    F,a,N = "",0,len(S)
    
    for i in range(0,N+1):
        if S[a:i] == "minus":
            F += "-"
            a = i

        elif S[a:i] == "plus":
            F += "+"
            a = i
            
    return (F)

# Driver Code
S=input()
print(Solution(S))


'''   
~ @TSG405
'''
