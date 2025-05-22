#include "Backtracking.h"

// Problem Statement:
//  Given a source point(sx, sy) and a destination point(dx, dy), 
//  the task is to check if it is possible to reach the destination 
//  point using the following valid moves :
//
//  (a, b) -> (a + b, b)
//  (a, b) -> (a, a + b)
// 
//  Your task is to find if it is possible to reach the destination point using only the desired moves or not.
// 
// For example:
//  For the coordinates, source point = (1, 1) and destination point = (3, 5)
//  The output will be true as the destination point can be reached using the following sequence of moves :
//  (1, 1) -> (1, 2) -> (3, 2) -> (3, 5)
//
// Test Cases:
//  1 1 3 5 - true
//  1 1 1 4 - true
//  1 1 2 2 - false
//  1 1 1 1 - true

bool Backtracking::reachDestination(int sx, int sy, int dx, int dy)
{
    // Base Case
    if (sx == dx && sy == dy)
        return true;
    if (dx < sx || dy < sy)
        return false;

    // Recursion
    if (dx > dy)
        Backtracking::reachDestination(sx, sy, dx - dy, dy);
    else
        Backtracking::reachDestination(sx, sy, dx, dy - dx);
}
