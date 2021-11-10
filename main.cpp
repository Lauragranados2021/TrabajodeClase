#include <iostream>
#include "LinkedList.cpp"
#include "House.h"
using namespace std;

int main() {

    LinkedList<char>* linkFirst = new LinkedList<char>();
    LinkedList<char>* linkLast = new LinkedList<char>();
    //LinkedList<char>* addAfterto=new LinkedList<char>();

    //D-C-B-A

   /* linkFirst->addNodeFirst('A');
    linkFirst->addNodeFirst('B');
    linkFirst->addNodeFirst('C');
    linkFirst->addNodeFirst('D');

    //A-B-C-D
    linkLast->addNodeLast('A');
    linkLast->addNodeLast('B');
    linkLast->addNodeLast('C');
    linkLast->addNodeLast('D');

    for( char val : linkFirst->getLinkedList() ){
        cout<<val<<"-";
    }

    cout<<endl;

    for( char val : linkLast->getLinkedList() ){
        cout<<val<<"-";
    }

    cout<<endl;
    //addAfterto->addNodeFirst();
*/
    LinkedList<House>* houses=new LinkedList<House>();
    houses->addNodeFirst(House(45,6,5,"cra37#20-80"));
    houses->addNodeFirst(House(18,10,4,"cll20#21-58"));
    houses->addNodeLast(House(16,7,2,"cll45a#289-17"));
    houses->addNodeLast(House(32,30,8,"diagonal23#12-76"));
    House *find=houses->findInfo("cra37#20-80");

    if (*find){
cout<<"el nodo existe"<<find<<endl
 }
    else{
     cout<<"el nodo no existe";
 }


    for(House house: houses->getLinkedList()){
        cout<<house<<endl;
    }
    delete(linkFirst);

    delete( linkLast );


    return EXIT_SUCCESS;
}
