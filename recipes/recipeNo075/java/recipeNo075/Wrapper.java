package recipeNo075;

/**
* This class will hold String and int value. We will return object
* of that class from JNI.
*
*/

public class Wrapper {

  private int    intVal    = 0;
  private String stringVal = null;

  public Wrapper(int intVal, String stringVal) {

    this.intVal    = intVal;
    this.stringVal = stringVal;

  }

  public int getIntVal()       { return intVal; }

  public String getStringVal() { return stringVal; }

  public void setIntVal(int intVal)          { this.intVal = intVal; }

  public void setStringVal(String stringVal) { this.stringVal = stringVal; }
  
}
