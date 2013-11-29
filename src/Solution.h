#ifndef SOLUTION_H_
#define SOLUTION_H_

#include "MouseInterface.h"

class Solution{

public:
    Solution(MouseInterface* mouse);
    ~Solution();
    void solve();

private:
    MouseInterface* m_mouse;

    void exampleSolutionForMaze3();
};

#endif // SOLUTION_H_