#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct SV{int sbd;
string ten;
float tb;
//bool operator < (SV other){
//    if (tb<other.tb) return true;
//    else return false;}
//bool operator > (SV other){
//    if (tb>other.tb) return true;
//    else return false;}

void in(){
cout<<sbd<<endl;
cout<<ten<<endl;
cout<<tb<<endl;}
};
bool compareTwoStudents(SV a, SV b)
{

    if (a.tb != b.tb)
        return a.tb < b.tb;}

void chuanhoaten(SV &sv){for (int i=0;i<sv.ten.size();i++){
if(sv.ten[i]==' '&&sv.ten[i+1]==' ')
    {sv.ten.erase(i,i+1);
    i--;
}
if(islower(sv.ten[i])&&sv.ten[i-1]==' ') sv.ten[i] -=32;
if(isupper(sv.ten[i])&&sv.ten[i]!=' ')    sv.ten[i] +=32;
}
}

istream& operator>>(istream& in ,SV &sv){in>>sv.sbd>>ws;
getline(in,sv.ten);
in>>sv.tb;
return in;
}
int main(){int n;
cin>>n;
SV ds[n];
for (int i=0;i<n;i++){
    cin>>ds[i];
    chuanhoaten(ds[i]);
} sort(ds,ds+n,compareTwoStudents);
for(int i=0;i<3;i++)
{ds[i].in();
}
}
