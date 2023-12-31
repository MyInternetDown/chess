// queen.h

#ifndef QUEEN_H
#define QUEEN_H

#include "chesspiece.h"

class Queen : public ChessPiece {
public:
    // Constructor
    Queen(Coordinate pos, string white);

    // Override the getAllMoves function for the Queen
    void getAllMoves(ChessPiece* board[8][8]) override;

    // Override the getAllAttackMoves function for the Queen
    //vector<Coordinate> getAllAttackMoves(ChessPiece* board[8][8]) const override;
    void getAllCheckMoves(ChessPiece* board[8][8]) override;
    void adjustPossibleMoves(ChessPiece* board[8][8]) override;
    void getAllLevel4Moves(ChessPiece* board[8][8]) override;
    void getAllPotentialMoves(ChessPiece* board[8][8]) override;
};
#endif
