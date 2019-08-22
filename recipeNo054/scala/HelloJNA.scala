import com.sun.jna.Library
import com.sun.jna.WString
import com.sun.jna.Native

trait HelloWorld extends Library {

  def displayMessageWrapper(m: WString) : Boolean

}

object HelloJNA {

  def main(args:Array[String]):Unit = {

    val libc   = Native.load( "HelloWorld", classOf[HelloWorld] )
    val result = libc.displayMessageWrapper( new WString("Hello from Scala!") )
    println("Result: " + result);

  }
}

