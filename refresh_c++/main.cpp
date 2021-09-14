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
//    vector<int> a = {8,4,6,2,3};
//    vector<int> b;
//    cout<<"aa"<<a.size()<<endl;
//    b = runningSum(a);
//    for(int i=0;i<b.size();i++)
//        cout<<b[i]<<endl;

    std::string str ("This is an example sentence.");
    std::cout << str << '\n';
    // "This is an example sentence."
    str.erase (10,8);                        //            ^^^^^^^^
    std::cout << str << '\n';
    // "This is an sentence."
    str.erase (str.begin()+9);               //           ^
    std::cout << str << '\n';
    // "This is a sentence."
    str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
    std::cout << str << '\n';
    // "This sentence."
    return 0;
}
