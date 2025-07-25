/*This is my first program*/
/*Here,I am doing BInary Search*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr={10,20,60,70,110};
    int k=70;
    int l=0;
    int h=arr.size();
    while(l<=h){
        int mid=l+((h-l)>>1);
        if(arr[mid]==k){
            cout<<k<<" is present at "<<mid<<endl;
            return 0;
        }
        else if(arr[mid]<k) l=mid+1;
        else h=mid-1;
    }
    cout<<k<<" is not present";
    return 0;
}
