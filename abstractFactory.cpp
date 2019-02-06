/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

enum Vtype
{
    TV_Two, TV_Three, TV_Four, TV_five
};

class shape
{
    public:
    virtual void printType() = 0;
    static shape* create(Vtype type1);
};

class square:public shape
{
    public:
    void printType()
    {
        cout << "I am a square" << endl;
    }
};

class triangle:public square
{
    public:
    void printType()
    {
        cout << "I am a triangle" << endl;
    }
};

class rectangle:public shape
{
    public:
    void printType()
    {
        cout << "I am a rectangle" << endl;
    }
};

shape* shape::create(Vtype type1)
{
    if(type1 == TV_Two)
    {
        return new square();
    }
    else if(type1 == TV_Three)
    {
        return new triangle();
    }
    else if(type1 == TV_Four)
    {
        return new rectangle();
    }
    else
    {
        return NULL;
    }
}

enum location
{
    USA, India, Australia  
};


//abstract factory method to create the craft stores.
class Craftstore
{
    public:
    Craftstore* create(location l1);
};

class USACraftstore
{
    public:
    shape *shapePtr;
    
    USACraftstore(Vtype v1)
    {
        shapePtr = create(v1);
    }
    
    shape* getshape()
    {
        return shapePtr;
    }
}

class IndiaCraftstore
{
    public:
    shape *shapePtr;
    
    IndiaCraftstore(Vtype v1)
    {
        shapePtr = create(v1);
    }
    
    shape* getshape()
    {
        return shapePtr;
    }
}

class AustraliaCraftstore
{
    public:
    shape *shapePtr;
    
    AustraliaCraftstore(Vtype v1)
    {
        shapePtr = create(v1);
    }
    
    shape* getshape()
    {
        return shapePtr;
    }
}

Craftstore* Craftstore::create(location l1)
    {
        if(l1 == USA)
        {
            return new USACraftstore(TV_Two);
        }
        else if(l1 == India)
        {
            return new IndiaCraftstore(TV_Two);
        }
        else if(l1 == Australia)
        {
            return new AustraliaCraftstore(TV_Two);
        }
        else
        {
            return NULL;
        }
    }

class client
{
    public:
    Craftstore *craftStorePtr;
    
    client(Vtype type1, location l1)
    {
        craftStorePtr = Craftstore::create(l1);
    }
    
    ~client()
    {
        delete[] shapePtr;
        delete[] craftStorePtr;
        shapePtr = NULL;
        craftStorePtr = NULL;
    }
    
    Craftstore* getCraftstore()
    {
        return craftStorePtr;
    }
};

int main()
{
    client *C1 = new client(TV_Three);
    craftStorePtr *crftPtr = new craftStorePtr(USA);
    
    shape *s = crftPtr->shapePtr->getshape();

    s->printType();
    
    return 0;
}
