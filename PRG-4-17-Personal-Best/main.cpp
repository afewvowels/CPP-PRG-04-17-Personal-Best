//
//  main.cpp
//  PRG-4-17-Personal-Best
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a program that asks for the name of a pole vaulter and the dates and vault
//  heights (in meters) of the athelete's three best vaults. It should then report, in order of
//  height (best first), the date on which each vault was made and its height.
//
// Input Validation: Only accept values between 2.0 and 5.0 for the heights.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Declare ints for days, months, and years
    int intDate01Day,
        intDate01Month,
        intDate01Year,
    
        intDate02Day,
        intDate02Month,
        intDate02Year,
    
        intDate03Day,
        intDate03Month,
        intDate03Year;
    
    // Declare current year to use in catches
    // to determine if year provided is accurate.
    // Done for ease of editing after each New Year.
    int const INT_CURRENT_YEAR = 2017;
    
    // Declare heights as floats
    float fltHeight01,
          fltHeight02,
          fltHeight03;
    
    // Declare string to hold pole vaulter's name
    string strName;
    
    // Request pole vaulter's name
    cout << "Please enter your name:\n";
    getline(cin, strName);
    
    cout << "Please enter the date (DD-MM-YYYY) of the first jump:\n"; // Begin Second Jump Info
    cout << "Day: ";
    cin >> intDate01Day;
    while(!cin || intDate01Day < 1 || intDate01Day > 31)
    {
        cout << "Please enter a valid day.";
        cin.clear();
        cin.ignore();
        cin >> intDate01Day;
    }
    cout << "Month: ";
    cin >> intDate01Month;
    while(!cin || intDate01Month < 1 || intDate01Month > 12)
    {
        cout << "Please enter a valid month.";
        cin.clear();
        cin.ignore();
        cin >> intDate01Month;
    }
    cout << "Year: ";
    cin >> intDate01Year;
    cout << endl;
    if(intDate01Year < 1960 || intDate01Year > INT_CURRENT_YEAR)
    {
        cout << "Please enter a valid year.";
        cin.clear();
        cin.ignore();
        cin >> intDate01Year;
    }
    cout << "Please enter the height of your first jump:\n";
    cin >> fltHeight01;
    while(!cin || fltHeight01 < 2.0f || fltHeight01 > 5.0f) // Catch for invalid height data
    {
        cout << "Please enter a valid height for your jump.\n";
        cin.clear();
        cin.ignore();
        cin >> fltHeight01;
    }
    
    
    cout << "Please enter the date (DD-MM-YYYY) of the first jump:\n"; // Begin Second Jump Info
    cout << "Day: ";
    cin >> intDate02Day;
    while(!cin || intDate02Day < 1 || intDate02Day > 31)
    {
        cout << "Please enter a valid day.";
        cin.clear();
        cin.ignore();
        cin >> intDate02Day;
    }
    cout << "Month: ";
    cin >> intDate02Month;
    while(!cin || intDate02Month < 1 || intDate02Month > 12)
    {
        cout << "Please enter a valid month.";
        cin.clear();
        cin.ignore();
        cin >> intDate02Month;
    }
    cout << "Year: ";
    cin >> intDate02Year;
    if(intDate02Year < 1960 || intDate02Year > INT_CURRENT_YEAR)
    {
        cout << "Please enter a valid year.";
        cin.clear();
        cin.ignore();
        cin >> intDate02Year;
    }
    cout << "Please enter the height of your second jump:\n";
    cin >> fltHeight02;
    while(!cin || fltHeight02 < 2.0f || fltHeight02 > 5.0f) // Catch for invalid height data
    {
        cout << "Please enter a valid height for your jump.\n";
        cin.clear();
        cin.ignore();
        cin >> fltHeight02;
    }                                                                  // End Second Jump Info
    
    
    cout << "Please enter the date (DD-MM-YYYY) of the first jump:\n"; // Begin Third Jump Info
    cout << "Day: ";
    cin >> intDate03Day;
    while(!cin || intDate03Day < 1 || intDate03Day > 31)
    {
        cout << "Please enter a valid day.";
        cin.clear();
        cin.ignore();
        cin >> intDate03Day;
    }
    cout << "Month: ";
    cin >> intDate03Month;
    while(!cin || intDate03Month < 1 || intDate03Month > 12)
    {
        cout << "Please enter a valid month.";
        cin.clear();
        cin.ignore();
        cin >> intDate03Month;
    }
    cout << "Year: ";
    cin >> intDate03Year;
    if(intDate03Year < 1960 || intDate03Year > INT_CURRENT_YEAR)
    {
        cout << "Please enter a valid year.";
        cin.clear();
        cin.ignore();
        cin >> intDate03Year;
    }
    cout << "Please enter the height of your third jump:\n";
    cin >> fltHeight03;
    while(!cin || fltHeight03 < 2.0f || fltHeight03 > 5.0f) //Catch for invalid height data
    {
        cout << "Please enter a valid height for your jump.\n";
        cin.clear();
        cin.ignore();
        cin >> fltHeight03;
    }                                                                   //End Third Jump Info
    
    // Calculate order of jumps:
    if(fltHeight01 > fltHeight02 && fltHeight01 > fltHeight03)
    {
        cout << "Jump 1: "
             << fltHeight01 << " meters, "
             << intDate01Day << "-" << intDate01Month << "-" << intDate01Year << endl;
        
        if(fltHeight02 > fltHeight03)
        {
            cout << "Jump 2: "
                 << fltHeight02 << " meters, "
                 << intDate02Day << "-" << intDate02Month << "-" << intDate02Year << endl;
            
            cout << "Jump 3: "
                 << fltHeight03 << " meters, "
                 << intDate03Day << "-" << intDate03Month << "-" << intDate03Year << endl;
            
            return 0;
        }
        else
        {
            cout << "Jump 3: "
                 << fltHeight03 << " meters, "
                 << intDate03Day << "-" << intDate03Month << "-" << intDate03Year << endl;
            
            cout << "Jump 2: "
                 << fltHeight02 << " meters, "
                 << intDate02Day << "-" << intDate02Month << "-" << intDate02Year << endl;
            
            return 0;
        }
    }
    
    if(fltHeight02 > fltHeight01 && fltHeight01 > fltHeight03)
    {
        cout << "Jump 2: "
             << fltHeight02 << " meters, "
             << intDate02Day << "-" << intDate02Month << "-" << intDate02Year << endl;
        
        if(fltHeight01 > fltHeight03)
        {
            cout << "Jump 1: "
                 << fltHeight01 << " meters, "
                 << intDate01Day << "-" << intDate01Month << "-" << intDate01Year << endl;
            
            cout << "Jump 3: "
                 << fltHeight03 << " meters, "
                 << intDate03Day << "-" << intDate03Month << "-" << intDate03Year << endl;
            
            return 0;
        }
        else
        {
            cout << "Jump 3: "
                 << fltHeight03 << " meters, "
                 << intDate03Day << "-" << intDate03Month << "-" << intDate03Year << endl;
            
            cout << "Jump 1: "
                 << fltHeight01 << " meters, "
                 << intDate01Day << "-" << intDate01Month << "-" << intDate01Year << endl;
            
            return 0;
        }
    }
    
    if(fltHeight03 > fltHeight01 && fltHeight03 > fltHeight02)
    {
        cout << "Jump 3: "
             << fltHeight03 << " meters, "
             << intDate03Day << "-" << intDate03Month << "-" << intDate03Year << endl;
        
        if(fltHeight01 > fltHeight02)
        {
            cout << "Jump 1: "
                 << fltHeight01 << " meters, "
                 << intDate01Day << "-" << intDate01Month << "-" << intDate01Year << endl;
            
            cout << "Jump 2: "
                 << fltHeight02 << " meters, "
                 << intDate02Day << "-" << intDate02Month << "-" << intDate02Year << endl;
            
            return 0;
        }
        else
        {
            cout << "Jump 2: "
                 << fltHeight02 << " meters, "
                 << intDate02Day << "-" << intDate02Month << "-" << intDate02Year << endl;
            
            cout << "Jump 1: "
                 << fltHeight01 << " meters, "
                 << intDate01Day << "-" << intDate01Month << "-" << intDate01Year << endl;
            
            return 0;
        }
    }
    return 0;
}

