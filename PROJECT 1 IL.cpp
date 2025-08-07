#include <iostream> //Includes input output stream library to use cin and cout
using namespace std; //allows you to use names like cout and cin without using std::

int main() { //main function, container
    int userNum; //variable to store the users input
    int userInt; //variable used to loop through number from 2 to userNum

    cout << "Enter a number to find all primes between 0 and your number: "; //prompt the user
    cin >> userNum; //read the users input and store in variable userNum

    for (userInt = 2; userInt <= userNum; userInt++) { //loop from 2 throught the users bumber
        int i; //declare variable i to iterate following loop, with limited scopr

        for (i = 2; i * i <= userInt; i++) { //this basically trys to divide userInt by all nums from two to sqrt(iuserInt)
            if (userInt % i == 0) { //if userInt can be divided by 1, it isnt prime
                break; //exit loop early if there is no remainder
            } //closes if statement
        } //closes most recent for statement

        if (i * i > userInt) { //if the previous loop doesnt find any nums divisible, it is prime.
            cout << userInt << " "; //Prints the prime number
        } //closes if loop
    } //closes for loop

    cout << endl; //moves to a new line after printing all numbers

    return 0; //program w=orks, go back to line 0
} //closes main fcn

//1. The first challenege was finding the time to do this, I knew I had done this in my bootcamp through General Assembly but it was so long ago and used JS that remembering what I did was a struggle with my school and work schedule
//2. I was out of town so I did a bunch of digging last week. I already knew what a prime number was, so the % == 0 was easy. 
//3. I really wanted to find a better way, because the first time I did this I had like 10 if statements with modulo 2,3,5,7, etc. So many nested commandas and it was messy.
//4. Last but not least remembering how to setup VS CODE to run this was somehting I had to google because I havbe been using the lab compiler.