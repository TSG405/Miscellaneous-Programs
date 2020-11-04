import java.io.*;

public class Base {
	
	static String[] array()
	{
		char[] arr = {9899, 9808, 9804, 9898};
		Character[] arr1 = new Character[arr.length];
		String[] res = new String[arr.length];		
		for(int i=0; i<arr.length; i++)
		{
			arr1[i] = (char)arr[i];
		}		
		for(int i=0; i < arr1.length; i++)
		{
			res[i] = (arr1[i]).toString();
		}	
		return res;		
	}
	public static void main(String[] args) {

		String[] emolist = array();
		
		try {
            OutputStreamWriter py = new OutputStreamWriter(System.out, 
            		"UTF-16");         
            String python =
            		("00000000000000000\n"
            		 +"00000011111000000\n"
            		 +"00000113111100000\n"
            		 +"00000111111100000\n"
            		 +"00000000111100000\n"
            		 +"00111111111102200\n"
            		 +"01111111111102220\n"
            		 +"01111111111002220\n"
            		 +"01111000000022220\n"
            		 +"01110022222222220\n"
            		 +"01110222222222220\n"
            		 +"00110222222222200\n"
            		 +"00000222200000000\n"
            		 +"00000222222200000\n"
            		 +"00000222232200000\n"
            		 +"00000022222000000\n"
            		 +"00000000000000000\n");
            
            String emo = python.
            replaceAll("0", emolist[0]).
            replaceAll("1", emolist[1]).
            replaceAll("2", emolist[2]).
            replaceAll("3", emolist[3]);
            
            py.write(emo);
            
            py.flush();
            py.close();
        }      
        catch(IOException e) {
        	System.out.println(e);
        }
        catch(Exception e) {
        	System.out.println(e);
        }
		
	}
}
