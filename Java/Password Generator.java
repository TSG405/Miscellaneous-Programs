//Enter the password length. Integer!

import java.security.NoSuchAlgorithmException;

//Import the Date class.
import java.util.Date;

//Import the date editing class.
import java.text.SimpleDateFormat;

//Importing the MessageDigest class.
import java.security.MessageDigest;

//Importing the Random class.
import java.util.Random;

//Importing the Scanner class.
import java.util.Scanner;

//Denoting the name of the program class
public class GenPswd {

    //We denote the main method.
    public static void main(String[] args)
    throws Exception {
        
        /*With the help
          currentTimeMillis, we 
          write time into a 
          variable startTime.*/
        long startTime
        = System.currentTimeMillis();
    
        /*Creating an instance of the Scanner
          class.*/
        Scanner input = new Scanner(System.in);
        
        /*Denoting an integer variable,
         and assigning it user input.*/
        int lengh = input.nextInt();
        
        /*Disabling the Scanner 
        object so that it doesn't 
        consume the machine's resources.*/
        input.close();
        
        //Creating a lowercase letter variable.
        String charsNorml = 
        "qwertyuiopasdfghjklzxcvbnm";
        
        /*Creating a variable of uppercase
         letters.*/
        String charsUppercase =
        "QWERTYUIOPASDFGHJKLZXCVBNM";
        
        /*Creating a variable consisting of
         numbers.*/
        String numbers =
        "1234567890";
        
        /*The value of special characters
         is optional. Greatly increases
          password protection. Not all 
          forms are supported.*/
         String  specChars = "";
        
        /*Creating a string consisting
         of all our characters.*/
        String pswd = charsNorml
        + charsUppercase + numbers + specChars;
        
        /*We create a variable to
          check the password for protection.*/
          String protection = "";
        
        /*Denoting an instance
         of the Random class.*/
        Random rnd = new Random();
        
        /*Creating a Char array,
          and setting the number 
          of elements equal to the
          password length.*/
        char[] pass = new char[lengh];
        
        /*Creating a "for" loop
          to execute body as many 
          times as the password length*/
        for ( int i = 0; i < lengh; i++) {
        
            /*When sorting an array into
              elements, we assign a random
              character to each element of
              the "pass" array. Using
              charAt(index); we select
              a character from a string.
              And the index of an individual
              character is calculated by
              Random (range);. We set
              the range value by 
              specifying the length of
              the string of all our
              characters. Thus, at
              each iteration of the
              loop, we take a random
              character from our
              "pswd" string and
              assign it to an array
              element.*/
            pass[i] =
            pswd.charAt(rnd.nextInt
            (pswd.length()));
          };
          
        /*We find out how long
          the password is good.*/
        if ( lengh <= 6) {
            protection = 
            "Password is too short.";
        }
        
        if (lengh > 6) {
            protection = 
            "Password is medium in length.";
        }
        
        if (lengh > 12) {
            protection = 
            "Password is high in length.";
        }
          
        //Output a message to the user.
        System.out.print("Your password: ");
        
        //Output the value of the pass array.
        System.out.println(pass);
        
        System.out.println(protection);
        
        
        /*Creating a string from 
          the char array*/
        String passhex = new String(pass); 
       
        /*Creating the MessageDigest
          object using the
          getInstance ("SHA-1 or 
          SHA-256 or MD5"); method.*/
        MessageDigest md =
        MessageDigest.getInstance("MD5");
          
        /*This method takes an 
          array of bytes representing
          the message and 
          adds / passes it to the 
          MessageDigest object created 
          above.*/
        md.update(passhex.getBytes());
        
        /*This method calculates 
          the hash function for the 
          current object and returns
          the message digest as a 
          byte array.*/
        byte[] digest = md.digest();
        
        /*Converting the byte 
        array in to HexString format*/
        StringBuffer hexString = new
        StringBuffer();
        
        
       for (int i = 0;i<digest.length;i++) {
       
      //Zeroing the high-level bits 
      hexString.append(Integer.toHexString
      (0xFF & digest[i])); 
     }
        
        /*Output the MD5 hash to the user*/
        System.out.println
        ("MD5 Hash: " +
        hexString.toString());
        
        //callback
        System.out.println
        ("Follow me, if you like it!");
        
        //Create an instance of the class
        SimpleDateFormat dateFormat
          = new SimpleDateFormat
          ("d MMM yyyy HH:mm:ss z");
          
          //smiley of time
          System.out.print("");
          
          //Print date
          System.out.println
          (dateFormat.format
          (new Date() ) );
          
          /*We write the end
            time of the program
            to a variable endTime.*/
          long endTime
          = System.currentTimeMillis();
          
          //find the difference
          long time = (endTime - startTime);
          
          //smiley of time programm
          System.out.print("");
          
          //Print the program run time
          System.out.println
          ("Program runtime: " + (float)
          time/1000 + " seconds");
    } 
}
