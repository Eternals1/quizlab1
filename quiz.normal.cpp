#include <iostream>
using namespace std;

int euclidean (int m, int n){
    int c;
    while ((n != 0) && (n > 0)) { 
    c = m % n;
    m = n;
    n = c;
    }
    return m;
}

int main()
{
    system ("cls");
    int m,n,fpb;
    cout<<"Input m : "; cin>>m;
    cout<<"Input n : "; cin>>n;
    fpb = euclidean(m,n);
    cout<<"FPB dari "<<m<<" dan "<<n<<" adalah: "<<fpb<<endl;;
    
    return 0;
}