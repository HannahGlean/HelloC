Static Implementation of ADT List

- mkc 2015

The following are the included source files:

/******************************************************************/
1. List.java - This is the List ADT definition

2. MyList.java - This is the List ADT implementation

3. ListFullException.java - This class handles a full list

4. ListIndexOutOfBoundsException.java - This class handles the case when list index given is out of bounds

5. TestList.java - This program tests the MyList class that implements List ADT definition (using a String Array)

6. TestList_int.java - This program will test the MyList class that implements List ADT (using an Integer array)

7. ListCanvas.java - This file keeps track of the List display.
/******************************************************************/


The relevant source codes in DATASAL are List.java (ADT definition), MyList.java(ADT implementation), and TestList.java (Test file). Understand these 3 files and perform
the following modifications. (Disregard the other files)

1. Add a replace() method both in List.java (ADT definition) and MyList.java(ADT implementation).

Pseudocode:

replace(List aList, int i, Itemtype newItem)
// postcondition: Replace the ith item on the aList with newItem.
if (i>=1 and i<=aList.size( )){
   aList.remove(i);
   aList.add(i, newItem)
} //end if  

2. Add a removeAll() method both in List.java (ADT definition) and MyList.java(ADT implementation). 
// postcondition: Removes all the elements in the list.

3. Test your implementation by modifying TestList.java.
(This should include the newly added replace() and removeAll() methods

4. Upload the screenshot of your successful run in our facebook groups.

DUE: Jan. 22, 2015 (CLASS TIME!) 

