#include<bits/stdc++.h>
using namespace std;

bool static hashedArray[1000][3];

class Hashing{
    public:
    void create(vector<int>arr, int n){
        for(int i = 0; i < n; i++){
            if(arr[i] >= 0){
                hashedArray[arr[i]][1] = true;
            }
            else{
                int abc = -1 * arr[i];
                hashedArray[abc][2] = true;
            }
        }
    }
    bool search(int num){
        if(num >= 0){
            if(hashedArray[num][1]){
                return true;
            }
            else {
                cout<<"falsie"<<endl;
                return false;
            }
        }
        else{
            int abc = num * -1;
            if(hashedArray[abc][2]){
                return true;
            }
            else return false;
        }
    }
};

int main(){
    vector<int>num = {1, 2, -1, 4, 10};
    Hashing hash;
    hash.create(num, 5);
    bool response = hash.search(-2);
    if(response){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
}