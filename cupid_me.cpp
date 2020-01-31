#include <bits/stdc++.h>
using namespace std;

void Soe();
bool prime[10000001];
long int numberOfPrimes[10000001] = {0};
int main() 
{
    long int count, T,range; double a;
    long int low,high;
    Soe();
    cin>>T;
    for(long int i=0;i<T;i++)
    {
        cin>>low>>high;
        count = numberOfPrimes[high] - numberOfPrimes[low -1];
        range=high-low+2;
        a=count*range/(count+1);
        cout<<a;
    }
    return 0;
}

void Soe()
{ 
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (long int p = 2; p*p<=10000000; p++)
    {
        if (prime[p] == true)
        {
            for (long int i = p*p; i <= 10000000; i += p)
                prime[i] = false;
        }
    }
    
    for (long int p = 1; p <= 10000000; ++p)
    {
       if(prime[p])
          numberOfPrimes[p] = numberOfPrimes[p -1] +1;
        else
            numberOfPrimes[p] = numberOfPrimes[p -1];
    }
}
