/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int desconvierte(string val){
    int tam=val.length();
    int con=0;
    int resp=0;
    int pot,num;
    ciclo:
        string let="";
        let=let+val[tam-1-con];
        pot=pow(16,con);
        if(let=="A") goto opciona;
        if(let=="B") goto opcionb;
        if(let=="C") goto opcionc;
        if(let=="D") goto opciond;
        if(let=="E") goto opcione;
        if(let=="F") goto opcionf;
        num=stoi(let);
        resp=resp+num*pot;
        goto continua;
        opciona:
            resp=resp+10*pot;
        goto continua;
        opcionb:
            resp=resp+11*pot;
        goto continua;
        opcionc:
            resp=resp+12*pot;
        goto continua;
        opciond:
            resp=resp+13*pot;
        goto continua;
        opcione:
            resp=resp+14*pot;
        goto continua;
        opcionf:
            resp=resp+15*pot;
        goto continua;
        
        continua:
            cout <<"";
        con++;
    if(con<tam) goto ciclo;
    return resp;
}


string convierte(int valdec){
    string hex="";
    int resto;
    if(valdec<10) goto pro;
    convierte: 
        resto=valdec%16;
        if(resto==10) goto sola;
        if(resto==11) goto solb;
        if(resto==12) goto solc;
        if(resto==13) goto sold;
        if(resto==14) goto sole;
        if(resto==15) goto solf;
        hex= to_string(resto)+hex;
        goto continua;
        sola:
            hex="A"+hex;
        goto continua;
        solb:
            hex="B"+hex;
        goto continua;
        solc:
            hex="C"+hex;
        goto continua;
        sold:
            hex="D"+hex;
        goto continua;
        sole:
            hex="E"+hex;
        goto continua;
        solf:
            hex="F"+hex;
        goto continua;
        continua:
            cout <<"";
        valdec=valdec/16;
    if(valdec!=0) goto convierte;
    goto continua1;
    pro:
        hex=hex+"0"+to_string(valdec);
    continua1:
        cout <<"";
    return hex;
}
int main()
{
    int valdec,ah1,al1;
    string hex="";
    string ah="";
    string al="";
    cout<<"Registro AX"<<endl;
    cout <<"Valor decimal: "; cin>>valdec;
    hex=convierte(valdec);
    ah=ah+hex[0]+hex[1];
    al=al+hex[2]+hex[3];
    cout << " ah || al"<<endl;
    cout <<"---------"<<endl;
    cout <<" "<<ah<<" || "<<al<<" "<<endl;
    cout << "Valor de ah: "; cin>> ah1;
    ah=convierte(ah1);
    
    hex=ah+al;
    cout << " ah || al"<<endl;
    cout <<"---------"<<endl;
    cout <<" "<<ah<<" || "<<al<<" "<<endl;
    cout <<"AX hex = "<<hex<<endl;
    cout <<"AX dec = "<<desconvierte(hex)<<endl;
    
    
    
    cout << "Valor de al: "; cin>> al1;
    al=convierte(al1);
    
    hex=ah+al;
    cout << " ah || al"<<endl;
    cout <<"---------"<<endl;
    cout <<" "<<ah<<" || "<<al<<" "<<endl;
    cout <<"AX hex = "<<hex<<endl;
    cout <<"AX dec = "<<desconvierte(hex)<<endl;
    
    return 0;
}
