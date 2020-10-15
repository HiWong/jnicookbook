#!/bin/bash

cd $HOME

cat << EOF


      ****************************************************
            https://github.com/mkowsiak/jnicookbook
      ****************************************************

        This Docker container provides easy way of
        running JNI Cookbook samples.

        ------------------------------------------------
        
        Once started, you can go inside jnicookbook
        directory and run sample codes.

        It's realy simple. All you have to do, is to
        choose recipe and run it. Container's 
        environment is prepared to run all the samples.

        > cd jnicookbook/recipes
        > cd recipe001
        > make; make test
 
        ------------------------------------------------


EOF

/bin/bash
