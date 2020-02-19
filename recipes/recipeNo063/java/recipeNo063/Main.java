package recipeNo063;

import recipeNo063.OuterClass;

public class Main {

    static {
      System.loadLibrary("InnerClass");
    }

    private native int getInnerValueNative(OuterClass oc);
    
    public int getInnerValue(OuterClass oc) {
        return getInnerValueNative(oc);
    }

    public static void main(String [] arg) {

      Main obj = new Main();
      OuterClass oc = new OuterClass();

      System.out.println("Result: " + obj.getInnerValue(oc));
    }
}
