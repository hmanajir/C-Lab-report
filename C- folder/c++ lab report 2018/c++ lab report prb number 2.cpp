include<bits/stdc++.h>
using namespace std;
map<string,int>m;
class Person
{
public:
    string name,cell;
    int loc;
    void get_Info(string s1,string s2,int a)
    {
        name=s1;
        cell=s2;
        loc=a;
    }
    void put_Info()
    {
        cout<<"Mr. , "<<name<<endl;
    }
    int check()
    {
        return loc;
    }
};
class Driver:public Person
{
public:
    string v_no;
    void get_Data(string s1,string s2,string s3,int a)
    {
        get_Info(s1,s2,a);
        v_no=s3;
    }
    void put_Data()
    {
        put_Info();
        cout<<"Vehicle no. "<<v_no<<" will pick you up"<<endl<<endl;
    }
};
class Passanger: public Person
{
public:
    Get_Info(string s1,string s2,int a)
    {
        get_Info(s1,s2,a);
    }
};

int main()
{
    string s;
    s="Campus";         m[s]=1;
    s="Kotbari";        m[s]=2;
    s="Biswaroad";      m[s]=3;
    s="Tomsombridge";   m[s]=4;
    s="Kandirpar";      m[s]=5;

    Driver d[3];
    d[0].get_Data("Malek","017xxxxxxxx","Dhaka-1101",m["Campus"]);
    d[1].get_Data("Khalek","017xxxxxxxx","Dhaka-1102",m["Kotbari"]);
    d[2].get_Data("Ashik","017xxxxxxxx","Dhaka-1103",m["Kandirpar"]);
    Passanger p[3];
    p[0].Get_Info("Manajir","017xxxxxxx",m["Kandirpar"]);
    p[1].Get_Info("Bappy","017xxxxxxx",m["Kotbari"]);
    p[2].Get_Info("Arman","017xxxxxxx",m["Biswaroad"]);
    int chk;
    for(int i=0;i<3;i++)
    {
        int res,dif=1000,temp;
        for(int j=0;j<3;j++)
        {
            temp=fabs(d[j].check() - p[i].check());
            if(temp<dif)
            {
                dif=temp;
                res=j;
            }
        }
        p[i].put_Info();
        d[res].put_Data();
        cout<<"Press 1 to continue the journey or 2 to cancel : ";
        cin>>chk;
        if(chk == 1)
        {
            cout<<"Driver will come in short time. Thanks for using UBER\n\n";
        }
        else
        {
            cout<<"Your journey is successfully canceled. Thanks for using UBER\n\n";
        }
    }
    return 0;
}
