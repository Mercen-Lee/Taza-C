#include <iostream>
#include <algorithm>
#include <fstream>
#include <ctime>

using namespace std;
int main(){time_t s=time(NULL);
  int r[10],j=0,k=0,l=0;
  srand((unsigned int)time(NULL));
  for(int i=0;i<10;i++)r[i]=rand()%1262;
  sort(r,r+10);string b;ifstream fin;
  fin.open("lines.txt");
  while(!fin.eof()){
    j++;string t;getline(fin,b);
    if(j==r[k]){cout<<"\n"<<b<<endl;
      getline(cin,t);l+=t.length();k++;}}
  fin.close();time_t e=time(NULL);
  cout<<"\n타수: "<<l/(e-s)*60<<endl;}
