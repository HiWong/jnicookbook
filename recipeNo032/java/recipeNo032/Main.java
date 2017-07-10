package recipeNo032;

public class Main {

    static {
      System.loadLibrary("recipeNo032");
    }

    public native void callmeback();

    public static void main(String[] args){
      Main main = new Main();
      main.callmeback();
    }
    public static int fun() {
        System.out.println("From JVM");
        return 0;
    }
}
