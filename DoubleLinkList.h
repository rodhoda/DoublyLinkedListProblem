//
// Created by rodho on 2/19/2022.
//

#ifndef DOUBLYLINKEDLISTPROBLEM_DOUBLELINKLIST_H
#define DOUBLYLINKEDLISTPROBLEM_DOUBLELINKLIST_H
#include <string>
#include "node.h"
using namespace std;

class DoubleLinkList {
private:
    string name;
    int score;
    Node* topPtr;

public:
    DoubleLinkList();
    DoubleLinkList(string, int);

    int insert(string, int);
    int remove(string, int);
    void Display();
};


#endif //DOUBLYLINKEDLISTPROBLEM_DOUBLELINKLIST_H
