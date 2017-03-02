#include <iostream>

using namespace std;

struct zile{
    zile* next=nullptr;
    int value;
};


int main(){
    int cases;
    cin>>cases;
    for(int ZILLE=0;ZILLE<cases;ZILLE++){
        int tam,n;
        cin>>tam>>n;
        zile *zilles=new zile[tam];
        for(int i=0;i<n;i++){
            zile *zillin=new zile;
            cin>>zillin->value;
            zile *ptr;
            ptr=zilles[zillin->value%tam].next;
            if(ptr!=nullptr){
                while(ptr->next!=nullptr)
                    ptr=ptr->next;
                ptr->next=zillin;
            }else{
                zilles[zillin->value%tam].next=zillin;
            }
        }
        for(int i=0;i<tam;i++){
            zile *ptr=zilles[i].next;
            cout<<i<<" -> ";
            if(ptr!=nullptr)
            do{
                cout<<ptr->value<<" -> ";
                ptr=ptr->next;
            }while(ptr!=nullptr);
            if(ZILLE+1<cases||i+1<tam)cout<<"\\\n";
            else cout<<"\\";
        }
        cout<<endl;
        delete[] zilles;
    }
    return 0;
}