/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: drew
 *
 * Created on September 22, 2022, 12:38 PM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int SecondMaximum(int argc, char** argv) {

    int Numbers[3];
    Numbers[0] = 171;
    Numbers[1] = 2002;
    Numbers[2] = 1;
    
    int SecondMaximumNumberID = 0;
    
    for(int j = 0; j < 2; j++)
    {
        if(Numbers[j+1] > Numbers[j])
        {
            SecondMaximumNumberID = Numbers[j+1];
        }
    }
    printf("%d",Numbers[SecondMaximumNumberID]);
    return 0;
}





int SumOfDigits(int argc, char** argv) {

    //Given an alphanumeric string made up of digits and 
    //lower case Latin characters only, find the sum of all the digit characters in the string.
    unsigned char String[5];
    String[0] = 'a';
    String[1] = 'b';
    String[2] = 'c';
    String[3] = 6;
    String[4] = 9;
    
    int Total = 0;
    
    for(int j = 0; j < 5; j++)
    {
        if(String[j] > 47)
        {
            if(String[j] < 58)
            {
                Total += String[j];
            }
        }
    }
    printf("%d", Total);
}


//Problem Statement
//Write a program that accepts sets of three numbers and prints the second-maximum number among the three.
