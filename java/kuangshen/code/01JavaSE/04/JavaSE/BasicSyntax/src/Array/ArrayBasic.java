package Array;

public class ArrayBasic {
    public static void main(String[] args){
        int[] arr = new int[10];

        for(int i=0;i<arr.length;i++){
            arr[i] = i;
            System.out.println(arr[i]);
        }

        System.out.print(arr);
    }
}
