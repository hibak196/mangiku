#include<iostream>
using namespace std;
#include"scan.h"

Scan::Scan(string ip){
    m_ip=ip;
}
void Scan::run(){
     m_opened_ports.push_back(80) ;
     m_opened_ports.push_back(120);
}
void Scan::report(){
    cout<<"L'adresse ip saisie est : "<<m_ip;
    for(int i =0;i<m_opened_ports.size();i++){
        cout<<"port : "<<m_opened_ports[i];
    }
}