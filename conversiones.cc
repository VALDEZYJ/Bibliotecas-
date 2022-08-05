#include <iostream>
#include "cabeceras/conver"

using namespace std;

main()
{
    int op=0;
    
    while(op==0){
    cout<<"*********************************"<<endl;
    cout <<"Que conversion haremos?" << endl;
    
    cout <<"1. centimetros a kilometros" << endl;
    cout <<"2. kilometros a centimetros" << endl;
    cout <<"3. centimetros a milimetros" << endl;
    cout <<"4. milimetros a centimetros" << endl;
    cout <<"5. metros a centimetros" << endl;
    cout <<"6. centimetros a metros" << endl;
    cout <<"7. decametros a metros"<< endl;
    cout <<"8. metros a decametros" << endl;
    cout <<"9. metros a hectoemtros" <<endl;
    cout <<"10. hectometros a metros"<<endl;
    cout <<"11. micrometro a metro"<< endl;
    cout <<"12. metros a micrometros"<< endl;
    cout <<"13. Salir del programa" << endl;
    cin >> op;

    if (op == 1)
    {
        float r=100000,res;
        res=cmAkm(r);
        cout<<r<<" centimetros a kilometros son "<<res <<" km."<<endl; 
        op=0;    
    }
    if (op == 2)
    {
        float r=100000, res;
        res=kmAcm(r);
        cout<<r<<" kilometros a centimetros son " <<res <<" cm."<<endl;
        op=0;
    }
    if (op == 3)
    {
        float r=10, res;
        res=cmAmm(r);
        cout<<r<<" centimetros a milimetros son "<<res <<" mm."<<endl;
        op=0;
    }
    if (op == 4)
    {
        float r=10, res;
        res=mmAcm(r);
        cout<<r<<" milimetros a a centimetros son "<<res<<" cm." << endl;
        op=0;
    }
    if(op == 5)
    {
        float r=100, res;
        res=mAcm(r);
        cout<<r<<" metros a centimetros son "<<res<<" cm." << endl;
        op=0;

    }
    if (op == 6)
    {
        float r=100, res;
        res=cmAm(r);
        cout<<r<<" centimetros a metros son "<<res<<" m." << endl;
        op=0;
    }
    if (op == 7)
    {
        float r=10, res;
        res=decamet(r);
        cout<<r<<" decametros a metros son "<<res<<" m." << endl;
        op=0;
    }
    if (op == 8)
    {
        float r=10, res;
        res=metdeca(r);
        cout<<r<<" metros a decametros son "<<res<<" dam." <<endl;
        op=0;
    }
    if (op == 9)
    {
        float r=100, res;
        res=methecto(r);
        cout<<r<<" metros a hectometros son "<<res<<" hm. "<<endl;
        op=0;
    }
    if (op == 10)
    {
        float r=100, res;
        res=hectomet(r);
        cout<<r<<" hectometros a metros son "<<res<<" m."<<endl;
        op=0;
    }
    if (op == 11)
    {
        float r=1000000, res;
        res=micmet(r);
        cout<<r<<" micrometros a metros son "<<res<<" m."<<endl;
        op=0;
    }
    if (op == 12)
    {
        float r=1000000, res;
        res=metmic(r);
        cout<<r<<" metros a micrometros son "<<res<<" mic."<<endl;
        op=0;
    }
    getchar();
    };
    
   
}