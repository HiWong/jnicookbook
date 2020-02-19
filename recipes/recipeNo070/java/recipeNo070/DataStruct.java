package recipeNo070;

import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Structure;
import com.sun.jna.Pointer;
import java.util.List;

interface CLibrary extends Library {

  public int retrieveData(CLibrary.DataStruct.ByRef result);

  public class DataStruct extends Structure {

    public static final List<String> FIELDS =  List.of("ptr", "data", "width", "height");

    public static class ByRef extends DataStruct implements Structure.ByReference { }

    public Pointer ptr;
    public Pointer data;
    public int width;
    public int height;

    @Override
    protected List<String> getFieldOrder() {
      return FIELDS;
    }

    public DataStruct() {
      super();
      setAlignType(ALIGN_NONE);
    }
  }
}
