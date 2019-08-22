#include <iostream>
using namespace std;
int ciclos(int num){
    int contador=1;
    while(num != 1){
        if(num%2==0){
            num=num/2;
        }
        else{
            num = num*3+1;
        }
        contador++;
    }
    return contador;
}
int main(){
    int x,y,temp;
    int max=0;
    while(true){
        cin >> x >> y;
        cout << x << " " << y  << " " ;
        if(x < y) {
            swap(x,y);
        }
        for(int i = y;  i <= x;i ++){
                temp = ciclos(i);
                if(max < temp){
                    max = temp;
                }
            }

        cout << max << endl;
        max = 0;
    }
}
