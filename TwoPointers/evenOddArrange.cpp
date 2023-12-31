#include<iostream>
#include<vector>
using namespace std;

vector<int> sortEvenOdd(vector<int>& v){
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while(left_ptr < right_ptr){
        if((v[left_ptr])%2 != 0 && (v[right_ptr])%2 == 0){
            int temp = v[left_ptr];
            v[left_ptr] = v[right_ptr];
            v[right_ptr] = temp;
            left_ptr++;
            right_ptr--;
        }
        if((v[left_ptr])%2 == 0){
            left_ptr++;
        }
        if((v[right_ptr])%2 != 0){
            right_ptr--;
        }
    }
}
 
int main(){
    int n;
    cout<<"Enter size of vector: "<<endl;
    cin>>n;    

    vector<int> v;
    cout<<"Enter Elements in vector: "<<endl;

    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    sortEvenOdd(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}