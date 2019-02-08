# Design-Patterns

This repository contains very basic programs to understand the design patters. 

### 1. Factory Design Pattern : 


Sailent features :
1. Type : Creational Pattern
2. Features : Create the object using an interface, in such a way that we abstract the process of creating the object from the
              user. Clients will use the same interface in order to create the objects. 
              Use a static method in order to create the instances of the object. 
              Gives rise to code that doesnt have tight coupling.
3. Example : Library and client APIs.

### 2. Singleton Design Pattern:

Sailent Features:

1. Type : Creational Pattern
2. Features : Restricts the initialization of a class to a single object
              Using private static pointer and public accessor functions to access the pointer and the class variables.   
              Client uses only the public accessor functions to interact 
              with the class.
              Always try to understand the differences between the global variables and the singleton patterns.
3. Disadvantages : You are not supposed to use global data variables in your code, that does not mean you can replace it                          with a singleton class.
                   Finding the right balance between exposure to the singleton class and the accessibility of the same. 


		
