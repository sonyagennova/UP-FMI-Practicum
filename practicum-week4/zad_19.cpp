#include <iostream>
using namespace std;

void spiral(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
                cout << j * n + i + 1 << " ";
            else
                cout << (j + 1) * n - i << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    spiral(n);

    return 0;
}