import java.util.*;
public class loop
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        System.out.println("Enter the number and symbols");
        int a = get.nextInt();
        for(int i=0; i<a; i++)
        {
            for(int j=0;j<a; j++)
            {
                for(int k=0; k<a; k++)
                {
                System.out.print("*");
                }
                System.out.print("\n");
                
            }
                System.out.print("\n");
        }
    }
}