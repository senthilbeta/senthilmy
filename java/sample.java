import java.util.*;
public class sample{
    public static void main(String arg[])
    {
        Scanner get=new Scanner(System.in);

        System.out.println("Enter the A value:");
        short a=get.nextShort();

        System.out.println("Enter the B value:");
        int b=get.nextInt();

        System.out.println("Enter the c Value:");
        long c=get.nextLong();

        System.out.println("Enter the D Value:");
        float d=get.nextFloat();

        get.nextLine();
        System.out.println("Enter your name:");
        String name=get.nextLine();

        System.out.println("short Value is: "+ a);
        System.out.println("int Value is: "+ b);        
        System.out.println("long Value is: "+ c);        
        System.out.println("floating point Value is: "+ c);        
        System.out.println("name is: "+ name);        

    }
}