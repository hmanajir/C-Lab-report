#include<bits/stdc++.h>
using namespace std;
class Person
{
    string name,NID,DOB;
public:
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
class Student:public Person
{
    int ID,solved;
    double gpa;
public:
    void getData(string x,string y,string z,int a,int b,double c)
    {
        getInfo(x,y,z);
        ID=a;
        solved=b;
        gpa=c;
    }
    void putData()
    {
        putInfo();
        cout<<"ID of the student : "<<ID<<endl;
    }
    bool qualify()
    {
        if(solved>=100 && gpa>=3.5)
            return true;
        else
            return false;
    }
    bool operator < (Student A)
    {
        if((((gpa*10)/4.0)+((solved*10)/100.0)) > (((A.gpa*10)/4.0)+((A.solved*10)/100.0)))
            return true;
        return false;
    }
};

int main()
{
    int i,j,n,cnt=0;
    n=6;
    Student obj[n];
    obj[0].getData("X","12345","01/01/1996",11607080,150,3.5);
    obj[1].getData("Y","12346","01/01/1996",11607081,200,3.5);
    obj[2].getData("Z","12347","01/01/1996",11607082,200,3.6);
    obj[3].getData("A","12348","01/01/1996",11607083,90,3.5);
    obj[4].getData("B","12349","01/01/1996",11607084,150,3.4);
    obj[5].getData("C","12340","01/01/1996",11607085,150,3.5);
    sort(obj,obj+n);
    j=0;
    while(1)
    {
        if(cnt>4 || j>=n)
            break;
        if(obj[j].qualify())
        {
            cout<<"Rank : "<<cnt+1<<endl;
            obj[j].putData();
            cout<<endl;
            cnt+=1;
        }
        j++;
    }
    return 0;
}
