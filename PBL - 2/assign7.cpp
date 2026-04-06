#include <iostream>
using namespace std;

int x[20];

bool Place(int k, int i){
    for(int j = 1; j <= k - 1; j++){
        if(x[j] == i || abs(x[j] - i) == abs(j - k))
            return false;
    }
    return true;
}

void NQueen(int k, int n){
    for(int i = 1; i <= n; i++){
        if(Place(k, i)){
            x[k] = i;
            if(k == n){
                cout << "\nSolution: ";
                for(int j = 1; j <= n; j++)
                    cout << x[j] << " ";
            }

            else{
                NQueen(k + 1, n);
            }
        }
    }
}

int main(){
    int n;

    cout << "Enter number of queens: ";
    cin >> n;

    NQueen(1, n);

    return 0;
}