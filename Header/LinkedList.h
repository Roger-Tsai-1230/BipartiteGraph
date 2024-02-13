//
//  LinkedList.h
//  BipartiteGraph
//
//  Created by Roger Tsai on 2024/2/12.
//

#ifndef LinkedList_h
#define LinkedList_h
#include <vector>
#include <iostream>
using namespace std;

struct Node{
    int data; //建立一整數變數，名為data。
    int color = 0; //建立一整數變數, 存放顏色數據。
    Node* next; // 表示以Node為資料型別的指標，名為next。
};

#endif /* LinkedList_h */
