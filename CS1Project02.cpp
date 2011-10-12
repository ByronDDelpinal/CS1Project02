/* 
 * File:   CS1Project02.cpp
 * Author: Byron D Moran
 * UANET ID: bdm37
 *
 * Created on October 7, 2011, 1:07 PM
 */
#include<iostream>
using namespace std;

/*Function to check if a year is a valid leap year*/
bool checkLeap(int& year){
    if (( year % 4) == 0){
        if(( year % 400) == 0){
            return true;
        }else if ((year % 100) == 0){
            return false;}
        else{
            return true;}}
    else{
        return false;}}

/* This function takes three args in for our "DD MM YYYY" format and
 * first gets input for all three vars, then the switch compares each month.
 * Inside the month cases it compares the valid dates only for that month.
 * February calls checkLeap and uses an if based on the bool returned from
 * checkLeap. The valid dates for each month are put in and the range compared
 * against whatever our current val for the var day is. From inside the 
 * function we cout the validity and return nothing to main*/
void wholeDate(int& day, int& month, int& year){
    day = 01;
    month = 01;
    year = 1000;
    cout << "Please enter an entire date in proper format (DD MM YYYY):\n>>>";
    cin >> day >> month >> year;
    switch(month){
        case (0): //This case is if user enters 'q' to quit
            break;
        case (1):
            if (day >= 1 && day <= 31){
                cout << "January " << day << " is a valid date!\n";}
            else{
                cout << "January " << day << " is not a valid date!\n";}
            break;
        case (2):                       
            if (checkLeap(year) == true){
                if (day >= 1 && day <= 29){
                    cout << "February " << day << " is a valid date!\n";}
                else{
                    cout << "February " << day << " is not a valid date!\n";}}
            else if (checkLeap(year) == false){
                if (day >= 1 && day <= 28){
                    cout << "February " << day << " is a valid date!\n";}
                else{
                    cout << "February " << day << " is not a valid date!\n";}}                         
            break;
        case(3):
            if (day >= 1 && day <= 31){
                cout << "March " << day << " is a valid date!\n";}
            else{
                cout << "March " << day << " is not a valid date!\n";}
            break;
        case (4):
            if (day >= 1 && day <= 30){
                cout << "April " << day << " is a valid date!\n";}
            else{
                cout << "April " << day << " is not a valid date!\n";}
            break;
        case (5):
            if (day >= 1 && day <= 31){
                cout << "May " << day << " is a valid date!\n";}
            else{
                cout << "May " << day << " is not a valid date!\n";}
            break;
        case (6):
            if (day >= 1 && day <= 30){
                cout << "June " << day << " is a valid date!\n";}
            else{
                cout << "June " << day << " is not a valid date!\n";}
            break;
        case (7):
            if (day >= 1 && day <= 31){
                cout << "July " << day << " is a valid date!\n";}
            else{
                cout << "July " << day << " is not a valid date!\n";}
            break;
        case (8):
            if (day >= 1 && day <= 31){
                cout << "August " << day << " is a valid date!\n";}
            else{
                cout << "August " << day << " is not a valid date!\n";}
            break;
        case (9):
            if (day >= 1 && day <= 30){
                cout << "September " << day << " is a valid date!\n";}
            else{
                cout << "September " << day << " is not a valid date!\n";}
            break;
        case (10):
            if (day >= 1 && day <= 31){
                cout << "October " << day << " is a valid date!\n";}
            else{
                cout << "October " << day << " is a valid date!\n";}
            break;
        case (11):
            if (day >= 1 && day <= 30){
                cout << "November " << day << " is a valid date!\n";}
            else{
                cout << "November " << day << " is a valid date!\n";}
            break;
        case (12):
            if (day >= 1 && day <= 31){
                cout << "December " << day << " is a valid date!\n";}
            else{
                cout << "December " << day << " is not a valid date!\n";
                break;}
        default:
            cout << "That is not a valid input!\n";
            break;}} 

/*Begin main function:*/
int main(void){
    /*arrays to store vals of 5 different dates*/
    int i = 0; //counter for case 3
    int day = 01; //var for user to input a day
    int month = 01; //var for user to input a month
    int year = 1000; //var for user to input a year
    char userInput; // var to check user input in main switch statement
    cout << "Welcome to Byron's second project for CS1. In this project\n"
            "we are checking the validity of dates, while also factoring\n"
            "in leap years. At any point of this, you can type q to quit.\n";
    //This allows the user to enter q in any menu to quit
    while (userInput != 'q' && day != 'q' && month != 'q' && year != 'q' ||
           userInput != 'Q' && day != 'Q' && month != 'Q' && year != 'Q'){ 
                              //and exit the program.
        cout << "Enter which part of Project 2 you would like to see:\n"                
                "\tPart 1(a): Nested if/else if\t1\n"
                "\tPart 2(b): Switch Statments\t\n"
                "\tPart 3(c): Loops\t\n"
                "\tQuit  (q): None of it, this seems lame already...I'm out.\n"
                "Please enter your choice.\n"
                ">>>";
        cin >> userInput; //getting input for the main menu
        switch (userInput){
            case ('a'):
            case ('A'):
                /* This case gets a year from the user and passes it to the 
                 * checkLeap function. That function returns a bool value, and 
                 * based on that bool val we can tell if the year is or is not 
                 * a leap year*/
                cout << "This part will test a year to see if it is, or isn't\n"
                        "a leap year. Please enter a year to be tested:\n"
                        ">>>(YYYY)";
                cin >> year; //input for year, passed to checkLeap
                if (checkLeap(year) == true){
                    cout << "The year " << year << " is a leap year.\n";}
                else{
                    cout << "The year " << year << " is not a leap year.\n";}
                break;
            case ('b'):
            case ('B'):
                /* This case only calls the wholeDate function once and then 
                 * breaks*/
                wholeDate(day, month, year);        
                break;
            case ('c'):
            case ('C'):
                /* This case is the exact same as case 2, but only with a
                 * for loop to make it happen 5 times*/
                cout << "In this section we'll enter five different dates\n"
                        "at once and get the returned validity afterward for\n"
                        "each date entered.\n";
                while (i != 5){
                    wholeDate(day, month, year);
                    i++;}
                break;
            default: 
                /*If none of the cases are entered, we cout an error and break*/
                cout << "That's not a valid input!\n";
                break;}}}