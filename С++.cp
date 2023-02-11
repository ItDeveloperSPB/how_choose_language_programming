//first example
#include <iostream>

using namespace std;

int main()
	{
    	cout<<"Hello World";
        return 0;
	}

//second example
#include <iostream>

	using namespace std;
	void ShowWages(int rate, int days);

	int main()
	{

    		int rate = 100;
    		int days = 22;

    		ShowWages(rate, days);
    		return 0;
	}

	void ShowWages(int rate, int days){
    		cout << "sum: " << rate * days << "\n";
	}