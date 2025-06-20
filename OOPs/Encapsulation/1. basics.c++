#include<iostream>
using namespace std;

class AccessSpecifier{
    private:
        int pvt = 10;
    protected:
        int prt = 20;
    public:
        int pub = 30;
};

class Derived : public AccessSpecifier{
    public:
        AccessSpecifier obj;
        void show(){
            // cout<<obj.pvt<<endl; // error: 'int AccessSpecifier::pvt' is private within this context
            // cout<<obj.prt<<endl; // error: 'int AccessSpecifier::prt' is protected within this context   
            // cout<<pvt<<endl; // error: 'int AccessSpecifier::pvt' is private within this context
            cout<<prt<<endl; // error: 'int AccessSpecifier::prt' is protected within this context
            cout<<pub<<endl; // ok: 'int AccessSpecifier::pub' is public within this context
        }
};
int main(){
    AccessSpecifier obj;
    // cout<<obj.pvt<<endl; // error: 'int AccessSpecifier::pvt' is private within this context
    // cout<<obj.prt<<endl; // error: 'int AccessSpecifier::prt' is protected within this context
    // cout<<obj.pub<<endl; // ok: 'int AccessSpecifier::pub' is public within this context
    Derived obj2;
    obj2.show(); // error: 'int AccessSpecifier::pvt' is private within this context
    return 0;
}