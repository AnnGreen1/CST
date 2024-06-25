package Method;

public class RecursiveFunction {
    public static void main(String[] args){
        int res = factorial(12);
        System.out.print("res:"+res);
    }

    public static int factorial(int n){
        System.out.println(n);
        if(n<1){
            // 边界条件
            return 1;
        }else{
            // 递归
            return n*factorial(n-1);
        }
    }
}

