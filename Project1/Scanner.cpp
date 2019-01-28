//
//  Scanner.cpp
//  Project 1
//
//  Created by Cam on 1/22/2019.
//  Copyright © 2019 Cameron Brown. All rights reserved.
//

#include "Scanner.h"
#include <fstream>
#include <cctype>


using namespace std;

Scanner :: Scanner(string fileName) {
  file = fileName;
  lineNum = 1;
}

Scanner :: ~Scanner() {

}

string Scanner :: scan() {
  ifstream inputFile;
  inputFile.open(file, ifstream::in);
  if(inputFile.is_open()) { //Verify that inputFile is open
    next = inputFile.peek();
    while(next != EOF) {
      current = inputFile.get();
      
      next = inputFile.peek();
    }


  }
    return " ";
}
