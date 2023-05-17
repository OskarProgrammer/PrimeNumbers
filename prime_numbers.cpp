#include <iostream>
#include <math.h>

using namespace std;

class PrimeNumbers
{
    public:
        bool check(int number)
        {
            for (int i = 2; i < number; i++)
            {
                if (number % i == 0)
                {
                    return false;
                }
            }
            return true;
        }
};

int main(){
    int start,end;
    PrimeNumbers prime;

    cout << "Start and end: "<<endl;
    cin >> start >> end;
    for (start;start<=end;start++){
        if (prime.check(start)){
            cout << start <<endl;
        }
    };
    cout << endl;


    return 0;
}