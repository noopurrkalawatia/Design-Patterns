/*
* This program shows the basic functionalities of a singleton 
* design pattern.
* The sailent features of the pattern are,
* 1. Restricts the initialization of a class to a single object
* 2. Using private static pointer and public accessor functions 
*    to access the pointer and the class variables.
* 3. Client uses only the public accessor functions to interact 
*   with the class.
*/
#include <iostream>

using namespace std;


class Globalcraft
{
	int m_value;
	static Globalcraft *g_ptr;

	Globalcraft(int value = 0)
	{
		m_value = value;
	}
	
	public:
	int getValue()
	{
	    return m_value;
	}
	
	void setValue(int value)
	{
	    m_value = value;
	}
	
	static Globalcraft* getInstance()
	{
	    if(!g_ptr)
	    {
	        g_ptr = new Globalcraft();
	    }
	    return g_ptr;
	}
};

Globalcraft *Globalcraft::g_ptr = 0;

int main()
{
    Globalcraft::getInstance()->setValue(10);
    int v = Globalcraft::getInstance()->getValue();
    cout << "Value is : " << v << endl;
    return 0;
}

    
    


