//Maryam Elghazaly
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin >>x>>n;
    int result=1;
    for(int i=0;i<n;i++){
      result*=x;
    }
    cout <<result<<endl;

    }
    return 0;
}