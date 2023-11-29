#ifndef ___ChessPiece___
#define ___ChessPiece___
#include <string>
#include <iostream>
#include <vector>
#include "enum.h"

using namespace std;


class ChessPiece {
	vector<int> posItem;
	string pos;
	bool Black;
	vector<vector<int>> possibleMoves;

public:
	// Constructor of the Chesspiece
	ChessPiece(int pos, bool black);

	// Gets all possible moves on where this chesspiece and move to given a vector board of the locations of all the other pieces.
	virtual vector<vector<int>> getAllMoves(const vector<int> position, const vector<vector<ChessPiece>>board);

	// Gets all possible locations where this piece would be under attack given its current position
	virtual vector<vector<int>> getAllDangerMoves(const vector<int> position, const vector<vector<ChessPiece>>board);

	// Gets all possible locations where this piece can eat another piece
	virtual vector<vector<int>> getAllAttackMoves(const vector<int> position, const vector<vector<ChessPiece>>board);

	// Checks if the current piece can move to the current position noted down
	virtual bool canMove(const vector<int> position, const vector<int> destination, const vector<vector<ChessPiece>>board) const;  

	// Get the Colour of the Piece
	virtual Colour getColour();
	// Get the position
	virtual vector<int> getPos();
	// Get the vecotrs of the possible moves
	virtual vector<vector<int>> getPossibleMoves();
	// Gets the type of Piece
	virtual char Type() const=0;
	// Gets the value of if the piece has moved
	virtual void moved();


	// Destructor
	virtual ~ChessPiece()=0;

	// Move Piece
	void move(vector<int> moveHere);
};

vector<int> getPos(const std::string &cmd); // converts a coordinate in the form of letter-number
// into the corresponding index in Board

std::string getCor(int index); // converts an index from Board into the 
// corresponding coordinate in the form letter-number

#endif 
