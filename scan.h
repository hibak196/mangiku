//
// Created by hiba on 03/12/2023.
//
#include <string>
#include<vector>
using namespace std;

#ifndef MANGIKU_SCAN_H
#define MANGIKU_SCAN_H
class Scan{
private:
    string m_ip;
    vector<int> m_opened_ports;
public:
    Scan(string);
    void run();
    void report();
};
#endif //MANGIKU_SCAN_H
