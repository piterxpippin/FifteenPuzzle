#ifndef INC_PUZZLESOLVERDFS_H_
#define INC_PUZZLESOLVERDFS_H_

#include <stack>
#include "PuzzleSolverBase.h"

class PuzzleSolverDfs: public PuzzleSolverBase
{
  public:
    virtual ~PuzzleSolverDfs();
    explicit PuzzleSolverDfs(const Puzzle& startPuzzle);
    explicit PuzzleSolverDfs(const string& filePath);

  private:
    PuzzleSolverDfs();
    stack<PuzzlePosition> _nodeStack;

    bool addChildNodeToStack(PuzzlePosition::Direction direction, const PuzzlePosition &oldNode);

    virtual void runAlgorithm();
    virtual void addToContainer(const PuzzlePosition& position);
    virtual void clearContainter();
    virtual void printOutSolution();
};

#endif /* INC_PUZZLESOLVERDFS_H_ */
