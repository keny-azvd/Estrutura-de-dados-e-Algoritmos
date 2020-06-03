#include <iostream>
#include <initializer_list>

using namespace std;

template<class K>
struct Node{
    K data;
    Node *pNext;

    Node(K x):data(x), pNext(NULL){}
};

template<class L>
class LinkedList{
private:
    Node<L> *pRoot;
    int length;

public:
    LinkedList(initializer_list<L> lista): pRoot(NULL), length(0) {
        for(auto elem:lista) {
        insert(elem);
        }
    }

    bool find(int x, Node<L> **&pNode) {
        pNode = &pRoot;
        while(*pNode && (*pNode)->data <=x ) {
            if ((*pNode)->data==x) return true;
            pNode = &((*pNode)->pNext);
        }
        return 0;
    }



    void insert(L x) {
     Node<L> **pNode;

    if(find(x, pNode)){

        //return;
     }
     else{

        Node<L> *pNew = new Node<L>(x);//criando um novo nó na memoria dinamica
        pNew->pNext = *pNode;
        *pNode = pNew;
        //Node **paux;
        //paux = &pRoot;
        //while((pNew->data) > ((*paux)->data)){
          //  *paux = (*paux)->pNext;
}
        //if(true){
            //    pNew->pNext = *paux;//->pNext;
              //  *paux = pNew;



        length++;




        // STEPS:
        // 1. Use the find function to check if the value `x` exists
        // 2. If it exists, then return
        // 3. Else create a new node (using dinamic memory)
        // 4. Set pointers (Hint: you need to set 2 pointers)
        // 5. Increase the `length` attribute
    }

    void print() {
        Node<L> *obj = pRoot;
        while(obj) {
            cout << obj->data << " ";
            obj=obj->pNext;
        }
        cout << endl;


    }

    void remove(int x) {
    Node<L> **pNode;
    if(find(x, pNode)) {
        *pNode = (*pNode)->pNext;
        /*pNode = &pRoot;
        while(*pNode){
            if ((*pNode)->data == x){
                Node *pAux = (*pNode)->pNext;
                *pNode = pAux;
                length--;
                return;
                }
            pNode = &((*pNode)->pNext);*/
            }

}


        // STEPS:
        // 1. Use the find function to check if the value `x` exists
        // 2. If it does not exist, then return
        // 3. Else set pointers (Hint: just one pointer)
        // 4. Release memory
        // 5. Decrease the `length` attribute};


};

int main(){
    LinkedList<double> list {23.1,13,54.12,3.33,12.7};
    list.insert(5);
    list.insert(4);
    list.insert(10);
    //list.insert(5);
    //list.insert(-1);
    //list.insert(1);
    //list.insert(1000);
    list.print();

    list.remove(5);
    list.print();
     return 0;


}
