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
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:

Int
Float
Bool
Double
Char
Unsigned Int

2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

// 2)
void variableDeclarations() 
{
    // example:
    int number = 2; // declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int fingers = 5;
    int hands = 2;
    int toes = 5;
    
    float speed = 60.f;
    float heading = 10.f;
    float direction = 1.f;
    
    bool hasPizza = false;
    bool hasBeer = true;
    bool hasSmile = true;
    
    double small = 0.00f;
    double large = 1.00f;
    double trouble = 0.5f;
    
    char R = 'R';
    char Y = 'Y';
    char A = 'A';
    
    ignoreUnused(number, fingers, hands, toes, speed, heading, direction, hasPizza, hasBeer, hasSmile, small, large, trouble, R, Y, A);
  // passing each variable declared to the
  // ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0) // function declaration with random number of arguments, arbitrary number of arguments have default value
{
    ignoreUnused(rentalDuration, carType); // passing each function parameter to the ignoreUnused() function
    return {}; // if your function returns something other than void, add 'return {};' at the end of it.
}

/*
 1)
 */
bool makeMusic(int playGuiter = 1, int playBass = 2) 
{  
    ignoreUnused(playGuiter, playBass);
    return {};
}
/*
 2)
 */
float swim(bool inPool = true, bool inLake = false, bool inRiver = false) 
{
    ignoreUnused(inPool, inLake, inRiver);
    return {};
}
/*
 3)
 */
double writeCode(char numberOfLines = 'Lots', float quality = 0.1f)
{  
    ignoreUnused(numberOfLines, quality);
    return {};
}
/*
 4)
 */
int driveCar(int howFast = 160)
{
    ignoreUnused(howFast);
    return {};
}
/*
 5)
 */
char makeDinner(int numPeople = 5, int numPlates = 10, int numForks = 10)
{
    ignoreUnused(numPeople, numPlates, numForks);
    return {};
}
/*
 6)
 */
int paymentMethod(int ccNumber = 000000, int bankAcct = 000001, bool wireTransfer = true)
{
    ignoreUnused(ccNumber, bankAcct, wireTransfer);
    return {};
}
/*
 7)
 */
float makeNoise(int loudness = 220, int type = 1, bool phase = true)
{
    ignoreUnused(loudness, type, phase);
    return {};
}
/*
 8)
 */
bool isGood(bool taste = false)
{
    ignoreUnused(taste);
    return {};
}
/*
 9)
 */
double computePrecision(float predict = 0.9f, float vectorX = 0.1f, float vectorY = 0.1f, float vectorZ = 0.1f)
{
    ignoreUnused(predict, vectorX, vectorY, vectorZ);
    return {};
}
/*
 10)
 */
char changeColor(char spectrum = 'foo', char band = 'bar')
{
    ignoreUnused(spectrum, band);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main() 
{
  // example of calling that function, storing the value, and passing it to
  // ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2);
    // 1)
    auto musicPlayed = makeMusic(1, 2);
    // 2)
    auto exercise = swim(true, false, false);
    // 3)
    auto coded = writeCode('TooMuch', 0.5f);
    // 4)
    auto race = driveCar(200);
    // 5)
    auto mealTime = makeDinner(2, 2, 2);
    // 6)
    auto takePayment = paymentMethod(0, 1, true);
    // 7)
    auto sound = makeNoise(1, 1, true);
    // 8)
    auto evaluate = isGood(false);
    // 9)
    auto tensor = computePrecision(0.1f, 0.2f, 0.3f, 0.4f);
    // 10)
    auto newColor = changeColor('bar', 'qux');

    ignoreUnused(carRented, musicPlayed, exercise, coded, race, mealTime, takePayment, sound, evaluate, tensor, newColor);
    std::cout << "good to go!" << std::endl;
    return 0;
}