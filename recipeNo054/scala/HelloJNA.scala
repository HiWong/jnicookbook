import com.sun.jna.Library
import com.sun.jna.WString
import com.sun.jna.Native

trait HelloWorld extends Library {

  def displayMessageWWrapper(m: WString) : Boolean
  def displayMessageWrapper(m: String)  : Boolean

}

object HelloJNA {

  def main(args:Array[String]):Unit = {

    val libc   = Native.load( "HelloWorld", classOf[HelloWorld] )
   
    var result = libc.displayMessageWWrapper( new WString("Hello from Scala!") )
    println("Result: " + result);
    
    result     = libc.displayMessageWrapper( new String("Hello from Scala!") )
    println("Result: " + result);

  }
}

