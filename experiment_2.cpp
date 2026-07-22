#include <bits/stdc++.h>
using namespace std;

class my_array{
    public:
    int arr[50];
    int size;
    
    void read(){
        int n;
        cout<<"enter size: "<<endl;
    	cin>>n;
        cout<<endl<<"enter values"<<endl;
    	for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        size=n-1;
    }
    
    void insert(int value,int pos)
    {
        int i=size;
        while(i>=pos)
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[pos]=value;
        size++;
        
    }
    void arr_delete(int pos){
        int i=pos;
        while(i<size)
        {
            arr[i]=arr[i+1];
            i++;
        }
        size--;
    }
    void display(){
        
        for(int i=0;i<=size;i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }

};

int main() {
	// your code goes here
    my_array arr;
    arr.read();
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"----------------------Menu-----------------------------"<<endl;
    
    int ch;
    bool ex=false;
    cout<<"1:insert"<<endl<<"2:delete"<<endl<<"3:display"<<endl<<"4:exit"<<endl;
    while(ex==false){
        cin>>ch;
        if(ch==1)
        {
            int value,p;
            cin>>p>>value;
            arr.insert(value,p);
        }
        else if(ch==2)
        {
            int p;
            cin>>p;
            arr.arr_delete(p);
        }
        else if(ch==3)
        {
            arr.display();
        }
        else if(ch==4)
        {
            ex=true;
        }
        else
        {
            cout<<"wrong choice"<<endl;
            
        }
        
    }
        cout<<endl<<"exited";
    
    }
    
    // arr.insert(34,1);
    // arr.arr_delete(3);
    // arr. display();
    
    
	
	

