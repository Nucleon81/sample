#include<iostream>
using namespace std;

int main(){
    int bin[]={44,55,66,23,67,64};
    int key = 55 ;
    int ans = -1;

    for(int i=0 ; i < 6 ; i++)
    {
        if(bin[i] == key )
        {
        ans = i ;
        break;
        }
        cout << "Key is present at : " << ans ;
    }
    return 0;
}
