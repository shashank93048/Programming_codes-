#include<iostream>
using namespace std;
int main(){
    int num[]={3,4,2,6,99,-3};
    int size=6; 
    int INT_MAX,INT_MIN;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        smallest = min(num[i],smallest);
        largest = max(num[i],largest);

    }
    cout<<"smallest="<<smallest <<endl;
    cout<<"largest="<<largest<<endl;
    return 0;
}