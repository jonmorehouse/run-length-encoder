Lab 1: RLE Compression Application
=

Overview
=


Run length encoding is one of the most basic forms of compression
Encode / Decode various different strings etc.

Want to then write a program that can encode / decode various files etc.

Finally, write some functionality that will then compress an entire directory.

Layout
=

Compression Library
-

This will be a templated library that can compress / decompress data. Bytewise or otherwise

Should be able to be extended upon in the future.
Pass in a pointer to the data as well as an integer telling us how much data to read.
This should be an object which will have a hash-table type element to store the data
Should have a getter function to grab a pointer to the data it contains

File Reading Base Object
-

This should be an abstract object that will initialize a file system and will then encode / decode etc the files that are given.
If decoding, we send in the file name, first we need to check that it exists.
To encode, we need to make sure the original file exists and then save it to the encoding file extension etc

Directory Library
-

Should be both linux capable and windows capable for scanning a directory for the files in it. 
Should be able to pass in a settings configuration to this element so only proper filenames can be configured to be used in it etc...

Should have a makefile configuration setting as well as some sort of macros etc
http://stackoverflow.com/questions/5919996/how-to-detect-reliably-mac-os-x-ios-linux-windows-in-c-preprocessor
Can inherit from the same abstract classes etc for this application

Testing Library
-

Use google test / google mock in the future to test our functionality.


Build System
-

We want to have a makefile for our tests, main and objects. The objects can be hard coded in for now to help with modularization of various elements.
We will have a different makefile for our directory object. This can be implemented later on so we can compile the correct windows code.

How RLE Works
-

