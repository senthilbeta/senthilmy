import java.util.*;
class volum
{
    int length;
    int breath;
    int heigth;
    static int count;
    volum(int l, int b, int h){
        length = l;
        breath = b;
        heigth = h;
        count++;
    }
    volum(int l)
    {
        length = l;
        System.out.println(length);
        count++;
    }
    int shap()
    {
        return length*breath*heigth;
    }
    static void saticCount()
    {
        System.out.println(count);
    }
}
public class staticDemo
{
    public static void main(String[] args)
    {
        volum blackbox = new volum(10,1,13);
        volum whitebox = new volum(10);
        int res = blackbox.shap();
        System.out.println(res);
        volum.saticCount();
    }

}