import java.util.*;
public class array
{
    public static void main(String[] args)
    {
        Scanner get = new Scanner(System.in);
        int a[];
        System.out.println("Enter the array size");
        int size = get.nextInt();
        a = new int[size];
        System.out.println("Enter the array elements");
        for(int i=0; i<a.length; i++)
        {
            a[i]=get.nextInt();
        }
        for(int i=0;i<a.length; i++)
        {
            System.out.println(a[i]);
        }    
    }
}