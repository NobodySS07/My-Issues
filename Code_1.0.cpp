#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long int Soe(long int,long int);
int main() {

    long int T,count;long int low,high;
cin>>T;
for(long int i=0;i<T;i++)
{
    cin>>low>>high;
    count= Soe(low,high);

}
  cout<<count;
return 0;
}



long int Soe(long int m,long int n)
{ int count=0;

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (long int p=m; p*p<=n; p++)
    {

        if (prime[p] == true)
        {


            for (long int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }


    for (long int p=m; p<=n; p++)
       if (prime[p])
          count++;

    return count;
}

