recipeNo020 - Passing Java objects into C code
---

This sample code presents how to pass Java object. In this sample I pass object of type CustomClass that contains both, primitive types and object of type OtherClass.

    /* CustomClass.java */
    package recipeNo020;
    public class CustomClass {
        public int iVal;
        public double dVal;
        public char cVal;
        public boolean bVal;
        public OtherClass oVal;
        public String sVal;
    }

    /* OtherClass.java */
    package recipeNo020;
    public class OtherClass {
        public String sVal;
    }

To compile the code run

    make clean
    make 
    make test


