#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    static vector<int> finalPrices(vector<int>& prices) {
        int judge=0;
        for(int i=0;i<sizeof(prices)-2;i++){
            for(int p=i+1;p<sizeof(prices)-1;p++){
                if(prices[p]<=prices[i]){
                    long c = prices[i]-prices[p];
                    std::cout<<c<<endl;
                    judge=1;
                    break;
                }
            }
            if(judge==1){
                judge=0;
                continue;
            }
        }
        return prices;
    }
};

vector<int> runningSum(vector<int>& nums) {
    int i=1;
    while(nums[i]!= NULL){
        nums[i]=nums[i]+nums[i-1];
        i++;
    }
    return nums;
}

int main() {


//    vector<int> vec;        //p94 3.20
//    int num;
//    while(cin>>num){
//        vec.push_back(num);
//    }
//    for(int i=0;i<vec.size();i+=2){
//        cout<<vec[i]+vec[i+1]<<endl;
//    }
//    for(int i=0;i<vec.size()/2;i++){
//        cout<<vec[i]+vec[vec.size()-i-1]<<endl;
//    }

//    vector<int> a(10,42);   //p94 3.19
//    vector<int> b={42,42,42,42,42,42,42,42,42,42};
//    vector<int> c=a;

//    vector<int>vec(10);     //p94 3.18
//    vec[0]=11;

//    vector<string>str;      //p94 3.17
//    string use;
//    while(cin>>use){
//        for(auto &c:use){
//            c=toupper(c);
//        }
//        str.push_back(use);
//    }
//        for(int i=0;i<str.size();i++){
//        cout<<str[i]<<endl;
//    }

//    vector<string> str;           //p91 3.14,3.15
//    string use;
//    while(cin>>use){
//        str.push_back(use);
//    }
//    for(int i=0;i<str.size();i++){
//        cout<<str[i]<<endl;
//    }

//    vector<vector<int>> a;    //p90 3.12
//    vector<string> b=a;
//    vector<string> c(10,"null");

//    const string s = "sdasd"; //p86 3.11
//    for(auto &c:s);

//    string str;       //p86 3.10
//    cin>>str;
//    for(int i=0;i<str.size();i++){
//        if(ispunct(str[i])){
//            str.erase(i,1);
//            i--;
//        }
//    }
//    cout<<str<<endl;

//    string s;           //p86 3.9
//    cout<<s[0]<<endl;   //合法，空字符串有一个'\0'

//    string str;             //p86 3.6,3.7,3.8
//    cin>>str;
//    for(int i=0;i<str.size();i++){
//        str[i]='X';
//    }
//    int i=0;
//    while(i<str.size()){
//        str[i]='X';
//        i++;
//    }
//    for(char &c:str)
//        c='X';
//    cout<<str<<endl;

//    vector<string> str;   //p81 3.5
//    string used,ret,ret2;
//    while(cin>>used){
//        cout<<used<<endl;
//        str.push_back(used);
//    }
//    for(int i=0;i<str.size();i++){
//        ret += str[i];
//    }
//    cout<<ret<<endl;
//    ret = "\0";
//    for(int i=0;i<str.size();i++){
//        ret += str[i] +' ';
//    }
//    cout<<ret<<endl;

//    string str1,str2;           //p81 3.4
//    getline(cin,str1);
//    getline(cin,str2);
//    if(str1==str2)
//        cout<<"equal"<<endl;
//    else
//        cout<<(str1>str2?str1:str2)<<endl;
//    if(str1.size()==str2.size())
//        cout<<"equal length"<<endl;
//    else
//        cout<<(str1.size()>str2.size()?str1.size():str2.size())<<endl;

//    string s(5,'n');      //p81 3.2
//    string d;
//    getline(cin,d);
//    string e;
//    cin>>e;
//    cout<<d<<endl<<s<<endl<<e<<endl;

//    int a=3,b=4;            //p64 2.36
//    decltype (a) c=a;
//    decltype ((b)) d=a;
//    ++c;
//    ++d;
//    cout<<c<<endl<<d<<endl<<a<<endl<<b<<endl;

//    const int i=42;       //p62 2.35
//    auto j=i;
//    j+=1;
//    const auto &k=i;
//    auto *p=&i;
//    p+=3;
//    const auto j2=i,&k2=i;

//    int null=0,*p=&null;  //p60 2.32

//    int *p = 0;          //p59 2.25
//    *p=4;
//    cout<<*p<<endl<<p<<endl;

//    int i=0;        //p51 2.22
//    int *p;
//    if(p)
//        cout<<"p";
//    p=&i;
//    if(p)
//        cout<<"p2";
//    if(*p)
//        cout<<"i";
//    i=1;
//    if(*p)
//        cout<<"i2";

//    int i=0;      //p51 2.21
//    int *p=&i;

//    int i=42;   //p51 2.20
//    int *p=&i;
//    *p=*p**p;
//    cout<<i;

//    int i=9;      p51 2.18
//    int *p=&i;
//    *p=4;
//    i=5;
//    cout<<i<<endl<<*p<<endl;

//    int i,&ri=i;  //p47 2.17
//    i=5;
//    ri=10;
//    cout<<i<<endl<<ri<<endl;

//    int i=0,&r1=i; //p46 2.16
//    double d =0,&r2=d;
//    r2 = 3.14159;
//    r2=r1;
//    i=r2;
//    r1=d;
//    cout<<i<<endl<<d<<endl<<r1<<endl<<r2<<endl;

//    int a(8); //p46 2.15
//    int &b =a;

//    int i=43; //p45 2.13
//    int j=i;
//    cout<<j;

//    int _;  //p43 2.12
//    _=1;
//    int 1_0r_2=1;
//    double Double;
//    int catch-22;
//    cout<<_<<endl;

//    cin>>int a;  //p40 2.9
//    int b{3.14};
//    int dd;
//    double  c = dd =33.33;
//    int e = 3.14;
//    cout<<dd<<endl<<c<<endl<<e<<endl;

//    cout<<"2\x4d\n"<<"2\t\115\n"; //p38 2.8

//    auto a=L'a'; //p38 2.5,2.6
//    char b=0x4d;
//    auto c="a";
//    auto d=L"a";
//    int month =9;
//    int month2 = 011;
//    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<month<<endl<<month2<<endl;

//    int sum=0,val; //p15 1.16
//    for(int i=0;i<5;i++){
//        cin>>val;
//        sum+=val;
//    }
//    cout<<sum<<endl;

//    int sum=0; //p12 1.12
//    for(int i=-100;i<=100;++i){
//        sum+=i;
//    }
//    cout<<sum<<endl;

//    int num1,num2; // p11 1.11
//    cout<<"input"<<endl;
//    cin>>num1>>num2;
//    int i = num1<num2 ?num1:num2;
//    while(i<=(num1>num2?num1:num2)){
//        cout<<i<<endl;
//        i++;
//    }

//    for(int i=10;i>0;i--){//p11 1.10
//        cout<<i<<endl;
//    }

//    int i=50,sum=0; //p11 1.9
//    while(i<100){
//        sum+=i;
//        i++;
//    }
//    cout<<sum<<endl;

//    cout<<"/*"; //p9 1.8
//    cout<<"*/";
//    cout<</*"*/" */;
//    cout<</* "*/" /* "/*" */;

    return 0;
}
