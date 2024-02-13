#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node{
    int data; //建立一整數變數，名為data。
    Node* next; // 表示以Node為資料型別的指標，名為next。
};

class LinkedList
{
private:
    Node* head; //建立以Node為型別的指標變數，用於記錄節點的開頭

public:
    LinkedList()
    {
        //一般來說，我們會假設該連結串列沒有任何節點，因此頭指標應指向NULL
        head = nullptr;
    }
    
    void append(int data)
    {
        Node* newNode = new Node; //建立動態物件，此時僅於堆中分配記憶體，但內容物未知。
        newNode -> data = data; // 將傳入的內容指派給Node的data，由於內容物未知，因此只能使用newNode指標取得該處的地址。
        newNode -> next = nullptr; //接者將目前的節點所指向記錄的next指向NULL，因為我們不知道下個節點為何。
        
        //開始針對head的頭進行處理
        //Case1: 頭指向空指標，此時將頭指向第一個加入的節點，跳出函式
        //Case2: 頭不指向空指標，表示頭已經指向第一個加入的節點，此時不做任何更動，往下執行。
        if(head == nullptr)
        {
            head = newNode;
            return;
        }
        
        //建立一Node型別的current指標，由於我們已經加入節點，因此將current指向第一個指標，也就是頭指標。
        Node* current = head;
        //對於第二個以後的節點，需要找到串列的末端。
        //若current所記錄的點的next指標指向非空指標，表示尚未到末端，故將current指標指向下個節點。
        while(current -> next != nullptr)
        {
            current = current -> next;
        }
        //到達末端，將末端節點改為指向新節點。
        current -> next = newNode;
    }
};
