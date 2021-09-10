#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c >= a && c <= b){
      cout <<"Intervalo"<< endl;
    }
    else if(c < a){
           cout <<"Izquierda"<< endl;
    }
    else if(c > b){
           cout <<"Derecha"<< endl;
    }
    return 0;
}
