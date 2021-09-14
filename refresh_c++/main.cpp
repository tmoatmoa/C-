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
    auto a=L'a';
    auto b=0x4d;
    auto c="a";
    auto d=L"a";
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;

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
