//
//  Scanner.cpp
//  Project 1
//
//  Created by Cam on 1/22/2019.
//  Copyright © 2019 Cameron Brown. All rights reserved.
//

#include "Scanner.h"
#include <fstream>
#include <iostream>
#include <cctype>


using namespace std;

Scanner :: Scanner(string fileName) {
  file = fileName;
  lineNum = 1;
}

Scanner :: ~Scanner() {

}

void Scanner :: scan() {
    ifstream inputFile;
    inputFile.open(file, ifstream::in);
    char current;
    while(inputFile.is_open()) {
        current = inputFile.get();
        switch(current) {
            case ',':
                tokenVector.push_back(Token(COMMA, ",", lineNum));
                break;
            case '.':
                tokenVector.push_back(Token(PERIOD, ".", lineNum));
                break;
            case '?':
                tokenVector.push_back(Token(Q_MARK, "?", lineNum));
                break;
            case '*':
                tokenVector.push_back(Token(MULTIPLY, "*", lineNum));
                break;
            case '+':
                tokenVector.push_back(Token(ADD, "+", lineNum));
                break;
            case '(':
                tokenVector.push_back(Token(RIGHT_PAREN, "(", lineNum));
                break;
            case ')':
                tokenVector.push_back(Token(ADD, ")", lineNum));
                break;
            case ':':
                if(inputFile.peek() == '-'){
                    inputFile.get();
                    tokenVector.push_back(Token(COLON_DASH, ":-", lineNum));
                }
                else {
                    tokenVector.push_back(Token(COLON, ":", lineNum));
                }
                break;
            case EOF:
                tokenVector.push_back(Token(END, "", lineNum));
                inputFile.close(); //CHECK!!!!
                break;
            case '\'':
                stringCheck();
                break;
            case '#':
                commentCheck();
                break;
            case '\n':
                lineNum++;
                break;
            default:
                checkOther(); // Check all the tokens not tried yet
                break;

        }
       
    }
    
}

void Scanner :: stringCheck() {
    
}

void Scanner :: commentCheck() {
    
}

void Scanner :: checkOther() {
    
}

void Scanner :: printVector() {
    for(int i=0; i < tokenVector.size(); ++i) {
        cout << tokenVector.at(i).toString() << endl;
    }
}
