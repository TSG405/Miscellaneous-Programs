#include <iostream>
#include <ctime>
using namespace std;
void sun(){
    cout<<" 00000000   000    000    0000000"<<endl<<"00000000    000    000   000000000\n"<<"000         000    000   000   000\n"<<"00000000    000    000   000   000\n"<<"     000    0000000000   000   000\n"<<"00000000     00000000    000   000\n\n\n";
    cout<<"Time to ease those aching backs cos youre meant to relax today\n";
}
void mon(){
cout<<"00       00    0000000    0000000\n"<<"000     000   000000000  000000000\n"<<"0000   0000   000   000  000   000\n"<<"00000 00000   000   000  000   000\n"<<"000  0  000   000   000  000   000\n"<<"000     000    0000000   000   000\n\n\n";
cout<<"phew,another hectic week resumes\n";
}
void tue(){
    cout<<"0000000000   000   000   000000000\n"<<" 00000000    000   000   00000000\n"<<"   000       000   000   000\n"<<"   000       000   000\   00000000\n"<<"   000       000000000   000\n"<<"   000        0000000    000000000\n\n\n";
}
void wed(){
    cout<<"000    000   000000000   0000000"<<endl<<"000    000   00000000    000  000"<<endl<<"000 00 000   000         000  000"<<endl<<"0000000000   00000000    000  000"<<endl<<"00      00   000         000  000"<<endl<<"0        0   000000000   0000000\n\n\n"<<endl;
}
void thu(){
    cout<<"0000000000   000   000   000   000\n"<<" 00000000    000   000   000   000\n"<<"    000      000000000   000   000\n"<<"    000      000000000   000   000\n"<<"    000      000   000   000000000\n"<<"    000      000   000    0000000\n\n\n";
}
void fri(){
    cout<<"0000000000   0000000000    000\n"<<"000000000    000000000     000\n"<<"000          000           000\n"<<"000000000    000           000\n"<<"000          000           000\n"<<"000          000           000\n\n\n";
    cout<<"last day of sweating,cant wait for saturday";
}
void sat(){
    cout<<" 000000000        0     000000000\n"<<"00000000000      000       000\n"<<"000             00000      000\n"<<"0000000000    000   000    000\n"<<"       000    000000000    000\n"<<"0000000000    000   000    000\n\n\n";
    cout<<"Only one word for today 'reeeellaaax'";
}
int main(){
cout<<"Today is\n\n\n";
time_t now=time(0);
char* brains=ctime(&now);
if((brains[1]!='u'&&brains[0]!='S')&&brains[1]!='h')
{switch(brains[0])
{
case 'S':
sun();
break;
case 'M':
mon();
break;
case 'T':
thu();
break;
case 'W':
wed();
break;
case 'F':
fri();
break;}}
else if(brains[0]=='T'){
thu();    
}
else if(brains[1]=='a'){
sat();}
else if(brains[1]=='u'){
    sun();
}
    return 0;
}
