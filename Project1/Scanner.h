//
//  Scanner.h
//  Project 1
//
//  Created by Cam on 1/22/2019.
//  Copyright © 2019 Cameron Brown. All rights reserved.
//

#ifndef Scanner_h
#define Scanner_h

#include "Token.h"
#include <vector>
#include <fstream>

using namespace std;

class Scanner {
public:
  Scanner(string fileName);
  ~Scanner();
  string scan();
  void tokenize();

private:
  string file;
  int lineNum;
  char current;
  char next;
};

#endif /* scanner.h */
