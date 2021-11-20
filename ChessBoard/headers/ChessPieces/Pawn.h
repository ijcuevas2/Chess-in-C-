//
// Created by ismael on 9/29/21.
//

#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H

#include "ChessPiece.h"
#include "../ChessMovementMediator.h"

class Pawn : public ChessPiece {
private:
    bool firstMove = true;
public:
    Pawn(PlayerID playerId, QGraphicsItem *parent = nullptr)
        : ChessPiece(playerId, PieceType::PAWN) {
    }

    bool canMove(int sourceX, int sourceY, int destX, int destY);
    bool canMoveFirstTurn(int sourceX, int sourceY, int destX, int destY);
    bool isCorrectDirection(int sourceY, int destY);
    bool canDiagonalCapture(int sourceX, int sourceY, int destX, int destY);
    bool canMoveSingleSpace(int sourceX, int sourceY, int destX, int destY);
    void setUsedFirstMove();
};


#endif //CHESS_PAWN_H
