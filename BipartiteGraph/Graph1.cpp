////
////  Graph.h
////  BipartiteGraph
////
////  Created by Roger Tsai on 2024/2/12.
////
//
//#ifndef Graph_h
//#define Graph_h
//
//#include <iostream>
//#include <vector>
//#include <limits>
//#include "LinkedList.h"
//using namespace std;
//
///*
// Version: 0.1
// Author: Roger Tsai
// Please read the following statemant before you use this header.
// 1. This header is used to record a Graph with ADJACENCY LIST.
// 2. This header provide a function,Graph, without return.
// 3. While calling Graph, you need provide an integral parameter.
// */
//
//class Graph
//{
//public:
//    Graph()
//    {
//        //紀錄圖的節點數量
//        int size;
//        cout << "Please enter the number of the nodes in the graph: ";
//        cin >> size;
//        
//        
//        int data = 0;
//        vector<Node> Vertex;
//        cout << "Please enter the data of each node in the graph.";
//        for(int count = 0; count < size; count++)
//        {
//            cin >> data;
//            Node newNode;
//            newNode.data = data;
//            Vertex.push_back(newNode);
//        }
//        
//        //紀錄圖的節點記憶體位置
//        vector<Node*> pVertex;
//        for(int count = 0; count < size; count++)
//        {
//            pVertex.push_back(&Vertex[0] + count);
//        }
//        
//        //輸入edge
//        cout << "Please follow the prompts and enter the end node of each edge with a space to separate each end point." << endl;
//        cout << "For example,\"2\" means an undirect edge between node 1 and node 2." << endl;
//        cout << "To end input, please type in true while the progress ask you wheather it's the end of input." << endl;
//        bool end = false;
//        int headNode = 1;
//        int headNodeIndex = headNode - 1;
//        vector<int> tailNode;
//        while(end == false)
//        {
//            cout << "For node " << headNode << ":" << endl;
//            int input;
//            while(cin >> input)
//            {
//                tailNode.push_back(input);
//            }
//            
//            //清除輸入緩衝區
//            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//            
//            cout << "Enter true to end input: ";
//            cin >> boolalpha >> end;
//            if (cin.fail())
//            {
//                cin.clear();
//                cin.ignore(numeric_limits<streamsize>::max(), '\n');
//            }
//            
//            LinkedList neighbors(pVertex[headNodeIndex]);
//            
//            LinkedList **Neighbors = new LinkedList*[tailNode.size()];
//            Neighbors[headNodeIndex] = new LinkedList (pVertex[headNodeIndex]);
//            
//            for(int count = 0; count < tailNode.size(); count++)
//            {
//                Neighbors[headNodeIndex] ->appendColor(Vertex.at(tailNode.at(count)).data);
//            }
//
//            headNode++;
//        }
//    }
//};
//
//#endif /* Graph_h */
