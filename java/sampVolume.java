import java.util.*;
class volume
{
     int length;
     int breath;
     int heigth;

    volume(int l,int b,int h)
    {
         length = l;
         breath = b;
         heigth = h;
    }

    void setDim(int l,int b,int h)
     {
         length = l;
         breath = b;
         heigth = h;
     }

     int vol()
    {
        return length*breath*heigth;
    }
}
public class sampVolume
{
    public static void main(String[] args)
    {
        volume obj = new volume(2,3,4);

        volume obj2 = new volume(100,20,30);

        // obj.setDim(10,20,30);

        System.out.println("volume is " +obj.vol());
        
        // obj2.setDim(30,10,2);

        System.out.println("volume is " +obj2.vol());


    }
}