
#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name,NID,DOB;
    void getInfo(string x,string y,string z)
    {
        name=x;
        NID=y;
        DOB=z;
    }
    void putInfo()
    {
        cout<<"Name : "<<name<<endl;
    }
};
class Candidate: public Person
{
public:
    int ID,solved,participation;
    void getData(string x,string y,string z,int a,int b,int c)
    {
        getInfo(x,y,z);
        ID=a;
        solved=b;
        participation=c;
    }
    void putData()
    {
        putInfo();
        cout<<"ID of qualified student : "<<ID<<endl;
    }
    bool qualify()
    {
        if(solved>=300 && participation>=3)
            return 1;
        else
            return 0;
    }
};

int main()
{
    int i,j;
    Candidate obj[5];
    obj[0].getData("Bappy","123456789","30/06/1997",11608038,499,3);
    obj[1].getData("Manajir","123456780","30/06/1998",11608025,299,3);
    obj[2].getData("Anas","523456789","30/06/1996",11608028,490,5);
    obj[3].getData("Nabil","513456789","30/06/1995",11608029,600,3);
    obj[4].getData("Saikat","123456756","30/06/1996",11608020,499,1);
    cout<<"Qualified candidate list for trainer of CSE dept is given below : \n";
    for(i=0;i<5;i++)
    {
        if(obj[i].qualify())
            obj[i].putData();
    }
    return 0;
}
