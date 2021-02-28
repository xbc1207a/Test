#include<iostream>
#include<map>
using namespace std;

int test(int* a, int a_size){
    map<int, int> m;

    for(int i=0; i<a_size; i++){
        if( m.count(a[i]) == 0 ){
            m[a[i]] = 1;
        }
        else{
            m[a[i]] = m[a[i]] + 1;
        }
    }

    for(int i=0; i<a_size; i++){
        cout<<a[i]<<" "<<m[a[i]]<<endl;
    }

    return 0;
}

int main(){
    int a[3] = {2, 3, 5};
    int c = test(a, 3);

    return 0;
}
