/*
Project 3 - Part 1b / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1)  Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
        a) For each plain-english UDT, write out 5 traits or properties and 3 things it can do
        b) remember: these properties will eventually become primitives
*/

/*
 example:  
 
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior

    Notice that I did not use "has a vacuum cleaner" or "Has eco-friendly cleaning supplies" as one of the properties
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "number of vacuum cleaners" and "number of eco-friendly cleaning supplies".  
    
    These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.
 */


/*
Thing 1) School
5 properties:
    1) Number of female students
    2) Number of male students
    3) Number of teachers
    4) Number of absents student per day
    5) Number of attendances per day
3 things it can do:
    1) Provide math classes
    2) Give diplomas
    3) Provide sport classes
 */

/*
Thing 2) Supermarket
5 properties:
    1) Number of employees
    2) Number of aisles
    3) Number of sales per day
    4) Number of customers
    5) Amount of profits per day
3 things it can do:
    1) Sale products
    2) Proceed to Stock inventory
    3) Recieve order
 */

/*
Thing 3) Computer company
5 properties:
    1) Number of Stores
    2) Number of salers
    3) Number of technicians
    4) Amount of loss
    5) Amount of visits in store
3 things it can do:
    1) Assist customer
    2) create ad
    3) Sale product
 */

/*
Thing 4) Online Store
5 properties:
    1) Number of products offered
    2) Number of reviews per day 
    3) Number of clicks
    4) Number of sales
    5) Number of visits on the website
3 things it can do:
    1) Ship product
    2) Sale product
    3) Refund product
 */



/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */


#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
