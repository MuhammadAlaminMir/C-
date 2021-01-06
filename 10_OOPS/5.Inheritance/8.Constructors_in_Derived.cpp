/* 
    * Constructors in Derived Classes : 
      >> We can use contructors in derived classes in C++
      >> If base class constructor does not have any arguments, ther is no need of any contructor in derived class.
      >> But if there are one or more arguments inn the vase class constructor, derived class need to pass arguments to the base class constructor.
      >> if both base and derived classes have constructors, base class contructor is executed first.

    * Constructors in multiple/Multilevel inheritance:
      >> In multiple inheritance, base classes are constructed in the order in which they appear in the class declaration.
      >> In multilevel inheritance, the constructors are executed in the order of inheritance
    
    * Special syntax:
      >> C++ supports an special syntax of passing arguments to multiple base classes.
      >> The constructor of the derived class recives all the arguments at once and then will pass the class to the respective base classes
      >> The body is called after all the all constructors are finished executing.

    * Special case of virtual base class:
      >> The constructors for virtual base classes are inveked before an nonvirtual base class. 
      >> If there ae multiple virtual base classes, the are invoked in the order declared.
      >> Any non-virtual base class are then constructed before the derived class constructor is executed


 */