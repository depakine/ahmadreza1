#include <iostream>
using namespace std;

struct mostatill{
    int tool, arz,masahat, mohit;
}f;

void masahat_mostatill(mostatill &f){
    f.masahat = f.tool * f.arz;
    f.mohit = 2 * (f.tool + f.arz);

    for (int i = 0; i < f.arz ; i++){
        cout<<"*\t";
    }

    for (int i = 0; i < f.tool; i++){
        cout<<"\n*";
        for (int j = 0; j < f.arz-1; j++){
            cout<<"\t";
        }
        cout<<"*"<<endl;
    }

    for (int n = 0; n < f.arz ; n++){
        cout<<"*\t";
    }
}

int main(){


    cout << "Enter the tool :";
    cin >> f.tool;
    cout << "Enter the arz : ";
    cin >> f.arz;

    masahat_mostatill(f);

    cout << "\n masahat: " << f.masahat << endl;
    cout << "\n mohit: " << f.mohit << endl;

    return 0;
}
