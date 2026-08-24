#include<bits/stdc++.h>
using namespace std;
// making circular double ended queue using array 
class MyDequeue{
    public:
    int ar[5];
    int size=5;
    int F=-1;
    int R=-1;

    bool isEmpty(){
        if(F==-1 || ((R-F+size)%size)+1==0)
            return true;
        else return false;
    }
    void AddRear(int x){
        if((R+1)%size == F)
            cout<<"overflow"<<endl;
        else{
            R=(R+1)%size;
            ar[R]=x;
            if(F==-1)
                F++;

        }
    }
    void AddFront(int x)
    {
        if((F-+1)%size == R)
            cout<<"overflow"<<endl;
        else{
            if(F==-1){
                F++;
                R++;
            }
                
            else
                F=(F-1)%size;
                
            ar[F]=x;
            

        }   
    }

    // void display(){
    //     for(int i=F;i!=R+1;i=(i+1)%size)
    //     {
    //         cout<<ar[i]<<" ";
    //     }
    //     cout<<endl;
    // }

    void DeleteFront(){
        if(isEmpty())
        {
            cout<<"Underflow"<<endl;
            return;
        }
        F=(F+1)%size;
    }
    void DeleteRear(){
        if(isEmpty())
        {
            cout<<"Underflow"<<endl;
            return;
        }
        R=(R-1)%size;
    }

    void display(){
        int i=F;
        while(true){
            cout<<ar[i]<<" ";
            if(i==R) 
                break;
            
            i=(i+1)%size;
        }
        cout<<endl;
    }


};
int main(){
    MyDequeue dq;
    dq.AddRear(78);
    dq.AddRear(8);
    dq.AddRear(67);//3
    dq.display();
    dq.AddRear(90);//4
    dq.display();
    dq.AddRear(60);//5
    dq.display();
    dq.AddRear(88);
    dq.DeleteFront();
    dq.DeleteRear();
    dq.display();
    dq.AddFront(45);
    dq.display();
    dq.AddFront(40);
    dq.display();
    

}