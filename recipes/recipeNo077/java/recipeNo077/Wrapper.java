package recipeNo077;

/**
* This class will hold String value. Instead of setting some string
* I am setting value of stringVal to null and pass it back to Java
* from JNI based code
*/

public class Wrapper {

  private String stringVal = null;

  public String getStringVal() { return stringVal; }

  public void setStringVal(String stringVal) { this.stringVal = stringVal; }
  
}
