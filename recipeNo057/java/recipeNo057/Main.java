package recipeNo057;

import com.sun.jna.Library;
import com.sun.jna.WString;
import com.sun.jna.Native;
import com.sun.jna.Structure;

public class Main {

  public static void main(String [] arg) {

    CLibrary clib = (CLibrary) Native.loadLibrary("HelloWorld", CLibrary.class);
    CLibrary.Data.ByVal by_val = clib.GetDataValue();
    CLibrary.Data       by_ref = clib.GetDataAllocated();

    by_val.read();
    by_ref.read();

    //System.out.println("ByVal: field_1: " + by_val.field_1 + " a: " + by_val.bool_a + " b: " + by_val.bool_b + " field_2: " + by_val.field_2);
    //System.out.println("ByRef: field_1: " + by_ref.field_1 + " a: " + by_ref.bool_a + " b: " + by_ref.bool_b + " field_2: " + by_ref.field_2);
    System.out.println("ByVal: field_1: " + by_val.field_1 + " field_2: " + by_val.field_2);
    System.out.println("ByRef: field_1: " + by_ref.field_1 + " field_2: " + by_ref.field_2);
 

  }
}
