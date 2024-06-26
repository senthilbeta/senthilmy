import java.util.*;
class volum
{
     int length;
     int breath;
     int height;

     int vol()
    {
        return length*breath*height;
    }
}
public class sapmVolume
{
    public static void main(String[] args)
    {
        volum obj = new volum();
        obj.heigth=10;
        obj.breath=20;
        obj.length=30;
        System.out.println(obj.vol());

    }
}