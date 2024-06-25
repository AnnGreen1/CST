package Method;

public class VarargsParameter {
    public static void main(String[] args){
        fun(5,4,5,6,7,8);
    }

    public  static int  fun(int aim,int ...arr){
        System.out.print(aim);
        System.out.print(arr);
        System.out.print(arr[0]);
        System.out.print(arr[1]);
        return  0;
    }

}
