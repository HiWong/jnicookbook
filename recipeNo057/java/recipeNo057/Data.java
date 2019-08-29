package recipeNo057;

import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Structure;
import com.sun.jna.Pointer;
import java.util.List;

interface CLibrary extends Library {

  public CLibrary.Data.ByVal GetDataValue();
  public CLibrary.Data.ByRef GetDataAllocated();

  public class Data extends Structure {

    public static final List<String> FIELDS =  List.of("field_1", "field_2", "b_1", "b_2");

    public static class ByVal extends Data implements Structure.ByValue { }

    public static class ByRef extends Data implements Structure.ByReference { }

    public int  field_1;
    public int  field_2;
    public boolean b_1;
    public boolean b_2;

    @Override
    protected List<String> getFieldOrder() {
      return FIELDS;
    }

    public Data() {
      super();
      setAlignType(ALIGN_NONE);
    }

  }

}

