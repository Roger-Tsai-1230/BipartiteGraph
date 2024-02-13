#include "Graph.h"
using namespace std;


int main()
{
    Graph BipartiteGraph;
    
    int newColor = 1; //初始化新節點為藍色
    BipartiteGraph.Vertex[0].color = -1; //設定第一個點為紅色
    for(int count = 0; count < BipartiteGraph.Vertex.size(); count++) //對於每一個點
    {
        for(int count1 = 0; count1 < BipartiteGraph.storeNeighbors[count].size(); count1++)
        {
            if(*(BipartiteGraph.storeNeighbors[count][count1]) == 0) //檢查他的鄰居是否沒有顏色
            {
                //沒有顏色，塗上與母節點相反的顏色
                *(BipartiteGraph.storeNeighbors[count][count1]) = newColor;
            }
            else//有顏色，比較與母節點的顏色是否相異
            {
                //若母節點的顏色與子節點的顏色相同，輸出不是Bipartite Graph
                if(*(BipartiteGraph.storeNeighbors[count][count1]) == BipartiteGraph.Vertex[count].color)
                {
                    cout << "It's not a Bipartite Graph" << endl;
                    goto End;
                }
            }
        }
    }
    cout << "It's a Bipartite Graph." << endl;

End:
    return 0;
}
