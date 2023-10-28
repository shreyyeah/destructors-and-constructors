# destructors-and-constructors
What are constructors?
They are special member functions that are called when an object of a class is created. Constructors are used to initialize the object's data members and perform any necessary setup for the object. They  have the same name as the class, and they do not have a return type, not even void. Constructors are automatically called when objects are instantiated and are used to set the initial state of those objects.
Several types of constructors are mentioned below- 
1. Default constructors
2. Parameterized constructors
3. Copy constructors, etc.

How to use constructors-
1. Decide on the parameters and types that the constructor should take.
2. Implement the constructor outside the class definition
3. Use the constructor needed for eg. Default or parameterized.

DESTRUCTORS- Is basically a special member function that is called when an object of a class goes out of scope or is explicitly deleted. The primary purpose of a destructor is to release any resources or perform cleanup tasks associated with an object before it is destroyed. Destructors are the counterpart of constructors, which are responsible for object initialization.

To use a destructor we follow the same steps as for a constructor.
