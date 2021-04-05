/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
//struct CarWash
//{

//};
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
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
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};



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

 struct School
 {
     //number Of Female Students
     int numberOfFemaleStudents = 0;
     //number Of Male Students
     int numberOfMaleStudents = 0;
     //number Of Teachers
     int numberOfTeachers = 0;
     //number Of Absents Student Per Day
     int numberOfAbsentsStudentPerDay = 0;
     //number Of Attendances Per Day
     int numberOfAttendancesPerDay = 0;

     struct Classroom
     {
         int numberOfChairs = 0;
         int numberOfDesks = 0;
         int numberOfComputers = 0;
         int numberOfLockers = 0;
         int numberOfWindows = 0;

         void turnOnSmartBoard(bool smartBoardPowerSwitchOn = true);
         void turnOffSmartBoard(bool smartBoardPowerSwitchOn = false);
         void turnOnTheLights(bool lightsSwitchOn = true);
     };
     //provide Math Classe
     void provideMathClasse(bool isAWeekDay = true);
     //give Diplomas
     void giveDiplomas(double grade = 0.00);
     //provide Sport Classes
     void provideSportClasses(bool isAWeekDay = true);
 };


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

 struct Supermarket
 {
     //number Of Employees
     int numberOfEmployees = 0;
     //number Of Aisles
     int numberOfAisles = 0;
     //number Of Sales Per Day
     int numberOfSalesPerDay = 0;
     //number Of Customers
     int numberOfCustomers = 0;
     //amount Of Profits Per Day
     double amountOfProfitsPerDay = 0.00;

     struct employee
     {
         int seniority = 0;
         double salary = 00.00;
         double totalHoursWorkedPerDay = 00.00;
         int totalDaysWorkedPerWeek = 0;
         double amountOfExtraHours = 0.00;

         void clockIn(double arrivalTime = 00.00);
         void clockOut(double departureTime = 00.00);
         void depositPaycheck(double paycheckAmount = 00.00);
     };
     //sale Products
     void saleProducts(double price = 0.00);
     //proceed To Stock Inventory
     void proceedToStockInventory(bool endOfTheMonth = true);
     //recieve Order
     void recieveOrder(bool isAWeekDay = true);
 };

/*
Thing 3) Computer company
5 properties:
    1) Number of Stores
    2) Number of salers
    3) Number of technicians
    4) Amount of loss
    5) Amount of visits in store
3 things it can do:
    1) Sale computer
    2) Repair computer
    3) Sale product
 */

  struct ComputerCompany
 {
     //number Of Stores
     int numberOfStores = 0;
     //number Of Salers
     int numberOfSalers = 0;
     //number Of Technicians
     int numberOfTechnicians = 0;
     //amount Of Loss
     double amountOfLoss = 0.00;
     //amount Of Visits In Store
     int amountOfVisitsInStore = 0;
     //sale Computer
     void saleComputer(double computerPrice = 0.00);
     //repair Computer
     void repairComputer(bool stillUnderWarranty = false);
     //sale Product
     void saleProduct(double productPrice = 0.00);
 };

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

   struct OnlineStore
 {
     //number Of Products Offered
     int numberOfProductsOffered = 0;
     //number Of Reviews Per Day
     int numberOfReviewsPerDay = 0;
     //number Of Clicks
     int numberOfClicks = 0;
     //number Of Sales
     int numberOfSales = 0;
     //number Of Visits On The Website
     int numberOfVisitsOnTheWebsite = 0;
     //ship Product
     void shipProduct(bool paymentApprouved = true);
     //sale Product
     void saleProduct(double price = 0.00);
     //refund Product
     void refundProduct(double salePrice = 0.00);
 };

/*
Thing 5) Keys
5 properties:
    1) velocity value
    2) attack value
    3) number of keys
    4) decay value
    5) midi CC # associated
3 things it can do:
    1) activate aftertouch
    2) play note
    3) sustain note
 */

   struct Keys
 {
     //velocity Value
     int velocityValue = 0;
     //attack Value
     int attackValue = 0;
     //number Of Keys
     int numberOfKeys = 0;
     //decay Value
     int decayValue = 0;
     //midi CC Number Associated
     int midiCcNumAssociated = 1;
     //activate Aftertouch
     void activateAftertouch(bool aftertouchPressed = true);
     //play Note
     void playNote(bool keyboadIsOn = true);
     //sustain Note
     void sustainNote(bool sustainPadalEngaged = true);
 };

/*
Thing 6) Modulation wheel
5 properties:
    1) width in mm 
    2) leght in mm 
    3) modulation value
    4) number of possible modulations
    5) repositionning time
3 things it can do:
    1) maximum modulation
    2) minimum modulation
    3) filter sound
 */

   struct ModulationWheel
 {
     //width In Mm
     int widthInMm = 0;
     //leght In Mm
     int leghtInMm = 0;
     //modulation Value
     int modulationValue = 0;
     //number Of Possible Modulations
     int numberOfPossibleModulations = 0;
     //repositionning Time
     double repositionningTime = 0.00;
     //maximum Modulation
     void maximumModulation(bool modulationWheelEngagedToTheMax = true);
     //minimum Modulation
     void minimumModulation(bool modulationToZeroPosition = true);
     //filter Sound
     void filterSound(bool filterModSelected = false);
 };

/*
Thing 7) Pitch wheel
5 properties:
    1) width in mm
    2) leght in mm 
    3) current position
    4) max pitch
    5) pitch wheel sensitivity
3 things it can do:
    1) pitch up
    2) pitch down
    3) back to pitch zero
 */

   struct PitchWheel
 {
     //width In Mm
     int widthInMm = 0;
     //leght In Mm
     int leghtInMm = 0;
     //current Position
     float currentPosition = 0.0f;
     //max Pitch
     int maxPitch = 50;
     //pitch Wheel Sensitivity
     float pitchWheelSensitivity = 0.0f;
     //pitch Up
     void pitchUp(double pitchWheelPositionAboveZero = 0.00);
     //pitch  Down
     void pitchDown(double pitchWheelPositionBelowZero = 0.00);
     //pitch Back To Zero
     void pitchBackToZero(bool pitchWheelPositionToZero);
 };

/*
Thing 8) Volume knob
5 properties:
    1) number of levels
    2) diameter in mm
    3) height in mm
    4) midi CC #
    5) level in decibels
3 things it can do:
    1) turn up volume
    2) turn down volume
    3) indicates current volume
 */

 struct VolumeKnob
 {
     //number Of Levels
     int numberOfLevels = 0;
     //diameter In Mm
     int diameterInMm = 0;
     //height In Mm
     int heightInMm = 0;
     //midi CC Number
     int midiCcNum = 0;
     //level In Decibels
     int levelInDecibels = 0;
     //turn Up Volume
     void turnUpVolume(double currentVolumeLevel = 0.0);
     //turn Down Volume
     void turnDownVolume(double currentVolumeLevel = 0.0);
     //indicates Current Volume
     void indicatesCurrentVolume(double currentVolumeLevel = 0.0);
 };

/*
Thing 9) Display
5 properties:
    1) width in cm
    2) height in cm
    3) touch sensitivity 
    4) touch response 
    5) number of icons 
3 things it can do:
    1) Sleepmode
    2) Nightshift mode
    3) refresh page
 */

 struct Display
 {
     //width In Cm
     int widthInCm = 0;
     //height In Cm
     int heightInCm = 0;
     //touch Sensitivity
     float touchSensitivity = 0.0f;
     //touch Response
     float touchResponse = 0.0f;
     //number Of Icons
     int numberOfIcons = 0;
     //sleep Mode
     void sleepMode(double numberOfMinutesSinceLastActivity = 0.00);
     //night shift Mode
     void nightshiftMode(bool isLaterThanNinePm = true);
     //refresh Page
     void refreshPage(int numberOfsecondsSinceLastrefresh = 0);
 };

/*
Thing 10) Keyboard
5 properties:
    1) Keys
    2) Modulation wheel
    3) Pitch wheel
    4) Volume knob
    5) Display
3 things it can do:
    1) recieve midi signal
    2) send midi signal
    3) sustain note
 */

 struct Keyboard
 {
     //Keys
     Keys key;
     //Modulation wheel
     ModulationWheel modulationEffect;
     //Pitch wheel
     PitchWheel pitchEffect;
     //Volume knob
     VolumeKnob volume;
     //Display
     Display information;
     //recieve Midi Signal
     void recieveMidiSignal(bool midiInEnabled = true);
     //send Midi Signal
     void sendMidiSignal(bool midiOutEnabled = true);
     //sustain Note
     void sustainNote(bool sustainPadalEngaged = true);
 };

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
