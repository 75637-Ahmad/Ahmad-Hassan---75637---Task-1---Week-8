#include <iostream>
using namespace std;
int main() 
{
    int i = 1;
    cout << "Numbers divisible by 3 between 1 and 50 are:\n";
    while (i <= 50) 
	{
        if (i % 3 == 0)
		{
	        cout<<i<<endl;
	    }
	    i++;
    }
}

