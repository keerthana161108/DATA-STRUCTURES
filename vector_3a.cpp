#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    vector<int>v;
    int choice,x,key,n;
    do{
        cout<<"\n-------VECTOR OPERATIONS MENU------";
        cout<<"\n1.insert elements";
        cout<<"\n2.display elements";
        cout<<"\n3.sort elements";
        cout<<"\n4.serch element";
        cout<<"\n5.exit";
        cout<<"\n6.delete";
        cout<<"\nenter your choice";
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter number of elements to insrt:";
            cin>>n;
            cout<<"enter elements:\n";
            for(int i=0;i<n;i++){
                cin>>x;
                v.push_back(x);
            }
            break;
            case 2:
            if(v.empty()){
                cout<<"vector is empty";
            }
            else {
                cout<<"vector elemets:";
                for(vector<int>::iterator it=v.begin();it !=v.end();it++){
                    cout<<*it<<" ";
                }
            }
            break;
            case 3:
            if(v.empty()){
                cout<<"vector is empty,cannot sort";
            }
            else{
                sort(v.begin(),v.end());
                cout<<"vector sorted successfully";
            }
            break;
            case 4:
            if(v.empty()){
                cout<<"vector is empty,cannot search";
            }
            else{
                cout<<"enter element to search";
                cin>>key;
                vector<int>::iterator pos=find(v.begin(),v.end(),key);
                if(pos !=v.end()){
                    cout<<"element found at position"<<(pos-v.begin())+1;
                }
                else{
                    cout<<"element not found";
                }
            }
            break;
            case 5:
            cout<<"exiting program..";
            break;
            case 6:
            cout<<"poped element:";
            break;

            default:
            cout<<"invalid choice!try again.";
        }
    }
    while(choice !=6);
    return 0;
}