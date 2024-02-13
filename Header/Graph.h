#ifndef Graph_h
#define Graph_h

#include <iostream>
#include <vector>
#include "LinkedList.h"
using namespace std;



class Graph {
public:
    int size; // 節點數量
    vector<Node> Vertex; // 節點資料
    vector<Node*> pVertex; //紀錄圖的節點記憶體位置
    int headNode; // 當前節點編號
    bool end; // 是否結束輸入
    int headNodeIndex; // 節點索引
    vector<int> tailNode; // 邊的尾端
    vector<vector<int*>> storeNeighbors; //儲存所有的邊的尾端
    vector<int*> neighbors; // 儲存邊的尾端
    
    Graph();
};

#endif /* Graph_h */
