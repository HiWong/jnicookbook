package recipeNo057

import com.sun.jna.Library
import com.sun.jna.WString
import com.sun.jna.Native
import com.sun.jna.Structure

object HelloJNA {

  def main(args:Array[String]) : Unit = {

    val libc       = Native.load( "HelloWorld", classOf[CLibrary] )
   
    var result_val = libc.GetDataValue()
    //println("ByVal: field_1: " + result_val.field_1 + " a: " + result_val.bool_a + " b: " + result_val.bool_b + " field_2: " + result_val.field_2);
    println("ByVal: field_1: " + result_val.field_1 + " field_2: " + result_val.field_2);

    var result_ref = libc.GetDataAllocated()
    //println("ByRef: field_1: " + result_ref.field_1 + " a: " + result_ref.bool_a + " b: " + result_ref.bool_b + " field_2: " + result_ref.field_2);
    println("ByRef: field_1: " + result_ref.field_1 + " field_2: " + result_ref.field_2);

  }
}

