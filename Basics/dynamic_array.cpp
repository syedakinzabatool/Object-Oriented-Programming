#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem [size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}
/*Here's what's happening:

ptrTemp is a pointer of type ShopItem*, which means it can point to an object of type ShopItem.
ptr is another pointer of type ShopItem*, which was previously declared and initialized to point to the first element of an array of ShopItem objects created using dynamic memory allocation (new ShopItem [size]).
The assignment ptrTemp = ptr copies the value of ptr into ptrTemp. This means that ptrTemp now points to the same location in memory as ptr, which is the first element of the array of ShopItem objects.
In other words, ptrTemp is a temporary pointer that is initialized to point to the same starting location as ptr. This is done to preserve the original value of ptr so that it can be used later to iterate over the array of ShopItem objects.*/
