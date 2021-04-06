 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different than the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
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

     struct Employee
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
