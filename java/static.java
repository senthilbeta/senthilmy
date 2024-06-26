import java.util.*;
class volum
{
    int shap(int l,int b,int h)
    {
        return l*b*h;
    }
}
public class staticDemo
{
    public static void main(String[] args)
    {
        volum blackbox = new volum();
        int res = blackbox.shap(20,30,40);
        System.out.println(res);
    }

}