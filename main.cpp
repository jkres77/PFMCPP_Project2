#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 char
 int
 unsigned int
 float
 double
 bool


2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    char shoeBox = 'd';
    char plantPot = 'G';
    char joyStick = 'v';

    int golfClub = 48093;
    int teaBag = -564;
    int lampShade = 12;

    unsigned int tissuePaper = 0;
    unsigned int pajamaPants = 129;
    unsigned int dietSoda = 50398;

    float cellTower = 0.1f;
    float superGlue = 2.43f;
    float flowerBud = 37.04f;

    double videoTape = 44.0;
    double scotchTape = 291.15;
    double freezerTape = 4.1;

    bool tapeMeasure = true;
    bool gymMembership = true;
    bool vacuumCleaner = false;
    
    ignoreUnused(shoeBox, plantPot, joyStick, golfClub, teaBag, lampShade, tissuePaper, pajamaPants, dietSoda, cellTower, superGlue, flowerBud, videoTape, scotchTape, freezerTape, tapeMeasure, gymMembership, vacuumCleaner); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int speakerStand(float height, float weightThatCanHold)
{
    ignoreUnused(height, weightThatCanHold);
    return {};
}
/*
 2)
 */
float telephone(float ringVolume, bool isCordless = true)
{
    ignoreUnused(ringVolume, isCordless);
    return {};
}
/*
 3)
 */
float printer(float inkLevel = 0.98f, bool isUsb = true)
{
    ignoreUnused(inkLevel, isUsb);
    return {};
}
/*
 4)
 */
int parkingPass(int issueDate, bool isExpired = false)
{
    ignoreUnused(issueDate, isExpired);
    return {};
}
/*
 5)
 */
double thriftStore(bool hasCassettes = true, bool areTapesGood = false)
{
    ignoreUnused(hasCassettes, areTapesGood);
    return {};
}
/*
 6)
 */
double nesConsole(bool works, int numControllers)
{
    ignoreUnused(works, numControllers);
    return {};
}
/*
 7)
 */
int mail(bool isJunk, bool isImportant)
{
    ignoreUnused(isJunk, isImportant);
    return {};
}
/*
 8)
 */
float boomBox(int numSpeakers, bool hasBassBoost)
{
    ignoreUnused(numSpeakers, hasBassBoost);
    return {};
}
/*
 9)
 */
int godzillaMovieCollection(int numTapesOnShelf, bool isBlackAndWhite)
{
    ignoreUnused(numTapesOnShelf, isBlackAndWhite);
    return {};
}
/*
 10)
 */
int figTree(float height = 3.2f, bool needsWater = true)
{
    ignoreUnused(height, needsWater);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto myStand = speakerStand(3.8f, 24.f);
    //2)
    auto phone = telephone(6.2f, true);
    //3)
    auto device = printer(0.5f, false);
    //4)
    auto pass = parkingPass(12, false);
    //5)
    auto shop = thriftStore(true, true);
    //6)
    auto system = nesConsole(true, 2);
    //7)
    auto inbox = mail(true, false);
    //8)
    auto stereoSystem = boomBox(2, true);
    //9)
    auto myCollection = godzillaMovieCollection(24, false);
    //10)
    auto tree = figTree(3.4f, true);
    
    ignoreUnused(carRented);
    ignoreUnused(myStand, phone, device, pass, shop, system, inbox, stereoSystem, myCollection, tree);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
