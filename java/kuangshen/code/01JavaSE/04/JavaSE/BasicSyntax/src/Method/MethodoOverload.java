package Method;

public class MethodoOverload {

    public static  void main(String[] args){
        introduct("kuangshen",12);

        introduct("kuangshen",23,"男");
        
        introduct("狂神",35,false);
    }

    public static int introduct(String name, int age){
        System.out.println(name + "," + age+"岁");
        return 0;
    }

    public static int introduct(String name, int age,String gender){
        System.out.println(name + "," + age+"岁" + ",性别"+gender);
        return 0;
    }

    public static int introduct(String name, int age,Boolean bool){
        String words = bool ? "人生苦短，我选Java":"狗都不学Java";
        System.out.println(name + "，" + age +"岁，他说" + words);
        return 0;
    }

}
