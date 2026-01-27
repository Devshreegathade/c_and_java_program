import java.util.Scanner;

public class Datatypesin_java {
    public static void main(String[] args){
        int num;
        short shortnum;
        byte bytenum;
        long longnum;
        boolean boolnum;
        char chartype;
        float floatnum;
        double doublenum;
        String strtype;

        Scanner sc = new Scanner(System.in);

        System.out.println("these are datatypes in java");
        System.out.println();
        
        //int
        System.out.print("Enter an integer: ");
        System.out.println("Range : " + Integer.MIN_VALUE + " to " + Integer.MAX_VALUE);
        num = sc.nextInt();
        System.out.println("Integer is: " + num);
        System.out.println("Size of int is: " + Integer.BYTES + " bytes");
        System.out.println();

        // Short
        System.out.print("Enter a short number: ");
        System.out.println("Range : " + Short.MIN_VALUE + " to " + Short.MAX_VALUE);
        shortnum = sc.nextShort();
        System.out.println("Short number is: " + shortnum);
        System.out.println("Size of short is: " + Short.BYTES + " bytes");
        System.out.println();

        //long
        System.out.println("Enter a long number: ");
        System.out.println("Range : " + Long.MIN_VALUE + " to " + Long.MAX_VALUE);
        longnum = sc.nextLong();
        System.out.println("long number is : "+ longnum);
        System.out.println("size of long is : " + Long.BYTES + " bytes");
        System.out.println();

        //byte
        System.out.println("Enter a byte : ");
        System.out.println("Range : " + Byte.MIN_VALUE + " to " + Byte.MAX_VALUE);
        bytenum = sc.nextByte();
        System.out.println("byte  number is : " + bytenum);
        System.out.println("size of byte is : " +Byte.BYTES + " bytes ");
        System.out.println();

        //float
        System.out.println("Enter a float number: ");
        System.out.println("Range : " + Float.MIN_VALUE + " to " + Float.MAX_VALUE);
        floatnum = sc.nextFloat();
        System.out.println("float  number is : " + floatnum);
        System.out.println("size of float is : " +Float.BYTES + " bytes ");
        System.out.println();

        //double
        System.out.println("Enter a double number: ");
        System.out.println("Range : " + Double.MIN_VALUE + " to " + Double.MAX_VALUE);
        doublenum = sc.nextDouble();
        System.out.println("double  number is : " + doublenum);
        System.out.println("size of double is : " + Double.BYTES + " bytes ");
        System.out.println();

        //boolean
        System.out.println("Enter a boolean value(true/false) : ");
        boolnum = sc.nextBoolean();
        System.out.println("boolean value is : " + boolnum);
        //System.out.println("size of boolean value is : " +Boolean.BYTES + " bytes ");
        System.out.println();

        //char
        System.out.println("Enter a character :");
        //System.out.println("Range : " + Character.MIN_VALUE + " to " + Character.MAX_VALUE);
        chartype = sc.next().charAt(0);
        System.out.println("character is : " + chartype);
        System.out.println("size of character is : " +Character.BYTES + " bytes ");
        System.out.println();

        //string
        System.out.println("Enter a string : ");
        //System.out.println("Range : " + String.MIN_VALUE + " to " + String.MAX_VALUE);
        strtype = sc.next();
        System.out.println("string is : " + strtype);
        //System.out.println("size of string is : " +String.BYTES + " bytes ");
        System.out.println();
    
        sc.close();
        
        
    }
}
