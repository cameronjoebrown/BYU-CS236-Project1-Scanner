//
//  Token.h
//  Project 1
//
//  Created by Cam on 1/22/2019.
//  Copyright © 2019 Cameron Brown. All rights reserved.
//
#ifndef Token_h
#define Token_h

#include <string>

using namespace std;

enum TokenType {
    COMMA, PERIOD, COLON_DASH, COLON, Q_MARK,
    MULTIPLY, ADD, SCHEMES, FACTS, RULES,
    QUERIES, STRING, COMMENT, END, UNDEFINED,
    LEFT_PAREN, RIGHT_PAREN, ID
};

class Token {
public:
	Token(TokenType t);
	~Token();
	string toString();
private:
  TokenType type;

};

#endif /* Token.h */
